#include <stdio.h>
#include <locale.h>

int main () {
	float vit, emp, der, pontos, qtd_vit, aux;
	float porcentagem, percentual_vit, percentual_emp, percentual_der ;
	
	
	printf("### Equipe Wolf ###\n");
	printf("infome a quantidade de vitorias: ");
	scanf("%f",&vit);
	printf("Informe a quantidade de empates: ");
	scanf("%f", &emp);
	printf("informe a quantidade de derrotas: ");
	scanf("%f", &der);
	printf("\n");
	
	porcentagem = vit + emp + der;
	percentual_vit = vit / porcentagem * 100 ;
	percentual_emp = emp / porcentagem * 100 ;
	percentual_der = der / porcentagem * 100 ;
	
	printf("Pontos equipe Wolf\n");
	printf(" Quantidade de vitorias: %.0f \n Quantidade de empates: %.0f \n Quantidade de derrotas: %.0f \n Quantidade de pontos: %.0f \n", qtd_vit, emp, der, pontos);
	printf(" Percentual de vitorias: %.2f%\n Percentual de empates: %.2f%\n Percentual de derrotas: %.2f%\n", percentual_vit, percentual_emp, percentual_der );
	
}
