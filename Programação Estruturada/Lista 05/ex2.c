#include <stdlib.h>

/*
02) Preencher um vetor com os números pares do número 2 ao 20. Imprimir na tela o vetor.
*/

int main() {
  int vet[10], i, cont=0;

  for(i=0;i<10;i++){
    vet[i] = cont+2;
    cont += 2;
  }

  for(i=0; i<10;i++){
    printf("%d ", vet[i]);
  }
 
  return 0;
}
