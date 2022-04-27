#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
06) Pegue o vetor do exerc�cio 5, e considere que ele gerou um n�mero bin�rio. Fa�a a convers�o deste n�mero bin�rio para decimal. Ex.:

Bin�rio          |    1   | 1      |    0   |    1   |
Valor da posi��o |    2�  | 2�     |    2�  |    2�  |
C�lculo          | 1x2�=8 | 1x2�=4 | 0x2�=0 | 1x2�=1 |
Valor final      |        8+4+0+1 = 13(Decimal)      |
*/

int main() {
  int vet[4], aleatorio, i, decimal, multiplicacao;

  srand(time(NULL));
  
  printf("------------- Vetor bin�rio -------------\n");
  
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
