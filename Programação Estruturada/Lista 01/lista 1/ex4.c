#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL,"");
	
	int i,j;
	int result1, result2, result3;
	
	printf("informe dois numeros, aperte ENTER apos digitar cada numero: \n");
	scanf("%d %d" ,&i, &j);
	
	result1 = i + j;
	result2 = i - j;
	result3 = i * j;
	
	printf("A soma dos numeros %i e %i tem como resultado: %d \n", i, j, result1);
	
	printf("A subtração dos numeros  %i e %i tem como resultado: %d \n", i, j, result2);
	
	printf("A multiplicação dos numeros  %i e %i tem como resultado: %d", i, j, result3);
	
}
