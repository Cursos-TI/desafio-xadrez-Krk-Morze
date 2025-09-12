#include <stdio.h>

int main(){
    int option;
    int num;
    char linha[50];

    do {
        printf("Menu do jogo de xadrez:\n");
        printf("1. bispo\n");
        printf("2. torre\n");
        printf("3. rainha\n");
        printf("4. sair\n");
        printf("escolhar uma opçao: ");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                do {
                 printf("o bispo so pode se mover em 5 casas: ");
                 scanf("%d", &num);

                 printf("escrevar uma das opçoes\n");
                 printf("diagonal ou anti-diagonal\n");
                 scanf("%s", &linha);
       
        if (num >= 5) {
            printf("Você digitou: %d\n", num);
            printf("bispo: %d casas na %s\n", num, linha);
                
        }
    } while (num <= 5);
   
    printf("movimento impossivel. Saindo...\n");
   
                break;
            case 2:
                do {
                 printf("torre so pode se mover em 5 casas: ");
                 scanf("%d", &num);

                 printf("escrevar uma das opçoes\n");
                 printf("direita, esquerda , cima ou baixo\n");
                 scanf("%s", &linha);
       
        if (num >= 5) {
            printf("Você digitou: %d\n", num);
            printf("torre: %d casas na %s\n", num, linha);
                
        }
    } while (num <= 5);
   
    printf("movimento impossivel. Saindo...\n");
                break;
            case 3:
                do {
                 printf("rainha so pode se mover em 8 casas: ");
                 scanf("%d", &num);

                 printf("escrevar uma das opçoes\n");
                 printf("qualquer direçao\n");
                 scanf("%s", &linha);
       
        if (num >= 8) {
            printf("Você digitou: %d\n", num);
            printf("rainha: %d casas na %s\n", num, linha);
                
        }
    } while (num <= 8);
   
    printf("movimento impossivel. Saindo...\n");
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 4);
}

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
