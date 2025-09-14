#include <stdio.h>

int main() {
    // Etapa 1: Criação do tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Etapa 2: Definição das posições dos navios
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
        tabuleiro[y][navio_vertical_x] = 1;
        printf("(%d, %d)\n", navio_vertical_x, y);
    }

    // Posiciona navio horizontal
    printf("\nCoordenadas do navio horizontal:\n");
    for (int i = 0; i < navio_horizontal_tamanho; i++) {
        int x = navio_horizontal_x_start + i;
        tabuleiro[navio_horizontal_y][x] = 1;
        printf("(%d, %d)\n", x, navio_horizontal_y);
    }

    // Etapa 3: Finalização
    // O tabuleiro foi preenchido com os navios e as coordenadas foram exibidas

    return 0;