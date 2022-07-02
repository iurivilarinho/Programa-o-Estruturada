#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int divisao(int x, int y){
  if(y == 0){
    return 0;
  } else if (x % y == 0){
    return 1;
  }
}

int main(void) {
  srand(time(NULL));
  
  int min = 0;
  int max = 10;  
  int i, x, y, resultado;
  
  for(i = 0; i < 10; i++){
    x = min + rand() % (max - min);
    y = min + rand() % (max - min);
    
    resultado = divisao(x ,y);
        
    if(resultado == 1){
      printf("\n%d é divisivel por %d, retorno da função %d", x, y, resultado);
    } else {
      printf("\n%d não é divisivel por %d, retorno da função %d", x, y, resultado);
    }
    printf("\n");
  }
    
  return 0;
}