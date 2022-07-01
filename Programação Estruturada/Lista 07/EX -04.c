#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
04) Use a matriz do exercício 03 e calcule a soma de todos os números negativos, e calcule a soma de todos os números positivos. Imprima na tela a matriz, a soma dos negativos, e a soma dos positivos.
*/

int main() {
  int matriz[6][6], i, j, negativo=0, positivo=0;
  srand(time(NULL));

  
  for(i=0; i<=6; i++){
    
    for(j=0; j<=6; j++){
      matriz[i][j] = -9 + (rand() % 19);
      if(matriz[i][j] >= 0){
        printf(" %i ", matriz[i][j]);
        positivo = matriz[i][j] + positivo;
      } else {
          printf("%i ", matriz[i][j]);
          negativo = matriz[i][j] + negativo;
      }     
    }
    printf("\n");
  }

  printf("A soma dos numeros negativos eh: %i\n", negativo);
  printf("A soma dos numeros positivos eh: %i", positivo);
  return 0;
}