#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
//12) Fa�a um programa que imprima na tela todos os n�meros entre 0 e 100,
// por�m substitua os m�ltiplos de 4 pela palavra �plim�. Ex. 0, 1, 2, 3, plim, 5, 6, 7, plim, 9, �
  	int  i;
  	
	for(i = 0; i <= 100; i++) {
		
		if(i % 4 != 0){
			printf("%i, ", i);
		}
		if(i % 4 == 0){
			
			printf("plim, ");
		}
		
	}
	
	}



