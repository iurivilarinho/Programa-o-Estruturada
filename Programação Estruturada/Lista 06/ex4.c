#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
04) Uma frase palíndroma é aquela que, ou se leia da esquerda para a direita, ou da direita para a esquerda, tem o mesmo sentido. Os números, como as letras, também são símbolos e um número palíndromo (ou capicua) é aquele que é igual quando lido nos dois sentidos. Exemplos: 14541, 7117, 3333, etc. Faça um programa que receba um número e retorne se ele é palíndromo ou não.
*/

int main() {
  int randomico, num, inverso = 0;

  srand(time(NULL));
  randomico = rand() % 100;

  printf("------------- Numero aleatorio -------------\n");
  printf("%d\n\n", randomico);

  num = randomico;

  while (num > 0) {
    inverso = (inverso*10) + (num % 10);
    num = num / 10;
}

  if (randomico == inverso){ 
    printf("%d e um numero palindromos\n\n", randomico);
  } else {
      printf("%d nao e um numero palindromo\n\n", randomico);
  } 
  
  return 0;
}
