#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
06) Pegue o vetor do exercício 5, e considere que ele gerou um número binário. Faça a conversão deste número binário para decimal. Ex.:

Binário          |    1   | 1      |    0   |    1   |
Valor da posição |    2²  | 2²     |    2¹  |    2°  |
Cálculo          | 1x2³=8 | 1x2²=4 | 0x2¹=0 | 1x2°=1 |
Valor final      |        8+4+0+1 = 13(Decimal)      |
*/

int main() {
  int vet[4], aleatorio, i, decimal, multiplicacao;

  srand(time(NULL));
  
  printf("------------- Vetor binário -------------\n");
  
  for(i=0;i<4;i++){
    aleatorio = rand() % 2;
    vet[i] = aleatorio;
  }
  
  for(i=0;i<4;i++){
    printf("%d ", vet[i]);
  }

  multiplicacao = vet[0]*(pow(2,3))+vet[1]*(pow(2,2))+vet[2]*(pow(2,1))+vet[3]*(pow(2,0));
   
  printf("\nO numero binario ");
  for(i=0;i<4;i++){
    printf("%d ", vet[i]);
  }
  printf(" em decimal e: %d", multiplicacao);
  return 0;
}
