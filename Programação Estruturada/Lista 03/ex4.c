#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	
	srand( (unsigned)time(NULL) );
  	int  play1, play2, gol, defesa;
  	int chutes = 8;
  	int chute;
  	defesa = 0;
  printf("É PENALTI!!! \n");
  printf("       ==================================================\n");
printf("       |	1	|	2	|	3	|\n");
printf("       |		|		|		|\n");
printf("       |	4	|	5	|	6	|\n");
printf("       |		|		|		|\n");
printf("       |	7	|	8	|	9	|\n\n");
  
  while(chutes >=0 ) {
  	printf("####### Informe uma posição de 1 a 9 para chutar a bola! #######\n");
  	scanf("%i", &chute);
  	
  	play2 = rand() % 10;	
  	
  	if(play1 == play2){
  		
  		printf("Tafaréuuuuuuuu, DEFESA\n\n");
  		defesa = defesa + 1;
	  }
	  if(play1 != play2){
	  	printf("GOOOOOOOOOOOL\n\n");
	  	gol = gol + 1;
	  }
	  
  	
  	chutes = chutes -1;
  }
  
  printf("GOLS marcados: %i \n", gol);
  printf("DEFESAS efetuadas: %i \n", defesa);
  
}
  


  
  
  
  
  
  
  
  
//  for(i = 0; i <=8 ; i++ ){
//  	printf("Informe uma posição de 1 a 9 para chutar a bola!\n");
//  	scanf("%i", &chute[i]);
//  		for(j = 0; j <=8 ; j++){
//  			
//  			 printf("%i", chute[j]);
		  
  //play2 = rand() % 100;	
   
  
