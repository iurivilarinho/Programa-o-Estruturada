#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
//14) Faça um programa que calcule a soma de todos os números de 1 a 10. Imprima todos os números e a soma total.

  	int  i, j, mult;
  	mult = 0;
  	printf("Soma de todos os numeros de 1 a 10\n");
	for(i = 0; i < 10; i++) {
		
		printf("%i + ",i);
		mult = mult + 1;
		mult = mult + i;
		}
		
		printf("%i = ", i);
		printf("%i ", mult);
	}
	



