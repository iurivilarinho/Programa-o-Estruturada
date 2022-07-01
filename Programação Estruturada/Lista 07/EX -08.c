#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
08) Gere uma matriz 6x6 com valores aleatórios decimais entre 0 e 1. Calcule a média dos valores da matriz. Imprima a matriz e a média encontrada. 
*/

int main() {
  int matriz[6][6], i, j;
  float soma, med;

  srand(time(NULL));  

  for(i=0; i<6; i++){
    for(j=0; j<6; j++){
      matriz[i][j] = rand()%2;
      soma += matriz[i][j];
      printf("%i ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  med = soma/36;
  printf("A media dos valores do array eh: %.2f", med);
  return 0;
}