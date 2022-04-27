#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
02) Faça um programa que gere dois vetores - A (5 elementos) e B (8 elementos) - com valores aleatórios entre 0 e 10. Faça um programa que imprima os dois vetores, e todos os elementos comuns aos dois vetores. 
*/

int main() {
	int vetA[8], vetB[8], vetC[8], i, j, k=0;

  srand(time(NULL));

  printf("------------ Vetor [A] ------------\n");
	for(i=0;i<5;i++){
		vetA[i] = rand() % 8;
    printf("%d ", vetA[i]);
	}
  printf("\n------------ Vetor [B] ------------\n");
  
	for(i=0;i<8;i++){
		vetB[i] = rand() % 8;
    printf("%d ", vetB[i]);
	}

  for(i = 0; i < 8 ; i++) {  
    for(j = 0; j < 5 ; j++) {
        if(vetB[i] == vetA[j])
            vetC[k++] = vetB[i];
    }
  }
  printf("\n---------- Vetor resultante ----------\n");

  for(i = 0; i < k; i++){
    printf("%d ", vetC[i]);
  } 

	return 0;
}
