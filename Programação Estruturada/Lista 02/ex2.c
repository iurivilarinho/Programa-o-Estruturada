#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	
	setlocale(LC_ALL,"portuguese");

float resultado, pi;
float raio;
float resultado2;
float raio2;
pi = 3.14;

	printf("informe o raio do circulo: ");
	scanf("%f", &raio);
	
	raio2 = pow(raio,2);
	
	resultado2 = raio2 * pi;

	
	printf("A area do circulo é: %f \n", resultado2);
	
	resultado = 2 * pi * raio;
	
	printf("O perimetro do circulo é: %f ", resultado);
}

