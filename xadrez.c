#include <stdio.h>

int main() {
    // ===============================
    // TORRE - Usa o loop "for"
    // Movimento: 5 casas para a direita
    // ===============================
    int casasTorre = 5;

    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ===============================
    // BISPO - Usa o loop "while"
    // Movimento: 5 casas na diagonal (Cima, Direita)
    // ===============================
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // ===============================
    // RAINHA - Usa o loop "do-while"
    // Movimento: 8 casas para a esquerda
    // ===============================
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}