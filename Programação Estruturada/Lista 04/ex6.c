#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Autor: Iuri Vilarinho Sant Ana de Souza
//25/03/2022

int main () {
	
	srand( (unsigned)time(NULL) );
	
	int num1, unidade, dezena, centena, milhar, aux=0, aux2=0;
	
	num1 = 1000 + (rand() % 9999);
	
	printf("%i\n", num1);
	
	
	do {
		num1 = num1 - 1000;
		aux = aux + 1;
	} while(num1 > 1000);
	
		do {
		num1 = num1 - aux1;
		aux2 = num - 100;
		aux = aux + 1;
	} while(num1 > 1000);
	
	printf("%i\n",unidade);
	printf("%i\n",dezena);
	printf("%i\n",centena);
	printf("%i\n",milhar);
	printf("%i\n",aux);
}
