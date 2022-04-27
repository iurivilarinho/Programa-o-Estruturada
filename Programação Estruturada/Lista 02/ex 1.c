#include <stdio.h>
#include <locale.h>

int main () {


	float metros;
	float polegadas;
	float resultado;
	
	metros = 100.00;
	polegadas = 39,3701;
	
		printf("Informe a distancia em metros ");
		scanf("%f", &metros);
	
		resultado = metros*polegadas;
	
	
		printf("%f ", resultado);
	
	return 0;
}

