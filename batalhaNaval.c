#include <stdio.h>

int main() {
    // ============================
    // NÍVEL MESTRE
    // ============================

    int tabuleiro[10][10] = {0}; // 0 = vazio, 3 = navio, 1 = erro, 9 = acerto

    for (int i = 0; i < 3; i++) tabuleiro[1 + i][2] = 3;
    for (int i = 0; i < 4; i++) tabuleiro[7][4 + i] = 3;
    for (int i = 0; i < 3; i++) tabuleiro[2 + i][2 + i] = 3;
    for (int i = 0; i < 3; i++) tabuleiro[5 + i][4 - i] = 3;

    int ataque_x, ataque_y;
    char continuar;

    do {
        printf("Digite as coordenadas do ataque (x y): ");
        scanf("%d %d", &ataque_x, &ataque_y);

        if (ataque_x < 0 || ataque_x >= 10 || ataque_y < 0 || ataque_y >= 10) {
            printf("Coordenadas inválidas!\n");
        } else if (tabuleiro[ataque_y][ataque_x] == 3) {
            tabuleiro[ataque_y][ataque_x] = 9;
            printf("Acertou um navio em (%d, %d)!\n", ataque_x, ataque_y);
        } else if (tabuleiro[ataque_y][ataque_x] == 0) {
            tabuleiro[ataque_y][ataque_x] = 1;
            printf("Água em (%d, %d).\n", ataque_x, ataque_y);
        } else {
            printf("Essa posição já foi atacada.\n");
        }

        printf("\n=== Tabuleiro 10x10 ===\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

        printf("Deseja atacar novamente? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}