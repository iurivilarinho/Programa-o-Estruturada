#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
03) Gere uma matriz 5x5 com números aleatórios entre -10 e 10. Imprima a matriz com 3 caracteres para cada elemento.
*/

int main() {
  int matriz[6][6], i, j;
  srand(time(NULL));

  
  for(i=0; i<=6; i++){
    
    for(j=0; j<=6; j++){
      matriz[i][j] = -9 + (rand() % 19);
      if(matriz[i][j] >= 0){
        printf(" %i ", matriz[i][j]);
      } else {
          printf("%i ", matriz[i][j]);
      }     
    }
    printf("\n");
  }
  return 0;
}