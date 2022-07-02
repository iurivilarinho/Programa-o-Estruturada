#include <stdio.h>

void conversoMes(int valor){
  if (valor < 1 || valor > 12){
    printf("\nMês inválido.\n");
  } else if(valor == 1){
    printf("\nJaneiro");
  } else if(valor == 2){
    printf("\nFevereiro");
  } else if(valor == 3){
    printf("\nMarço");
  } else if(valor == 4){
    printf("\nAbril");
  } else if(valor == 5){
    printf("\nMaio");
  } else if(valor == 6){
    printf("\nJunho");
  } else if(valor == 7){
    printf("\nJulho");
  } else if(valor == 8){
    printf("\nAgosto");
  } else if(valor == 9){
    printf("\nSetembro");
  } else if(valor == 10){
    printf("\nOutubro");
  } else if(valor == 11){
    printf("\nNovembro");
  } else if(valor == 12){
    printf("\nDezembro");
  }
}

int main(void) {
  int numero;
  
  printf("Digite um número referente ao um mês ");
  scanf("%d", &numero);

  conversoMes(numero);
  
  return 0;
}