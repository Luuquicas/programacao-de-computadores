int coordenadaEhValida(int x, int y) {
    if(x >= 0 && x < 3) {
        if(y >= 0 && y < 3)
            return 1;
    }
    return 0;
}

void imprimir() {
    int lin, col;

    printf("\n\t    0  1  2\n");
    for(lin = 0; lin < 3; lin++) {
        printf("\t%d ", lin);
        for(col = 0; col < 3; col++) {
            if(eValido(jogo[lin][col])) {
                if(col < 2)
                    printf(" %c |", jogo[lin][col]);
                else
                    printf(" %c ", jogo[lin][col]);
            } else {
                if(col < 2)
                    printf("   |");
                else
                    printf("   ");
            }
        }
        if(lin < 2)
            printf("\n\t   ---------\n");
    }
}

int ganhouDiagonalSecundaria() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(eValido(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}