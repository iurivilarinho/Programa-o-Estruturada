#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"");
	int i,j;
	int dobro, triplo;
	
	printf("Informe um numero: ");
	scanf("%d", &i);
	
	dobro = i + i;
	triplo = i * 3;
	
	printf("o numero digitado �: %d \n", i);
	
	printf("o dobro �: %d \n", dobro);
	
	printf("o triplo �: %d \n", triplo);
	
	
}
