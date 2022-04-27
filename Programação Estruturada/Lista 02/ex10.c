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
	
	printf("o XP do jogador é de: %i \n ", xp);
	
	if (xp == 0 && xp <= 25) {
		
	printf("Seu nivel é Novato!");
	
	} if (xp >= 26 && xp <= 50){
	
	printf("Seu nivel é Mago!!");
	
	} if (xp >= 51 && xp <= 75) {
		
	printf("Seu nivel é Mago Supremo!!!");
	} if (xp >= 76 && xp <= 100 || xp >= 101 && xp<=1000) {
	
	printf("Seu nivel é Lorde das Magias!!!!");
	
	}
	}
	
	
	

//10) Fazer um programa que receba três stats do jogador: vida, ataque e defesa. A experiência do jogador (XP) é a média entre os três stats. 
//Imprima o nível do jogador conforme a seguir (0 a 25 XP) novato, (26 a 50 XP) mago, (51 a 75 XP) mago supremo, (76 a 100 XP)  lorde das magias.
