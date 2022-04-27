#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
04) Preencher um vetor de oito elementos inteiros aleatórios entre 0 e 50. Mostrar o vetor e informar quantos números são maiores que 30, 
somar estes números. Também somar todos os números.
*/

int main() {
  int vet[8], i, aleatorio, maior=0, somaMaior=0, somaVetor=0;

  srand(time(NULL));
  
  for(i=0;i<8;i++) {
    aleatorio = rand() % 50;
    vet[i] = aleatorio;

    somaVetor += vet[i];

    if(aleatorio > 30){
      maior = maior+1;
      somaMaior += vet[i];
    }
  }
  printf("------------- Numeros do vetor -------------\n");
  for(i=0;i<8;i++) {
    printf("%d ", vet[i]);
  }
  
  printf("\n\nExistem %d numeros maiores que 30 neste vetor", maior);
  printf("\nA soma dos números maiores que 30: %d", somaMaior);
  printf("\nA soma de todos os números do vetor: %d", somaVetor);
  
  return 0;
}
