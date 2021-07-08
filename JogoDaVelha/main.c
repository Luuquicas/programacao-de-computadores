#include <stdio.h>
#include <stdlib.h>

char board[3][3];
char player1[50], player2[50];

//Inicia a matriz com algum caractere qualquer
void start_matriz(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            board[i][j] = 'a';
        }
    }
}

//Valida o caractere inserido pelo usuário
int valid_character(char letra){
    if(letra == 'x' || letra == '0'){
        return 1;
    }else{
        return 0;
    }
}

//Valida a posição da inserção do caractere
int valid_coordenate(int x, int y){
    if(x >= 0 && x < 3){
        if(y >= 0 && y < 3){
            return 1;
        }
    }
    return 0;
}

//Verifica se a posição desejada está vazia
int void_position(int x, int y){
    if(board[x][y] != 'x' && board[x][y] != '0'){
        return 1;
    }else{
        return 0;
    }
}

//Verifica se o jogador ganhou pelas linhas
int win_line(){
    int i, j, equal = 1;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if(valid_character(board[i][j]) && board[i][j] == board[i][j+1]){
                equal++;
            }
        }
        if(equal == 3){
            return 1;
        }
        equal = 1;
    }
    return 0;
}

//Verifica se o jogador ganhou o jogo pelas colunas
int win_column(){
    int i, j, equal = 1;
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if(valid_character(board[j][i]) && board[j][i] == board[j+1][i]){
                equal++;
            }
        }
        if(equal == 3){
            return 1;
        }
        equal = 1;
    }
    return 0;
}

//Verifica se o jogador ganhou pela diagonal principal
int win_diagonal(){
    int i, equal = 1;
    for(i=0; i<2; i++){
        if(valid_character(board[i][i]) && board[i][i] == board[i+1][i+1]){
            equal++;
        }
        if(equal == 3){
            return 1;
        }else{
            return 0;
        }
    }
}

//Verifica se o jogador ganhou pela diagonal secundária
int win_second_diagonal(){
    int i, equal = 1;
    for(i=0; i<2; i++) {
        if(valid_character(board[i][3-i-1]) && board[i][3-i-1] == board[i+1][3-i-2])
            equal++;
    }
    if(equal == 3){
        return 1;
    }else{
        return 0;
    }
}

//Imprime na tela o tabuleiro
void print_board(){
    int l, c;

    printf("\n\t    0  1  2\n");
    for(l=0; l<3; l++) {
        printf("\t%d ", l);
        for(c=0; c<3; c++) {
            if(valid_character(board[l][c])) {
                if(c < 2)
                    printf(" %c |", board[l][c]);
                else
                    printf(" %c ", board[l][c]);
            } else {
                if(c < 2)
                    printf("   |");
                else
                    printf("   ");
            }
        }
        if(l < 2)
            printf("\n\t   ---------\n");
    }
}

//Prodecimento jogar
void play_game(){
    int x, y, valida, ordem = 1, winner = 0, jogadas = 0;

    do{
        do{
            print_board();
            printf("\nDigite a coordenada que deseja preencher: ");
            scanf("%d %d", &x, &y);
            valida = valid_coordenate(x, y);
            if(valida == 1){
                valida += void_position(x, y);
            }
        }while(valida != 2);

        if(ordem == 1){
            board[x][y] = 'x';
        }else{
            board[x][y] = '0';
        }

        jogadas++;

        ordem++;
        if(ordem == 3){
            ordem = 1;
        }
        winner += win_line();
        winner += win_column();
        winner += win_diagonal();
        winner += win_second_diagonal();

    }while(winner == 0 && jogadas < 9);
    if(winner != 0){
        if(ordem - 1 == 1)
            printf("\nParabens, %s!! Voce venceu!!!\n", player1);
        else
            printf("\nParabens, %s!! Voce venceu!!!\n", player2);
    }else
        printf("\nQue pena...Ninguem ganhoou...\n\n");
}

int main(){
    int op;

    printf("Jogador 1, digite seu nome: ");
    fgets(player1, 50, stdin);
    printf("Jogador 2, digite seu nome: ");
    fgets(player2, 50, stdin);

    do{
        start_matriz();
        play_game();
        printf("Deseja jogar novamente?\n1 -- Sim\n2 -- Nao\n");
        scanf("%d", &op);
    }while(op == 1);

    system("pause");

    return 0;
}