#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
10) Crie um vetor A e preencha-o com 20 n�meros aleat�rios entre 97 e 122. Imprima o vetor normalmente usando a m�scara de n�meros inteiros %d (ou %i). Imprima o mesmo vetor por�m utilizando a m�scara de char %c. 
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
