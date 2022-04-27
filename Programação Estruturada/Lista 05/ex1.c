#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/*
01) Faça um código que preencha um vetor com números inteiros (oito elementos). Solicitar um número ao usuário. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir, imprimir uma mensagem que não existe.
*/

int main() {
	srand(time(NULL));
  int i,j=0,cont=0, num, vet[8];
  int n; // Se/senão exite o número no vetor.
  
 
  for(i=0;i<8;i++){
		 vet[i] = 1 + (rand() % 49);
    printf("Posicao %d - %d\n",cont, vet[i]);
   
    
    cont++;
	}
   printf("\nQual numero você deseja encontrar? ");
   scanf("%d",&num);
  
   for(i=0;i<8;i++) {
     if(vet[i]==num) {
       printf("\nO numero %d esta na posicao %d do vetor: ", num, i);
       n=1;
     }
    }
   if(n!=1){
       printf("\nO numero digitado nao esta no vetor");
    }
 return 0;
 }
