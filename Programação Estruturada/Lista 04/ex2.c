#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Autor: Iuri Vilarinho Sant Ana de Souza
//25/03/2022

int main () {
	
	srand( (unsigned)time(NULL) );
	
	float random;
	int i, j, aux = 0;
	float porc [6] = {0,0,0,0,0,0};
	float face [6] = {0,0,0,0,0,0};
	
	for(i = 0; i <= 1000; i++){
	
	random = 1 + (rand () % 6);
	
	if(random == 1){
		face[0] ++;
	}
	if(random == 2){
		face[1] ++;
	}
	if(random == 3){
		face[2] ++;
	}
	if(random == 4){
		face[3] ++;
	}
	if(random == 5){
		face[4] ++;
	}
	if(random == 6){
		face[5] ++;
	}
	}
	
	porc[0] = face[0] * 100 / 1000;
	porc[1] = face[1] * 100 / 1000;
	porc[2] = face[2] * 100 / 1000;
	porc[3] = face[3] * 100 / 1000;
	porc[4] = face[4] * 100 / 1000;
	porc[5] = face[5] * 100 / 1000;



for(j = 0; j <= 5; j++){
	
	aux ++;
	
	printf("A porcentagem que saiu a face %i foi de %.2f %%",aux,  porc[j]);
	printf("\n");

}
	printf("\n");
	printf("O dado nao e viciado!");

}
