#include <stdio.h>

//

int main(void) {
    // Declaração de constantes para facilitar a manutenção do código
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    int i = 0; // Variável de controle para os laços

    printf("--- SIMULACAO DE MOVIMENTACAO DE PECAS ---\n");

   
    // --- MOVIMENTO DA TORRE: USANDO O LAÇO FOR ---
    // A Torre se move 5 casas para a direita.
    // A função do for é executar um bloco de código repetidamente, como fazer "um monte de coisa" várias vezes, para cada item em uma lista ou para contar até um certo número.
   
    printf("\n>>> Movimento da TORRE (5 casas para a Direita)\n");
    for (i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
   
    return 0;
}
