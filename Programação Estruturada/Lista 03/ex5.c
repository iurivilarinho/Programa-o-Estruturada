#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	
//Faça um programa que calcule o preço de skins da loja Rito Gomes. As skins custam R$ 1,30 cada se forem compradas menos de dez skins,
//e R$ 1,00 se forem compradas dez ou mais skins. Escreva um programa que leia o número de skins compradas, calcule e escreva o custo total da compra.
	
	int skins, skins2;
	float compra;
	printf("Rito Gmaes Shopping\n\n");
	printf("informe quantas skins dseja comprar: ");
	scanf("%i",&skins);
	
	if(skins < 10) {
		compra = skins * 1.30;
	printf("O total da compra foi de R$%.2f", compra);
	}
	if (skins >= 10 ) {
		compra = skins * 1.0;
		printf("O total da compra foi de R$%.2f", compra);
	}
  
}
