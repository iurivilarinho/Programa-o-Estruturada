#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Autor: Iuri Vilarinho Sant Ana de Souza
//25/03/2022

int main () {
	
	int num, i;
	
	printf("Informe um numero: ");
	scanf("%i", &num);
	printf("\n");
	
	for(i = num -1 ; i > 0 ; i--){
		printf("%i ",i);
	}
	
}
