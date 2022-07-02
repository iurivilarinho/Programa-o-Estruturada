#include <stdio.h>

void conversoNumero(int valor){
  if (valor < 1 || valor > 10){
    printf("\nErro, número inválido.\n");
  } else if(valor == 1){
    printf("\nUm");
  } else if(valor == 2){
    printf("\nDois");
  } else if(valor == 3){
    printf("\nTrês");
  } else if(valor == 4){
    printf("\nQuatro");
  } else if(valor == 5){
    printf("\nCinco");
  } else if(valor == 6){
    printf("\nSeis");
  } else if(valor == 7){
    printf("\nSete");
  } else if(valor == 8){
    printf("\nOito");
  } else if(valor == 9){
    printf("\nNove");
  } else if(valor == 10){
    printf("\nDez");
  } 
}

int main(void) {
  int numero;
  
  printf("Digite um número ");
  scanf("%d", &numero);

  conversoNumero(numero);
  
  return 0;
}