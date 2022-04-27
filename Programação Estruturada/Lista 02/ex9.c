#include<stdio.h>

int main () {
	
	int num;
	
	printf("informe um numero:");
	scanf("%i", &num);
	
	if (num >= 100 && num <= 200) {
	
	printf("voce digitou um numero entre 100 e 200!!");
	
	} else {
		
		printf("Você digitou um número fora da faixa");
	}
	}


