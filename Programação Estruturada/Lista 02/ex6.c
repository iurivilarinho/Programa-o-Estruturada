#include<stdio.h>

int main () {
	
	
	float salario, horas, hora, inss, ir, sindicato, liquido;

	
	printf("informe quanto ganha por hora: R$ \n");
	scanf("%f", &hora);
	printf("informe quantas horas trabalha ao m�s: \n");
	scanf("%f", &horas);
	
	salario = hora * horas;
	
	printf("salario bruto: R$ %f\n", salario);
	
	ir =  salario / 100 * 11;
	
	printf("Pago ao Imposto de Renda: R$ %f\n", ir);

	
	inss = salario / 100 * 8;
	
	printf("Pago ao INSS: R$ %f\n", inss);

	
	sindicato = salario / 100 * 5;
	
	printf("Pago ao Sindicato: R$ %f\n", sindicato);

	
	liquido = salario - salario / 100 * 24;
	
	printf("salario liquido: R$ %f\n", liquido);

}

//Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s, 
//sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�: 
//sal�rio bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o sal�rio l�quido.
//calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
//
//+ Sal�rio Bruto : R$ ...
//- IR (11%) : R$ ...
//- INSS (8%) : R$ ...
//- Sindicato ( 5%) : R$ ...
//= Sal�rio Liquido : R$ ...


