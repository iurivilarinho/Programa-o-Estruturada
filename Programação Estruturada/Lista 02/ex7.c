#include <stdio.h>
#include <locale.h>
#include <math.h>

/*07) Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. 
Informe a quantidades de latas de tinta a serem compradas e o preço total.*/


int main(){
  setlocale(LC_ALL,"");
  float area, tinta, latas, preco;
  int qtdlatas;
  
  printf("Digite o tamanho da área em m² que deve ser pintada: ");
  scanf("%f", &area);

 tinta = area / 3;
 qtdlatas = (int)tinta;
 
 if (tinta + 0.5 >= qtdlatas){
 	qtdlatas = qtdlatas + 1;
 }
 
 preco = (float)qtdlatas * 18;
 
 
 printf("latas que serão gastas %i \n", qtdlatas);
 printf("preço total gasto para a compra R$ %f", preco);
  
  

}
