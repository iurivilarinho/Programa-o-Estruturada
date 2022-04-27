#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
//15) Faça um programa que calcule a soma de todos os números pares entre 0 e 100. Imprima os números e a soma total.

  	int  i, j, mult;
  	mult = 0;
  	printf("Soma de todos os numeros pares de 0 a 100\n");
	for(i = 0; i < 100; i++) {
		
		if(i % 2 == 0){

		printf("%i + ",i);
}
	if(i % 2 == 0) {
	
		mult = mult + 2;
		mult = mult + i;
	}
		}
		
		printf("%i = ", i);
		printf("%i ", mult);
	}
	



