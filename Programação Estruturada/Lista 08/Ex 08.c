#include <stdio.h>
#include <stdlib.h>

float funcMedia(int x, int y, int z){  
  int soma = 0, media = 0;
  soma = x + y + z;
  return soma / 3;  
}

int main(void) { 
  int x, y, z;
  float media;

  printf("\nDigite um número: ");
  scanf("%d", &x);

  printf("\nDigite outro número: ");
  scanf("%d", &y);

  printf("\nDigite outro número: ");
  scanf("%d", &z);

  media = funcMedia(x, y, z);
  printf("A média entre %d, %d e %d é %.2f", x, y, z, media);
  
  return 0;
}

