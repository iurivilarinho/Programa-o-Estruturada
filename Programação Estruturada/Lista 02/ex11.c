#include <stdio.h>
#include <locale.h>

int main () {
	int vit, emp, der, pontos, qtd_de_vit;
	int vit2, emp2, der2, pontos2, qtd_de_vit2;
	
	printf("### Equipe Wolf ###\n");
	printf("infome a quantidade de vitorias: ");
	scanf("%i",&vit);
	printf("Informe a quantidade de empates: ");
	scanf("%i", &emp);
	printf("informe a quantidade de derrotas: ");
	scanf("%i", &der);
	printf("\n");
	
	printf("### Equipe Dragon ###\n");
	printf("infome a quantidade de vitorias: ");
	scanf("%i",&vit2);
	printf("Informe a quantidade de empates: ");
	scanf("%i", &emp2);
	printf("informe a quantidade de derrotas: ");
	scanf("%i", &der2);
	printf("\n");
	
	vit = vit * 3;
	pontos = vit + emp;
	qtd_de_vit = vit / 3;
	printf("Pontos equipe Wolf\n");
	printf("quantidade de vitorias %i \n", qtd_de_vit);
	printf("quantidade de empates %i \n", emp);
	printf("quantidade de derrotas %i \n", der);
	printf("quantidade de pontos %i \n\n", pontos);
	
	vit2 = vit2 * 3;
	pontos2 = vit2 + emp2;
	qtd_de_vit2 = vit2 / 3;
	printf("Pontos equipe Dragon\n");
	printf("quantidade de vitorias %i \n", qtd_de_vit2);
	printf("quantidade de empates %i \n", emp2);
	printf("quantidade de derrotas %i \n", der2);
	printf("quantidade de pontos %i \n", pontos2);
	
}
