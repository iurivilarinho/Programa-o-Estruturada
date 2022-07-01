#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
06) Gere uma matriz 5x5 com valores aleatórios entre 100 e 999. Encontre o segundo maior valor, e o segundo menor valor. Imprima a matriz e os segundos maior e menor.
*/

int main() {
  int matriz[5][5], i, j, maior=100, menor=999, smaior, smenor;
  srand(time(NULL));

  smaior = maior;

  for(i=0; i<=5; i++){
    for(j=0; j<=5; j++){
      matriz[i][j] = 99 + (rand() % 898);
      printf("%i ", matriz[i][j]);

      if(menor > matriz[i][j]){
        smenor = menor;
        menor = matriz[i][j];        
      } 
      if(maior < matriz[i][j]){
        smaior = maior;
        maior = matriz[i][j];
        
      }    
    }
    printf("\n");
  }

  printf("\n\nO segundo maior valor da matriz eh: %i\n", smaior);
  printf("O segundo menor valor da matriz eh: %i\n", smenor);
  return 0;
}