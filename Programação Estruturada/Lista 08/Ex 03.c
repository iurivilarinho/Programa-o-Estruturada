#include <stdio.h>

char conversor(int valor){
  char n[8];
  for (int i = 1; i < 50; i++) {
    if (i == valor){
      
    }
    int numero = i;
    char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int arabicos[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    // acha a quantidade de elementos no array
    int indice = (sizeof(arabicos) / sizeof(arabicos[0])) - 1;
    
    while (numero > 0) {
      if (numero >= arabicos[indice]) {
        
        printf("%s", romanos[indice]);
      
        numero -= arabicos[indice];
        
      } else {
        
        indice--;
        //printf("%s", romanos[indice]);
      }
      //printf("%s", romanos[indice]);
      
    }
    printf("\n\n");   
    
  }
}

int main(void) {
  int i, numeroDigitado;

  printf("Digite um número arábico ");
  scanf("%d", &numeroDigitado);
  if (numeroDigitado <= 0 || numeroDigitado >= 51){
    printf("Erro. Favor digite um número entre 1 a 50.\n");
    return 1;
  }

  conversor(numeroDigitado);  
  
  return 0;
}