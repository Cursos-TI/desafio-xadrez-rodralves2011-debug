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

    // --- MOVIMENTO DO BISPO: USANDO O LAÇO DO-WHILE ---
    // O Bispo se move 5 casas na diagonal superior direita.
    // O laço do-while é usado para garantir que o movimento seja impresso pelo menos uma vez, mesmo que a condição seja falsa.
    // A condição de diagonal é simulada imprimindo "Cima" e "Direita".

    printf("\n>>> Movimento do BISPO (5 casas na Diagonal Superior Direita)\n");
    i = 0; // Reinicia a variável de controle
    do {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    } while (i < MOVIMENTOS_BISPO);
   

    // --- MOVIMENTO DA RAINHA USANDO O LAÇO WHILE ---
    // A Rainha se move 8 casas para a esquerda.
    // O laço while é usado para demonstrar uma condição simples baseada em um contador.
    
    printf("\n>>> Movimento da RAINHA (8 casas para a Esquerda)\n");
    i = 0; // Reinicia a variável de controle
    while (i < MOVIMENTOS_RAINHA) {
        printf("Esquerda\n");
        i++;
    }



    return 0;
}
