#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
09) Preencher um vetor com os n�meros 10 a 20, e depois mostrar os elementos pares do vetor de tr�s pra frente. E tamb�m mostrar os n�meros �mpares.
*/

int main() {
  int vet[11], i, cont=10;

  printf("-------------- Vetor --------------");
  printf("\n");
  for(i=0;i<11;i++){
    vet[i]=cont;
    cont++;
    printf("%d ", vet[i]);
  }

  printf("\n\n");
  printf("----------- Numeros pares do vetor -----------");
  printf("\n");
 for(i=10; i>=0; i=i-2){
 printf("%d ",vet[i]);
   }

 printf("\n\n");
 printf("----------- Numeros �mpares do vetor -----------");
 printf("\n");
 for(i=1; i<11; i=i+2){
 printf("%d ",vet[i]);
   }
  
 return 0;
}
