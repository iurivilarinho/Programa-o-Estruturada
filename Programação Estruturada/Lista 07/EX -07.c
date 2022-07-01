#include <time.h>

/*
07) Gere uma matriz 7x7 com valores aleatórios entre 10 e 50. Imprima a matriz. Substitua todos os valores pares por zero. Imprima a nova matriz. Substitua todos os valores ímpares por um. Imprima a nova matriz.
*/

int main() {
  int matriz[7][7], i, j, maior=10, menor=49, par[7][7], impar[7][7];
  srand(time(NULL));
  
  for(i=0; i<=5; i++){
    for(j=0; j<=5; j++){
      matriz[i][j] = 10 + (rand() % 39);
      printf("%i ", matriz[i][j]); 

      impar[i][j] = matriz[i][j];
      par[i][j] = matriz[i][j];

      if(matriz[i][j]%2 == 0){
        par[i][j] = 0;
        matriz[i][j] = 0;
        } else {
            impar[i][j] = 1;
            matriz[i][j] = 1;
      }
    }
    printf("\n");
  }
  printf("\n");
  
    for(i=0; i<=5; i++){
      for(j=0; j<=5; j++){
        printf("%i ", impar[i][j]);
        }
      printf("\n");
      }

  printf("\n");
  
    for(i=0; i<=5; i++){
      for(j=0; j<=5; j++){
        printf("%i ", matriz[i][j]);
        }
      printf("\n");
      }
   
  return 0;
}