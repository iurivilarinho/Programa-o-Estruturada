#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	
	srand( (unsigned)time(NULL) );
  	int i, play1, play2, opcao, soma;
  
  printf("Escolha 1  par e 2 para impar!\n");
  scanf("%i", &opcao);
  
  	switch (opcao) {
  
  	case 1:
  	
  	printf("voce escolheu par, informe um numero de 1 a 5 para jogar!\n");
  	scanf("%i", &play1);
  	play2 = rand() % 6;	   
  	soma = play1 + play2;
  	
  	printf("Maquina colocou o numero %i \n", play2);
  	
  	if(soma % 2 == 0){
	  
	   printf("Voce ganhou, pois a soma de %i com %i deu %i, que é um numero par!", play1, play2, soma);
	  
	  }
	else {
	  	
	   printf("Voce perdeu, pois a soma de %i com %i deu %i, que é um numero impar!", play1, play2, soma);
	  }
  	
  	
  	break;
  		
  	case 2:
  		printf("voce escolheu impar, informe um numero de 1 a 5 para jogar!\n");
  		scanf("%i", &play1);
  		play2 = rand() % 6;
  		soma = play1 + play2;
  		printf("Maquina colocou o numero %i \n", play2);
  	
  	if(soma % 2 == 0){
	  
		printf("Voce perdeu, pois a soma de %i com %i deu %i, que é um numero par!", play1, play2, soma);
	  
	}
	else {
	  
	  	printf("Voce ganhou, pois a soma de %i com %i deu %i, que é um numero impar!", play1, play2, soma);
	  
	  }
	break;
	  }
  		
    return 0;
  }
  
