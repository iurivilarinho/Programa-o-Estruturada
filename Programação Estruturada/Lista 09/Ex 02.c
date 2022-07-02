#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"");
  srand(time(NULL));
  FILE *arq;		
	arq = fopen("arquivo.txt", "w");
  int tamanho = 100;
  int i, numero;
  int linha = 0;

  int min = 0;
  int max = 99;

  for(i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      numero = min + rand() % (max - min);
      fprintf(arq, "%d ", numero);
    }    
    fprintf(arq, "\n");
  }
  fclose(arq);	
  printf("Arquivo salvo com sucesso.");
  return 0;
}