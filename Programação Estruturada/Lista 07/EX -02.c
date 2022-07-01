#include <stdio.h>
#include <stdlib.h>

/*
02) Gere uma matriz 6x6 com zeros. Imprima a matriz. Preencha a diagonal principal desta matriz com 1 (um). Imprima novamente.
*/

int main() {
  int matriz[6][6], i, j;

  
  for(i=0; i<=6; i++){
    
    for(j=0; j<=6; j++){
      matriz[i][j] = 0;
      printf("%i ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n");  
  for(i = 0; i < 6; i++){
    for(j = 0; j < 6; j++){
      matriz[i][j] = 0;
      matriz[i][i] = 1;
      printf("%i ", matriz[i][j]);      
    }
    printf("\n");
  }
}