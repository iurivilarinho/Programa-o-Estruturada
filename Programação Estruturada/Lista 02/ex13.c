#include<stdio.h>

int main() {
	
	int classe, regioes, armas;
	
	
	printf("escolha uma Classe \n");
	printf("digite 1 para Guerreiro \n");
	printf("digite 2 para Mago \n");
	printf("digite 3 para Druida \n");
	printf("digite 4 para Sacerdote \n");
	scanf("%i", &classe);
	
	printf("escolha uma Regiao \n");
	printf("digite 1 para Azeroth \n");
	printf("digite 2 para Azkaban \n");
	printf("digite 3 para Aurora \n");
	printf("digite 4 para Brightwood \n");
	scanf("%i", &regioes);
	
	printf("escolha uma Arma \n");
	printf("digite 1 para Machado cego \n");
	printf("digite 2 para Picareta invertida \n");
	printf("digite 3 para Adaga sem ponta \n");
	printf("digite 4 para Corrente sem Elo \n");
	scanf("%i", &armas);
	
//	if (classe <=0 && classe >=5) {
//		
//	printf("digite uma op��o valida!");
//		
//	} else {
	
	
switch(classe){
	
	case 1:
		
	printf("Voce agora � um Guerreiro ");
	break;
	case 2:
		
	printf("Voce agora � um Mago ");	
	break;
	case 3:
		
	printf("Voce agora � um Druida ");
	break;
	case 4:
		
	printf("Voce agora � um Sacerdote ");
	break;
}
//}



switch(regioes){
	
	case 1:
		
	printf("da regi�o de Azeroth ");
	break;
	case 2:
		
	printf("da regi�o de Azkaban ");	
	break;
	case 3:
		
	printf("da regi�o de Aurora ");
	break;
	case 4:
		
	printf("da regi�o de Brightwood ");
	break;
}

switch(armas){
	
	case 1:
		
	printf("armado com um Machado cego ");
	break;
	case 2:
		
	printf("armado com uma Picareta invertida ");	
	break;
	case 3:
		
	printf("armado com uma Adaga sem ponta ");
	break;
	case 4:
		
	printf("armado com uma Corrente sem Elo ");
	break;
}



}
//13) Fa�a um jogo no qual o jogador tem que escolher uma dentre quatro classes diferentes:
//Guerreiro
//Mago
//Druida
//Sacerdote
//Depois o jogador tem que escolher um dentre quatro territ�rios/regi�es diferentes:
//Azeroth
//Azkaban
//Aurora
//Brightwood
//Depois o jogador tem que escolher um dentre quatro armas diferentes:
//Machado cego
//Picareta invertida
//Adaga sem ponta
//Corrente sem elo
//No fim o jogo deve exibir uma mensagem �nica com todas as escolhas que o jogador fez. Exemplo:
//Voc� agora � um Mago da regi�o de Aurora armado com um Machado cego.

