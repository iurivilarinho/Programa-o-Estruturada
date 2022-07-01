#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
10) Gere uma matriz 3x3 com valores aleatórios inteiros entre 0 e 1. Imprima a matriz. Verifique se alguma linha ou coluna da matriz tem todos os valores iguais. Se sim, imprimir o número da linha, ou da coluna, e o valor contido nesta linha (ou coluna).
*/

int main() {
  int matriz[3][3], i, j;

  srand(time(NULL));  

  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      matriz[i][j] = rand()%2;
      printf("%i ", matriz[i][j]);

      if(matriz[0][0] == 1 && matriz[1][j] == 1){
        
      }
    }
    printf("\n");
  }
  printf("\n");
  
  return 0;
}