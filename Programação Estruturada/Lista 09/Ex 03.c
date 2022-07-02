#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

// Lista 9 ex 3

int main(void) {
  setlocale(LC_ALL,"");
  srand(time(NULL));
  FILE *arq;		
	arq = fopen("arquivo.txt", "w");
  int sair = 1;
  int n = 0;

  while(sair != 0){
    printf ("\nDigite u número (Digite 0 para sair): ");
    scanf("%d", &n);    
    if(sair == 0) {
      sair = 1;
    }  
  }
  fclose(arq);	
  printf("Arquivo salvo com sucesso.");
  return 0;
}