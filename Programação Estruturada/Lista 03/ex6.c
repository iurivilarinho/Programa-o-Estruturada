#include<stdio.h>
#include <stdlib.h>
int main(void)

//06) Fa�a um c�digo que imprima seu nome na tela 10 vezes. Primeiro uma vez em cada linha, depois sem quebra de linhas e com separa��o por v�rgulas

{
	char nome[200];
	int i, j;
	
	
		printf("informe seu nome:")	;
		scanf("%s",&nome);
	for(i = 0; i <10 ; i++  ){
		
		printf("%s \n\n", nome);
	
	}
	
	for(j = 0; j < 10; j ++) {
		
		printf("%s ", nome);
		printf(",");
	}

}
