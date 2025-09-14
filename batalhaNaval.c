#include <stdio.h>

int main() {
    // ============================
    // NÍVEL AVENTUREIRO
    // ============================

    // Etapa 1: Criação do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // 0 = espaço vazio

    // Etapa 2: Exibição inicial do tabuleiro vazio
    printf("Tabuleiro 10x10 (inicial):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < navio_vertical_tamanho; i++) {
        int y = navio_vertical_y_start + i;
        tabuleiro_novato[y][navio_vertical_x] = 1;
        printf("(%d, %d)\n", navio_vertical_x, y);
    }

    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < navio_horizontal_tamanho; i++) {
        int x = navio_horizontal_x_start + i;
        tabuleiro_novato[navio_horizontal_y][x] = 1;
        printf("(%d, %d)\n", x, navio_horizontal_y);
    }

    // Nível Aventureiro – Tabuleiro 10x10
    int tabuleiro_aventureiro[10][10] = {0};

    // Navio 1 – Vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro_aventureiro[1 + i][2] = 3;
    }

    // Navio 2 – Horizontal
    for (int i = 0; i < 4; i++) {
        tabuleiro_aventureiro[7][4 + i] = 3;
    }

    // Navio 3 – Diagonal principal (↘)
    for (int i = 0; i < 3; i++) {
        tabuleiro_aventureiro[2 + i][2 + i] = 3;
    }

    // Navio 4 – Diagonal secundária (↙)
    for (int i = 0; i < 3; i++) {
        tabuleiro_aventureiro[5 + i][4 - i] = 3;
    }

    return 0;
}