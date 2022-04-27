#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Autor: Iuri Vilarinho Sant Ana de Souza
//25/03/2022

int main () {
	
	srand( (unsigned)time(NULL) );
	
	int num1, num2, i;
	
	num1 = rand() % 100;
	
	num2 = rand() % 100;
	
	printf("numero aleatorio 1: %i\nnumero aleatorio 2: %i\n", num1, num2);
	
	if(num2 < num1 ) {
	
	for(i = num2; i <= num1; i++){
		printf("%i ", i);
	
	}
}
	else {
	
	for(i = num1; i <= num2; i++){
		printf("%i ", i);
	
	}
}

}
	
	
	
