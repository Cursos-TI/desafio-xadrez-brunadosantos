#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    // Declaração das variáveis
    int torre = 1;
    int bispo = 1;
    int cavalo = 1;

    // Movimentação torre
    // Cabeçalho movimento torre
    printf("Movimentação da Torre\n");
    printf("=====================\n");
    while (torre <= 5) // Executa o comando enquanto a variável torre for menor ou igual a 5
    { 
        printf("Direita \n", torre); // Imprime "Direita" no terminal até que "torre" se torne menor ou igual a 5 e finalizar o loop
        torre++; // incrementa 1 a variável torre
    }
    
    // Movimentação bispo
    // Cabeçalho movimento bispo
    printf("\n");
    printf("Movimentação do Bispo\n");
    printf("=====================\n");
    do // Faz o comando até que a condição se torne verdadeira
    {
        printf("Cima, Direita \n", bispo); // Imprime "Cima, Direita" no terminal até que "bispo" se torne menor ou igual a 5
        bispo++; // incrementa 1 a variável bispo para que ela possa se tornar maior ou igual a 5 e finalizar o loop
    } while (bispo <= 5); // Executa o comando enquanto a variável bispo for menor ou igual a 5
    
    // Movimentação rainha
    // Cabeçalho movimento rainha
    printf("\n");
    printf("Movimentação da Rainha\n");
    printf("=====================\n");
    
    for (int rainha = 1; rainha <= 8; rainha++) // Executa o comando enquanto a variável rainha for menor ou igual a 8, incrementa 1 a variável rainha até que se torne maior que 8 e encerre o loop 
    {
        printf("Esquerda \n", rainha); // Imprime "Esquerda" no terminal até que "rainha" se torne maior ou igual a 8
    }
    
    // Movimentação cavalo
    // Duas casas para baixo e uma para esquerda
    printf("\n");
    printf("Movimentação do Cavalo\n");
    printf("=====================\n");
    while (cavalo == 1) // Executa o comando enquanto a variável cavalo for igual a 1
    {
        cavalo--; // Decrementa 1 a variável cavalo para que ela possa se tornar menor que 1 e encerrar o loop
        
        
        for (int i = 0; i < 2; i++) // Executa o comando enquanto a variável i for menor que 2, incrementa 1 a variável i para que ela se torne maior que 2 e encerre o loop 
        {
            printf("Baixo\n"); // Imprime "Baixo" no terminal até que "i" se torne maior que 2
        }
        printf("Esquerda\n"); // Imprime "Esquerda" no terminal até que "cavalo" se torne menor que 1
    }
    
    printf("\n"); // pula uma linha para organização do programa no terminal 

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
