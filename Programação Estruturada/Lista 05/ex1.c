#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/*
01) Fa�a um c�digo que preencha um vetor com n�meros inteiros (oito elementos). Solicitar um n�mero ao usu�rio. Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor. Se n�o existir, imprimir uma mensagem que n�o existe.
*/

int main() {
	srand(time(NULL));
  int i,j=0,cont=0, num, vet[8];
  int n; // Se/sen�o exite o n�mero no vetor.
  
 
  for(i=0;i<8;i++){
		 vet[i] = 1 + (rand() % 49);
    printf("Posicao %d - %d\n",cont, vet[i]);
   
    
    cont++;
	}
   printf("\nQual numero voc� deseja encontrar? ");
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
