#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"");
	
	int i , j;
	int result;
	
	j = 100;
	
	printf("Informe a metragem para convers�o em centimentros \n");
	scanf("%i", &i);
	
	result = i * j;
	
	printf("%i metros equivale a %i centimentros \n", i, result);
	
}
