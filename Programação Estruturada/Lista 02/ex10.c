#include<stdio.h>

int main () {
	
	int vida, ataque, defesa, xp;
	
	printf("informe a quantidade de vida do jogador: \n");
	scanf("%i", &vida);
	printf("informe a quantidade de de ataque do jogador: \n");
	scanf("%i",&ataque);
	printf("informe a quantidade de defesa do jogador \n");
	scanf("%i",&defesa);
	
	xp = (vida + ataque + defesa) / 3;
	
	printf("o XP do jogador � de: %i \n ", xp);
	
	if (xp == 0 && xp <= 25) {
		
	printf("Seu nivel � Novato!");
	
	} if (xp >= 26 && xp <= 50){
	
	printf("Seu nivel � Mago!!");
	
	} if (xp >= 51 && xp <= 75) {
		
	printf("Seu nivel � Mago Supremo!!!");
	} if (xp >= 76 && xp <= 100 || xp >= 101 && xp<=1000) {
	
	printf("Seu nivel � Lorde das Magias!!!!");
	
	}
	}
	
	
	

//10) Fazer um programa que receba tr�s stats do jogador: vida, ataque e defesa. A experi�ncia do jogador (XP) � a m�dia entre os tr�s stats. 
//Imprima o n�vel do jogador conforme a seguir (0 a 25 XP) novato, (26 a 50 XP) mago, (51 a 75 XP) mago supremo, (76 a 100 XP)  lorde das magias.
