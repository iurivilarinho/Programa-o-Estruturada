#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
08) Preencher um vetor com cinco números e guardar o cubo dos números em outro vetor. Mostrar os dois vetores.
*/

int main() {
  int vet[5], i, aleatorio, cubo[5];

  srand(time(NULL));

  for(i=0;i<5;i++){
    aleatorio = rand() % 100;
    vet[i] = aleatorio;
  }

  for(i=0;i<5;i++){
    printf("%d ", vet[i]);
  }
  printf("\n");

  cubo[0] = pow(vet[0],3);
  cubo[1] = pow(vet[1],3);
  cubo[2] = pow(vet[2],3);
  cubo[3] = pow(vet[3],3);
  cubo[4] = pow(vet[4],3);
  
  printf("\n%d elevado a 3 : %d",vet[0], cubo[0]);
  printf("\n%d elevado a 3 : %d",vet[1], cubo[1]);
  printf("\n%d elevado a 3 : %d",vet[2], cubo[2]);
  printf("\n%d elevado a 3 : %d",vet[3], cubo[3]);
  printf("\n%d elevado a 3 : %d",vet[4], cubo[4]);
  
  return 0;
}
