#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
//Faça um código que gere 10 números aleatórios entre 0 e 100. Imprima em uma única linha, com os números separados por espaços.

	srand( (unsigned)time(NULL) );
  	int  num, i;
  	
	for(i = 0; i < 10; i++) {
		num = rand() % 100;
		printf("%i ",num);
	}
	
	}



