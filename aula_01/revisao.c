#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void clearBuffer(){
  int c;
  while((c = getchar()) != '\n' && c != EOF);
}

int main(){

  srand(time(NULL));
  int jogar = 1;

  while(jogar){
    int numero = rand() % 10;
    int escolha = 11;
    while(escolha != numero){
      printf("escolha um número entre 0 e 10: ");
      scanf("%d", &escolha);

      if(escolha > numero)
        printf("acima\n");
      else if(escolha < numero)
        printf("abaixo\n");
      else
        printf("numero correto\n");
    }

    clearBuffer();
    printf("deseja jogar novamente? ");
    char resposta[4];
    fgets(resposta, 4, stdin);
    if(strcmp(resposta, "sim") != 0)
      jogar = 0;
  }
  printf("game over\n");
}