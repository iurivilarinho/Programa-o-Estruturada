#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
05) Crie um vetor de 4 posições. Preencha aleatoriamente somente com 0 e 1. Imprima o vetor na tela.
*/

int main() {
  int vet[4], aleatorio, i;

  srand(time(NULL));
  
  printf("------------- Vetor binário -------------\n");
  
  for(i=0;i<4;i++){
    aleatorio = rand() % 2;
    vet[i] = aleatorio;
  }

  for(i=0;i<4;i++){
    printf("%d ", vet[i]);
  }
  
  return 0;
}
