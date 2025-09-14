#include <stdio.h>

int main() {
    // ============================
    // NÍVEL AVENTUREIRO
    // ============================

    // Etapa 1: Criação do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // 0 = espaço vazio, 3 = navio

    // Etapa 2: Posicionamento dos navios

    // Navio 1 – Vertical (coluna 2, linhas 1 a 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][2] = 3;
    }

    // Navio 2 – Horizontal (linha 7, colunas 4 a 7)
    for (int i = 0; i < 4; i++) {
        tabuleiro[7][4 + i] = 3;
    }

    // Navio 3 – Diagonal principal (↘) começando em (2,2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2 + i][2 + i] = 3;
    }

    // Navio 4 – Diagonal secundária (↙) começando em (5,4)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][4 - i] = 3;
    }

    // Etapa 3: Exibição do tabuleiro com navios
    printf("Tabuleiro 10x10 com navios posicionados:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}