#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
01) Fa�a um programa que preencha um vetor de n�meros inteiros com 10 posi��es com n�meros aleat�rios entre 1 e 20 sem repeti��es.
*/

int main() {
  int vet[10], i = 0, j, num = 0; 
  srand(time(NULL));

  do{
    vet[i] = rand() % 20;
    num = 0;
    for(j = 0; j < i; j++){
      if(vet[j] == vet[i]){ 
        num = 1; 
      }        
    }
    if(num == 0){ 
      i++;
    }
  } while(i < 10);

  for(i = 0; i < 10; i++){
    printf("%d\n", vet[i]);
  }
  return 0;
}
