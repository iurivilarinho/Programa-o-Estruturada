#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
07) Crie um jogo que mostre um número binário para o usuário, e este tem que acertar o número decimal correspondente. Similar ao exercício 1 da lista 3. Este número binário tem que estar em um vetor de 4 posições. O jogo termina quando o jogador errar três vezes. Mostrar quantas vezes o jogador acertou e errou.
*/

int main() {
  int vet[4], aleatorio, i, multiplicacao, result, pts=0, cont=0;

  srand(time(NULL));
  
  printf("------------- Vetor binario -------------\n");
  while(cont!=5){
  for(i=0;i<4;i++){
    aleatorio = rand() % 2;
    vet[i] = aleatorio;
  }

  printf("Qual o correspodende do numero binario ");
  for(i=0;i<4;i++){
    printf("%d", vet[i]);
  }
  printf(" em decimal?");
  scanf("%d", &result);

  

  multiplicacao = vet[0]*(pow(2,3))+vet[1]*(pow(2,2))+vet[2]*(pow(2,1))+vet[3]*(pow(2,0));

    if(result == multiplicacao){
      printf("Voce acertou o resultado!!! \n");
      printf("Voce tem %d acertos e %d erros \n", pts+1, cont);
      pts+=1;
    } else {
        printf("Voce errou o resultado, tente novamente\n");
        printf("Voce tem %d acertos e %d erros \n", pts, cont+1);
        cont++;
    }
  }

  printf("\n\n------------ PLACAR ------------");
  if(pts==1){
    printf("\nVoce tem: %d ponto", pts);
  } else {
      printf("\nVoce fez: %d pontos", pts);
  }
  
  return 0;
}
