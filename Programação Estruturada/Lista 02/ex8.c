#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*08) Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule 
e informe o tempo aproximado de download do arquivo usando este link (em minutos).*/

//(10 Megabytes / 0,625 Megabytes por segundo = 16 segundos para baixar o arquivo) Tudo o que você precisa lembrar é esta fórmula simples:
// Tamanho do arquivo em megabytes / (velocidade de download em megabits / 8) = tempo em segundos.
//  Um arquivo de 15 MB, baixado a 10 Mb/s: 15 / (10/8) = 12 segundos.

int main(){
  float tamanho, velocidade, download_seg, tempo_min;
  setlocale(LC_ALL, "");
  
  printf("Digite o tamanho do arquivo em MB: ");
  scanf("%f", &tamanho);

  printf("Digite a velocidade do link de internet e Mbps: ");
  scanf("%f", &velocidade);
  
	tamanho = tamanho/100;
	
	download_seg = tamanho / (velocidade /8);

  printf("Irá demorar %.2f minutos para baixar o arquivo", download_seg);
  
  return 0;
}
