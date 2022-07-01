#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
05) Gere uma matriz 10x10 com números aleatórios entre 0 e 100. Encontre o maior, e o menor valor da matriz. Imprima a matriz, o maior e o menor valor.
*/

int main() {
  int matriz[10][10], i, j, maior=1, menor=99;
  srand(time(NULL));

  for(i=0; i<=10; i++){
    
    for(j=0; j<=10; j++){
      matriz[i][j] = 1 + (rand() % 99);
      printf("%i ", matriz[i][j]);

      if(menor > matriz[i][j]){
        menor = matriz[i][j];        
      } 
      if(maior < matriz[i][j]){
        maior = matriz[i][j];
      }    