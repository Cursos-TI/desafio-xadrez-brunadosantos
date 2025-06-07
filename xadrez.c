#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Declaração das variáveis
    int torre = 1;
    int bispo = 1;

    // Movimentação torre
    // Cabeçalho movimento torre
    printf("Movimentação da Torre\n");
    printf("=====================\n");
    while (torre <= 5) // Executa o comando enquanto a variável torre for menor ou igual a 5
    { 
        printf("Direita %d\n", torre); // Imprime "Direita" no terminal até que "torre" se torne menor ou igual a 5 e finalizar o loop
        torre++; // incrementa 1 a variável torre
    }
    
    // Movimentação bispo
    // Cabeçalho movimento bispo
    printf("\n");
    printf("Movimentação do Bispo\n");
    printf("=====================\n");
    do // Faz o comando até que a condição se torne verdadeira
    {
        printf("Cima, Direita %d\n", bispo); // Imprime "Cima, Direita" no terminal até que "bispo" se torne menor ou igual a 5
        bispo++; // incrementa 1 a variável bispo para que ela possa se tornar maior ou igual a 5 e finalizar o loop
    } while (bispo <= 5); // Executa o comando enquanto a variável bispo for menor ou igual a 5
    
    // Movimentação rainha
    // Cabeçalho movimento rainha
    printf("\n");
    printf("Movimentação da Rainha\n");
    printf("=====================\n");
    for (int rainha = 1; rainha <= 8; rainha++) // Executa o comando enquanto a variável rainha seja menor ou igual a 8
    {
        printf("Esquerda %d\n", rainha); // Imprime "Esquerda" no terminal até que "rainha" se torne menor ou igual a 8
    }
    
    printf("\n"); // pula uma linha para organização do programa no terminal 

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
