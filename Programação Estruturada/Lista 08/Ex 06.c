#include <stdio.h>
#include <stdlib.h>

int alfabeto(int x){
  if((x >= 65 && x <= 90) || (x >= 97 && x <= 122)){
    return 1;
  } else {
    return 0;
  }
}

int main(void) { 
  char letra;

  printf("Digite uma letra ");
  scanf("%c", &letra);

  printf("\n\n%c -> %d", letra, alfabeto(letra));
  
  return 0;
}

