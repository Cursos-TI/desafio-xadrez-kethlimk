#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da Torre (for)
    // -------------------------------
    int casasTorre = 5;  // Número de casas que a torre irá se mover
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do Bispo (while)
    // -------------------------------
    int casasBispo = 5;  // Número de casas que o bispo irá se mover na diagonal
    int contadorBispo = 0;
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Movimento da Rainha (do-while)
    // -------------------------------
    int casasRainha = 8;  // Número de casas que a rainha irá se mover para a esquerda
    int contadorRainha = 0;
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
