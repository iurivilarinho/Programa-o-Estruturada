#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");
	
	float f,c;

	
	printf("Informe a temperatura em Celsius para converter para Farenheit: ");
	scanf("%f", &c);
	
	f = (c * 9/5) + 32;
	
	printf("a tempreratura %f tem o valor de %f em Farenheit ", c, f);
}
