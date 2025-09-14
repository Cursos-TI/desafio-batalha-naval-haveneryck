#include <stdio.h>

int main() {
    // Criação do tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Definição das variáveis para os navios
    // Navio vertical
    int navio_vertical_x = 1;
    int navio_vertical_y_start = 0;
    int navio_vertical_tamanho = 3;

    // Navio horizontal
    int navio_horizontal_y = 4;
    int navio_horizontal_x_start = 2;
    int navio_horizontal_tamanho = 2;

    // Posiciona navio vertical no tabuleiro
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < navio_vertical_tamanho; i++) {
        int y = navio_vertical_y_start + i;
        tabuleiro[y][navio_vertical_x] = 1;
        printf("(%d, %d)\n", navio_vertical_x, y);
    }

    // Posiciona navio horizontal no tabuleiro
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < navio_horizontal_tamanho; i++) {
        int x = navio_horizontal_x_start + i;
        tabuleiro[navio_horizontal_y][x] = 1;
        printf("(%d, %d)\n", x, navio_horizontal_y);
    }

    return 0;
}