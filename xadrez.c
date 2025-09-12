// biblioteca
#include <stdio.h>

int main(){
    // variaveis usadas
    int option;
    int num;
    char linha[50];

    do { //menu do movimento das peças
        printf("Menu do jogo de xadrez:\n");
        printf("1. bispo\n");
        printf("2. torre\n");
        printf("3. rainha\n");
        printf("4. sair\n");
        printf("escolhar uma opçao: ");
        scanf("%d", &option);
       
        switch(option) { 
            case 1: // movimento bispo
                do {
                 printf("o bispo so pode se mover em ate 5 casas: ");
                 scanf("%d", &num);

                 printf("Você digitou: %d\n\n", num);

                 printf("escrevar uma das opçoes\n");
                 printf("diagonal ou anti-diagonal\n");
                 scanf("%s", &linha);
       
                 printf("resultado:\n\n");
        
    } while (num <= 4 && num >= 0);
   
    printf("bispo: andou %d casas na %s\n\n", num, linha);
                break;
            case 2: // movimento torre
                do {
                 printf("torre so pode se mover em 5 casas: ");
                 scanf("%d", &num);

                 printf("Você digitou: %d\n\n", num);

                 printf("escrevar uma das opçoes\n");
                 printf("direita, esquerda , cima ou baixo\n\n");
                 scanf("%s", &linha);

                 printf("resultado:\n\n");
                       
    } while (num <= 4 && num >= 0);
    
    printf("torre: andou %d casas na %s\n\n", num, linha);
                break;
            case 3: // movimento rainha
                do {
                 printf("rainha so pode se mover em 8 casas: ");
                 scanf("%d", &num);

                 printf("Você digitou: %d\n\n", num);

                 printf("escrevar uma das opçoes\n");
                 printf("qualquer direçao\n\n");
                 scanf("%s", &linha);

                 printf("resultado:\n\n");
                       
    } while (num <= 7 && num >= 0);
   
    printf("torre: andou %d casas na %s\n\n", num, linha);
                break;
            case 4: // fechando o jogo
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
