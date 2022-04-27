#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Autor: Iuri Vilarinho Sant Ana de Souza
//25/03/2022

int main () {
	
	srand( (unsigned)time(NULL) );
	
	int op [4];
	int vida = 3, pontos = 0,i, letra;
	float num1, num2, result, user;
	
	
printf("######-- Advinhe o resultado da operação --######\n");
printf("\n");
	
	do{
	
	
	
	for(i=0; i <=4; i++){
	
	op[i] = 1 + (rand()  % 4);
}

	
	
	if (op[0] == 1) {
		
	num1 = rand() % 10;
	
	num2 = rand() % 10;
	
		
		result = num1 + num2;
		printf("Pontuação: %i\n", pontos);
		printf("Quanto da %.0f + %.0f ?", num1, num2);
		scanf("%f", &user);
		printf("\n");
		
		if(result == user){
			
			printf("Parabens, voce acertou o resultado!!!\n");
			pontos = pontos + 10;
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}
		}
		else {
			
			vida = vida -1;
			printf("Poxa, n foi dessa vez! Voce ainda tem %i tentativas!\n ", vida);
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
		
	}
	
	if (op[1] == 2) {
	
	num1 = rand() % 10;
	
	num2 = rand() % 10;
	
		
		result = num1 - num2;
		printf("Pontuação: %i\n", pontos);
		printf("Quanto da %.0f - %.0f ?", num1, num2);
		scanf("%f", &user);
		printf("\n");
		
		if(result == user){
			
			printf("Parabens, voce acertou o resultado!!!\n");
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			pontos = pontos + 10;
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
		else {
			
			vida = vida -1;
			printf("Poxa, n foi dessa vez! Voce ainda tem %i tentativas!\n ", vida);
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
	}
	
	if (op[2] == 3) {
	
	num1 = rand() % 10;
	
	num2 = rand() % 10;
	
		
		result = num1 * num2;
		printf("Pontuação: %i\n", pontos);
		printf("Quanto da %.0f x %.0f ?", num1, num2);
		scanf("%f", &user);
		printf("\n");
		
		if(result == user){
			
			printf("Parabens, voce acertou o resultado!!!\n");
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			pontos = pontos + 10;
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
		else {
			
			vida = vida -1;
			printf("Poxa, n foi dessa vez! Voce ainda tem %i tentativas!\n ", vida);
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
		
	}
	
	if (op[3] == 4) {
	
	num1 = rand() % 10;
	
	num2 = rand() % 10;
	
		
		result = num1 / num2;
		printf("Pontuação: %i\n", pontos);
		printf("Quanto da %.0f / %.0f ?", num1, num2);
		scanf("%f", &user);
		printf("\n");
		
		if(result == user){
			
			printf("Parabens, voce acertou o resultado!!!\n");
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			pontos = pontos + 10;
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
		else {
			
			vida = vida -1;
			printf("Poxa, n foi dessa vez! Voce ainda tem %i tentativas!\n ", vida);
			printf("pressione 1 e apos ENTER  para continuar!\n");
			scanf("%i", &letra);
			
				if(vida == 0){
		
					printf("Suas vidas acabaram!");
					break;
			               	}

		}
		
	}
	
	
	system("cls");
}while(vida != 0);
	
}
