#include <stdio.h>

////////////////// 
void movimentoBispo(){
      for (int i = 1; i <= 5; i++) {
        printf("e%d ", i);
        for (int j = 1; j <= 1; j++) {
            printf("u%d\t", i == j);
        }
        printf("\n");
    }

}
//////////////////////////////////
void movimentotorre(int casas){
      if (casas > 0){
        movimentotorre(casas - 1);
        printf("torre andou %d casa pra direta \n", casas);
      }
      
}
//////////////////////////////////
void movimentorainha(int casa){
    if (casa > 0){
        movimentorainha(casa - 1);
        printf("rainha andou %d casa pra cima\n", casa);
    }
    
}
///////////////////////////////////
void movimentocavalo(){
    for (int i = 0; i < 10; i++) {
        if (i == 0) continue; // Pula a iteração quando i é 5
        if (i == 3) break;    // Sai do loop quando i é 8
        printf("cavalo andou %d casas pra cima\n", i);
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) continue; // Pula a iteração quando i é 5
        if (i == 2) break;    // Sai do loop quando i é 8
        printf("cavalo andou %d casa pra direita\n", i);
    }
}
///////////////////////////////////
int main(){
     // variaveis do menu
    int opçao;

   do { // escolhas do jogado e abertudo do menu
    printf("### Menu Principal ###\n");
    printf("1. bispo\n");
    printf("2. torre\n");
    printf("3. rainha\n");
    printf("4. cavalo\n");
    printf("5. sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opçao);

    // menu do jogo
    switch (opçao){
    case 1:
    movimentoBispo();
      break;
    case 2:
    movimentotorre(5);
      break;
    case 3:
    movimentorainha(8);
      break; 
    case 4:
    movimentocavalo();
      break;
    case 5:
    printf("saindo....\n");
      break;   
      default:
      
      break;  
    }
   } while (opçao != 5);

    return 0;


    
    movimentoBispo();
    return 0;
}
