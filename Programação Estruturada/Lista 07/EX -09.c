#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
09) Gere uma matriz 6x6 com valores aleatórios decimais entre -1 e 1. Imprima a matriz. Multiplique todos os elementos por 2. Imprima a nova matriz. Subtraia de todos os elementos o valor 1 (um). Imprima a nova matriz.
*/

int main() {
  int matriz[6][6], i, j, mult[6][6], sub[6][6];

  srand(time(NULL));

  for(i=0; i<6; i++){
    for(j=0; j<6; j++){
      matriz[i][j] = -1 + (rand() % 3);
      mult[i][j] = matriz[i][j] *2;
      sub[i][j] = matriz[i][j] -1;
      
      if(matriz[i][j] >= 0){
        printf(" %i ", matriz[i][j]);
      } else {
          printf("%i ", matriz[i][j]);
      }
    }
    printf("\n");
  }
  printf("\n");
  
  for(i=0; i<6; i++){
    for(j=0; j<6; j++){
      if(mult[i][j] >= 0){
        printf(" %i ", mult[i][j]);
      } else {
          printf("%i ", mult[i][j]);
      }
    }
    printf("\n");
  }

  printf("\n");
  
  for(i=0; i<6; i++){
    for(j=0; j<6; j++){
      if(sub[i][j] >= 0){
        printf(" %i ", sub[i][j]);
      } else {
          printf("%i ", sub[i][j]);
      }
    }
    printf("\n");
  }
  
  return 0;
}