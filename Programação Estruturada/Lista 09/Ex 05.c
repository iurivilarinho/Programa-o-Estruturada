#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

// Lista 9 ex 4

int main(void) {
  setlocale(LC_ALL,"");
  FILE *arq;		
	arq = fopen("arquivo.txt", "w");

  char n[8];
  for (int i = 1; i < 50; i++) {
    int numero = i;
    char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int arabicos[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    // acha a quantidade de elementos no array
    int indice = (sizeof(arabicos) / sizeof(arabicos[0])) - 1;
    
    while (numero > 0) {
      if (numero >= arabicos[indice]) { 
        
        printf("%s", romanos[indice]);      
        numero -= arabicos[indice];  
        fprintf(arq, "%d :: %s\n", i, romanos[indice]);
      } else {        
        indice--;
        //printf("%s", romanos[indice]);
      }
      //printf("%s", romanos[indice]);      
    }
    printf("\n\n");   
    
  }
  fclose(arq);	
  printf("Arquivo salvo com sucesso.");

  return 0;
}