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

    // -------------------------------
    // Movimento do Cavalo (for + while)
    // -------------------------------
    // O Cavalo se moverá em "L": 2 casas para baixo e 1 para a esquerda
    int movimentosCavalo = 3;  // Número de vezes que o cavalo fará esse movimento em L

    printf("\nMovimento do Cavalo (3 movimentos em 'L': 2 para baixo, 1 para a esquerda):\n");

    for (int i = 0; i < movimentosCavalo; i++) {
        int passosVerticais = 0;

        // Loop while para simular as 2 casas para baixo
        while (passosVerticais < 2) {
            printf("Baixo\n");
            passosVerticais++;
        }

        // Movimento horizontal após o vertical: 1 casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}

