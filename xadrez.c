#include <stdio.h>

// --------------------------------------
// Função Recursiva: Movimento da Torre
// --------------------------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// --------------------------------------
// Função Recursiva: Movimento da Rainha
// --------------------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// --------------------------------------
// Função Recursiva + Loops Aninhados: Bispo
// --------------------------------------
void moverBispo(int linhas, int colunas) {
    if (linhas <= 0 || colunas <= 0) return;

    // Loop externo simula a movimentação vertical
    for (int i = 0; i < linhas; i++) {
        // Loop interno simula a movimentação horizontal (em diagonal)
        for (int j = 0; j < colunas; j++) {
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva reduz a área de movimento diagonal
    moverBispo(linhas - 1, colunas - 1);
}

// --------------------------------------
// Loops Aninhados Complexos: Movimento do Cavalo
// --------------------------------------
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo (em 'L': 2 para cima, 1 para a direita):\n");

    int contador = 0;
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            // Pula iterações intermediárias para simular 2 para cima
            if (j < 2) {
                printf("Cima\n");
                continue;
            }

            // Última etapa do "L"
            if (j == 2) {
                printf("Direita\n");
                break;
            }
        }
        contador++;
    }
}

// --------------------------------------
// Função Principal
// --------------------------------------
int main() {
    // -------------------------------
    // Torre (Recursividade)
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);

    // -------------------------------
    // Bispo (Recursividade + Loops Aninhados)
    // -------------------------------
    int linhasBispo = 3;
    int colunasBispo = 3;
    printf("\nMovimento do Bispo (em diagonal cima-direita):\n");
    moverBispo(linhasBispo, colunasBispo);

    // -------------------------------
    // Rainha (Recursividade)
    // -------------------------------
    int casasRainha = 8;
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    // -------------------------------
    // Cavalo (Loops Aninhados Complexos)
    // -------------------------------
    int movimentosCavalo = 3;
    moverCavalo(movimentosCavalo);

    return 0;
}
