#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
03) Fa�a um programa que encontre os valores m�ximo e m�nimo de um vetor de 50 n�meros inteiros aleat�rios. 
*/

int main() {
  int vet[50], i, j, cont=1, maior=1, menor=10000;

  srand(time(NULL));

  printf("-------- Posicoes do vetor --------\n\n");
  for(i=0; i<50; i++){
    vet[i] = rand() % 10000;
    printf("Posi��o %d = %d\n", cont, vet[i]);
    cont++;
  }
  
  for(i=0; i<50; i++){
    if(vet[i]<menor){
      menor = vet[i];
    }   
  }
  printf("\nO menor numero do vetor: %d", menor);

  for(i=0; i<50; i++){
    if(vet[i]>maior){
      maior = vet[i];
    }   
  }  
  printf("\nO maior numero do vetor: %d\n\n", maior);
  
  return 0;
}
