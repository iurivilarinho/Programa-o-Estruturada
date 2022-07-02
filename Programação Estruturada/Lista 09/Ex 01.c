
▼
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

// Lista 9 ex 1

int main(void) {
  setlocale(LC_ALL,"");
  srand(time(NULL));
  FILE *arq;		
	arq = fopen("arquivo.txt", "w");
  int tamanho = 100;
  int i, numero;
  int linha = 0;
  
  int min = -100;
  int max = 100;
  
  for(i = 0; i < tamanho; i++){
    numero = min + rand() % (max - min);
    fprintf(arq, "%d\n", numero);
  }
  fclose(arq);	
  printf("Arquivo salvo com sucesso.");
  return 0;
}