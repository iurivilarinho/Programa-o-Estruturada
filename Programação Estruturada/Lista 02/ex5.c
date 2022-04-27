#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	
	int n1,n2,result1, result2;
	float r1, aux, result3;
	
	printf("informe dois numeros inteiros e um numero real\n");
	printf("digite o primeiro numero inteiro: \n");
	scanf("%i", &n1);
	printf("digite o segundo numero inteiro: \n");
	scanf("%i", &n2);
	printf("digite o numero real: \n");
	scanf("%f", &r1);
	
	result1 = n1*2;
	result2 = n2/2;
	
	printf("O dobro do primeiro tem o valor de %i e a metade do segundo tem o valor de %i\n", result1, result2);
	
	aux = (float)n1;
	result3 = aux*3 + r1/2;
	
	printf("a soma do triplo do primeiro com metade do terceiro %f\n", result3);
	
	
	result3 = pow(r1,3);
	
	printf("O terceiro numero elevado ao cubo tem como resultado %f", result3);
	
}

//Faça um código que receba dois números (n1 e n2) e um número real (d1), calcule e mostre:
//O produto do dobro do primeiro com metade do segundo;
//A soma do triplo do primeiro com o terceiro;
//O terceiro elevado ao cubo.

