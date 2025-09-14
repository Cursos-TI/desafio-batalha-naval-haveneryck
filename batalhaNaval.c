#include <stdio.h>

int main() {
    // ============================
    // NÍVEL MESTRE
    // ============================

    // Etapa 1: Criação do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // 0 = vazio, 3 = navio, 1 = erro, 9 = acerto

    // Etapa 2: Posicionamento dos navios
    for (int i = 0; i < 3; i++) tabuleiro[1 + i][2] = 3; // Vertical
    for (int i = 0; i < 4; i++) tabuleiro[7][4 + i] = 3; // Horizontal
    for (int i = 0; i < 3; i++) tabuleiro[2 + i][2 + i] = 3; // Diagonal ↘
    for (int i = 0; i < 3; i++) tabuleiro[5 + i][4 - i] = 3; // Diagonal ↙

    // Etapa 3: Simulação de ataque fixo
    int ataque_x = 2;
    int ataque_y = 2;

    if (tabuleiro[ataque_y][ataque_x] == 3) {
        tabuleiro[ataque_y][ataque_x] = 9; // Acerto
        printf("Acertou um navio em (%d, %d)!\n", ataque_x, ataque_y);
    } else {
        tabuleiro[ataque_y][ataque_x] = 1; // Erro
        printf("Água em (%d, %d).\n", ataque_x, ataque_y);
    }

    // Etapa 4: Exibição do tabuleiro
    printf("\n=== Tabuleiro 10x10 ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}