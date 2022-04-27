#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
05) Gere um vetor com 20 números inteiros aleatórios entre 1 e 50. Faça um programa que identifique quais são os elementos duplicados neste vetor. E informe a posição que estão os repetidos.
*/

int main() {
  int aleatorio, i, vetA[20], vetB[20], cont=1, n=0, achou, j;

  srand(time(NULL));

  printf("-------- Posicoes do vetor --------\n");
  for(i=0;i<20;i++){
		vetA[i] = 1 + (rand() % 49);
    printf("Posicao %d - %d\n",cont, vetA[i]);
    
    cont++;
	}

  printf("\n");

  for(i=0;i<20;i++){
    for(j=0; j<i; j++){
      if(vetA[i] == vetA[j]){
        vetB[n++] = vetA[i];
        achou = i;
      }
    }
	}

  for(i=0;i<n;i++){
		printf("%d ", vetB[i]);
	}
  
  return 0;
}
