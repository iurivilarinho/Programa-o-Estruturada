#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct bandas {
	char nome[100];
	char tipoDeMusica[100];
	int numeroIntegrantes;	
	int quantidadeAlbuns;	
};

int main(int argc, char *argv[]) {
	
	FILE *arq;
		
	arq = fopen("banda.txt", "a");
	
	setlocale(LC_ALL,"");
	struct bandas banda[3];
	int i = 0, j = 0;
	int linha = 0, sair = 1;
	
	while(sair != 0){		
		printf("Digite o nome da banda: ");
		scanf("%[^\n]", banda[i].nome);
		getchar();
		printf("Digite o tipo de música da banda: ");
		scanf("%[^\n]", banda[i].tipoDeMusica);
		getchar();
		printf("Digite o numero de integrantes: ");
		scanf("%d", &banda[i].numeroIntegrantes);
		printf("Digite a quantidade albúns: ");
		scanf("%d", &banda[i].quantidadeAlbuns);	
		linha++;
		i++;
		printf("Você deseja sair? (digite 0): ");
		scanf("%d", &sair);
		getchar();
	}
	
	while(linha > 0){
		fprintf(arq, "%s %s %d %d\n", banda[j].nome, banda[j].tipoDeMusica, banda[j].numeroIntegrantes, banda[j].quantidadeAlbuns);
		linha--;
		j++;
	}
	
	fclose(arq);	
	
    char *buffer[15];
	
	char nome[100], tipoDeMusica[100], nomeBandaConsulta[100], tipoMusica[100]; 
	int quantidadeAlbuns, numeroIntegrantes, quantidadeLinhas1 = 0, quantidadeLinhas2 = 0, valorCont = 1;
	arq = fopen("banda.txt", "r");
			
	if (arq == NULL){
		printf("Arquivo nao encontrado!\n");
		return 0;
	}else {	
	
		while (fgets(buffer, 100, arq)){
			quantidadeLinhas1++;
			quantidadeLinhas2++;
		}
		fseek(arq,0,SEEK_SET);
	
		printf("Digite o nome da banda para consultar: ");
		scanf("%[^\n]", nomeBandaConsulta);
		getchar();		
		
		while(quantidadeLinhas1 > 0){
			fscanf(arq, "%s %s %d %d", nome, tipoDeMusica, &numeroIntegrantes, &numeroIntegrantes);
			if (strcmp(nome, nomeBandaConsulta) == 0){
				printf("O nome da banda é %s toca o tipo de música %s tem %d integrantes e possui %d albúns.\n", nome, tipoDeMusica, numeroIntegrantes, quantidadeAlbuns);
				quantidadeLinhas1 = 0;
			}
			fgets(buffer, 100, arq);
			quantidadeLinhas1--;
		}
		
		printf("Digite o tipo de múscia: ");
		scanf("%[^\n]", tipoMusica);
		getchar();
		
		while(quantidadeLinhas2 > 0){
			fscanf(arq, "%s %s %d %d", nome, tipoDeMusica, &numeroIntegrantes, &numeroIntegrantes);
			if (strcmp(tipoMusica, tipoDeMusica) == 0){
				if (valorCont > 0){
					printf("As bandas que tocam esse tipo de música são: ");
					valorCont = 0;
				}
				printf("%s ", nome);	
			}
			fgets(buffer, 100, arq);
			quantidadeLinhas2--;
		}
		fclose(arq);
	}	
	return 0;
}