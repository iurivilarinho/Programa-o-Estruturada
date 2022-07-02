#include <stdio.h>
#include <stdlib.h>

void alfabeto(int x, int y){  
  if(x >= 97 && y <= 122){
    int resultado;
    resultado = (y - x) - 1;
    
    printf("\nDigitou: %c %c.", x, y);
    printf("\nO número de caracteres entre eles é: %d", resultado);
  } else {
    printf("\nCaracter incorreto.");
  }
}

int main(void) { 
  char letraUm, letraDois;

  printf("\nDigite uma letra entre a e z: ");
  scanf("%s", &letraUm);

  printf("\nDigite outra letra entre a e z: ");
  scanf("%s", &letraDois);

  alfabeto(letraUm, letraDois); 
  
  return 0;
}
