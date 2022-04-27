#include <stdio.h>
#include <stdlib.h>

/*
03) Preencher um vetor A com os números pares do número 2 ao 20. Preencher um vetor B com os números de 10 a 19. Somar os vetores 
acima (A[0] + B[0], A[1] + B[1], A[2] +  B[2], …). Imprimir os dois vetores (A e B)  e o vetor resultado da soma (A+B).
*/

int main() {
  int vetA[10], vetB[10], i, j, cont=0, somaVet=0;

  printf("\n---------- Vetor A ----------\n");
  for(i=0;i<10;i++){
    vetA[i] = cont+2;
    cont += 2;
  }

  for(i=0; i<10;i++){
    printf("%d ", vetA[i]);
  }
  
  printf("\n\n---------- Vetor B ----------\n");
  for(i=0;i<10;i++){
    vetB[i] = i+10;
  }

  for(i=0;i<10;i++){
    printf("%d ", vetB[i]);
  }
  
  for(i=0;i<10;i++){
    somaVet += (vetA[i] + vetB[i]);
  }

  printf("\n\nA soma dos vetores A e B: %d", somaVet);
   
  return 0;
}
