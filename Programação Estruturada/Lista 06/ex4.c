#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
04) Uma frase pal�ndroma � aquela que, ou se leia da esquerda para a direita, ou da direita para a esquerda, tem o mesmo sentido. Os n�meros, como as letras, tamb�m s�o s�mbolos e um n�mero pal�ndromo (ou capicua) � aquele que � igual quando lido nos dois sentidos. Exemplos: 14541, 7117, 3333, etc. Fa�a um programa que receba um n�mero e retorne se ele � pal�ndromo ou n�o.
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
