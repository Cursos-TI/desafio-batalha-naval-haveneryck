#include <stdio.h>

int main() {
    // ============================
    // NÍVEL MESTRE
    // ============================

    // Etapa 1: Criação do tabuleiro 10x10
    int tabuleiro[10][10] = {0}; // 0 = vazio, 3 = navio, 1 = erro, 9 = acerto

    // Etapa 2: Posicionamento dos navios
    for (int i = 0; i < 3; i++) tabuleiro[1 + i][2] = 3;       // Vertical
    for (int i = 0; i < 4; i++) tabuleiro[7][4 + i] = 3;       // Horizontal
    for (int i = 0; i < 3; i++) tabuleiro[2 + i][2 + i] = 3;   // Diagonal ↘
    for (int i = 0; i < 3; i++) tabuleiro[5 + i][4 - i] = 3;   // Diagonal ↙

    // Etapa 3: Lógica de ataque com contagem de acertos
    int total_navios = 3 + 4 + 3 + 3;
    int acertos = 0;
    int ataque_x, ataque_y;

    while (acertos < total_navios) {
        printf("Digite as coordenadas do ataque (x y): ");
        scanf("%d %d", &ataque_x, &ataque_y);

        if (ataque_x < 0 || ataque_x >= 10 || ataque_y < 0 || ataque_y >= 10) {
            printf("Coordenadas inválidas!\n");
        } else if (tabuleiro[ataque_y][ataque_x] == 3) {
            tabuleiro[ataque_y][ataque_x] = 9;
            acertos++;
            printf("Acertou um navio em (%d, %d)! Total de acertos: %d\n", ataque_x, ataque_y, acertos);
        } else if (tabuleiro[ataque_y][ataque_x] == 0) {
            tabuleiro[ataque_y][ataque_x] = 1;
            printf("Água em (%d, %d).\n", ataque_x, ataque_y);
        } else {
            printf("Essa posição já foi atacada.\n");
        }

        // Exibição do tabuleiro após cada jogada
        printf("\n=== Tabuleiro 10x10 ===\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // Etapa 4: Fim de jogo
    printf("Todos os navios foram destruídos! Fim de jogo.\n");

    return 0;
}