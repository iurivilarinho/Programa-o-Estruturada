#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	
	srand( (unsigned)time(NULL) );
  	int i, play1, play2, opcao, soma;
  
  printf("Escolha 0 para PEDRA, 1 para PAPEL ou 2 para TESOURA! \n");
  scanf("%i", &opcao);
  
  	switch (opcao) {
  
  	case 0:
  	
  	printf("voce escolheu PEDRA!\n");
  	play2 = rand() % 3;	
  	
  	if (play2 == 0){
	  printf("maquina jogou PEDRA!\n");
	  printf("EMPATE!");
	  }
	if (play2 == 1){
	printf("maquina jogou PAPEL\n");
	printf("DERROTA!");
	}
	if (play2 == 2){
		printf("maquina jogou TESOURA\n");
		printf("VITORIA!!!/n");
	}
  	
  	break;
  		
  	case 1:
  		
		printf("voce escolheu PAPEL!\n");
  		play2 = rand() % 3;	
  	
  	if (play2 == 0){
	  printf("maquina jogou PEDRA!\n");
	  printf("VITORIA!!!");
	  }
	if (play2 == 1){
	printf("maquina jogou PAPEL\n");
	printf("EMPATE!");
	}
	if (play2 == 2){
		printf("maquina jogou TESOURA\n");
		printf("DERROTA!\n");
	}
	break;
	
	case 2:
  		
		printf("voce escolheu TESOURA!\n");
  		play2 = rand() % 3;	
  	
  	if (play2 == 0){
	  printf("maquina jogou PEDRA!\n");
	  printf("DERROTA!\n");
	  }
	if (play2 == 1){
	printf("maquina jogou PAPEL\n");
	printf("VITORIA!!!\n");
	}
	if (play2 == 2){
		printf("maquina jogou TESOURA\n");
		printf("EMPATE!\n");
	}
	break;
	  }
  		
    return 0;
  }
  
