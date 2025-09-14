#include <stdio.h>

int main() {
    // Nível Novato – Tabuleiro 5x5
    int tabuleiro_novato[5][5] = {0};

    // Navio vertical (coluna fixa, linha variável)
    int navio_vertical_x = 1;
    int navio_vertical_y_start = 0;
    int navio_vertical_tamanho = 3;

    // Navio horizontal (linha fixa, coluna variável)
    int navio_horizontal_y = 4;
    int navio_horizontal_x_start = 2;
    int navio_horizontal_tamanho = 2;

    // Posiciona navio vertical
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < navio_vertical_tamanho; i++) {
        int y = navio_vertical_y_start + i;
        tabuleiro_novato[y][navio_vertical_x] = 1;
        printf("(%d, %d)\n", navio_vertical_x, y);
    }

    // Posiciona navio horizontal
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < navio_horizontal_tamanho; i++) {
        int x = navio_horizontal_x_start + i;
        tabuleiro_novato[navio_horizontal_y][x] = 1;
        printf("(%d, %d)\n", x, navio_horizontal_y);
    }

    // Nível Aventureiro – Tabuleiro 10x10
    int tabuleiro_aventureiro[10][10] = {0};

    return 0;
}