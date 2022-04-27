#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
10) Crie um vetor A e preencha-o com 20 números aleatórios entre 97 e 122. Imprima o vetor normalmente usando a máscara de números inteiros %d (ou %i). Imprima o mesmo vetor porém utilizando a máscara de char %c. 
*/

int main() {
  srand(time(NULL));
  int arr[20], i;

  for(i=0;i<20;i++){
    arr[i] = 97 + rand() % (122 - 97);
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  for(i=0;i<20;i++){
    printf("%c ", arr[i]);
  }

  return 0;
}
