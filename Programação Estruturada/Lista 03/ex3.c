#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	
	srand( (unsigned)time(NULL) );
  	int i, play1, play2, soma;
  	int vida = 5;
  
  printf("ADVINHA��O! \n");
  play2 = rand() % 100;	
  printf("%i\n", play2);
  printf("um numero aleatorio entre 0 e 100 foi gerado! voce ter� 5 chances para advinha-lo, Boa Sorte!!!\n");
  printf("Digite seu primeiro palpite: ");
  scanf("%i", &play1);
  
  while(vida >=0 ){
  	

  	
  	if(play1 > play2){
  		
  		printf("O numero que voce busca � MENOR que o informado!\n");
  		printf("\n");
  		
	  }
	if(play1 < play2) {
		printf("O numero que vc busca � MAIOR que o informado!\n");
		printf("\n");
	}
	if(play2 == play1 || play1 == play2){
	printf("Voce ganhou!!!, o numero aleatorio era %i !!!\n", play2);
		break;
	}
	
		vida = vida - 1;	
		
		printf("um numero aleatorio entre 0 e 100 foi gerado! voce ter� %i chances para advinha-lo, Boa Sorte!!!\n", vida);
 	 	printf("Digite seu palpite: ");
  		scanf("%i", &play1);
  	
  	
  	if(vida == 0){
  
 	 printf("vidas esgotadas!!\n\n");
 	 break;
}
  	 
  } 
  
  
  	
  }
  
