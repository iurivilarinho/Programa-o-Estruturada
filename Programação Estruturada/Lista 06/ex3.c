#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
03) Faça um programa que encontre os valores máximo e mínimo de um vetor de 50 números inteiros aleatórios. 
*/

int main() {
  int vet[50], i, j, cont=1, maior=1, menor=10000;

  srand(time(NULL));

  printf("-------- Posicoes do vetor --------\n\n");
  for(i=0; i<50; i++){
    vet[i] = rand() % 10000;
    printf("Posição %d = %d\n", cont, vet[i]);
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
