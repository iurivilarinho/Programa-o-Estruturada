#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct salas{
		char nome[30];
		int assentos;
		int numero;
		
	};
	
	struct filmes{
		char titulo_filme[30];
		char exibicao_filme[30];  //dias da semana em que sera exibido
		int sala; //numero da sala
		
	};
	
		struct sessoes {
		char titulo_sessao[30];
		char horario[10];
		char exibicao_sessao[30];  //dias da semana em que sera exibido
		int sala;
		int assentos_sessao;
		float valor;
		
	};
	
	
	int cad_filme(){
		
	struct filmes filme;
	
	FILE *sl3;
	sl3 = fopen("Filmes.txt", "a");
	
	if (sl3 == NULL) // Testar abertura de aquivo
{
     printf("Erro na abertura do arquivo");
     exit(1);
}
		
	printf("Informe o titulo do filme:\n");
	scanf("%s", filme.titulo_filme);
	getchar();
	printf("Informe o numero da sala onde sera exibido o filme:\n");
	scanf("%d", &filme.sala);
	getchar();
	printf("Informe os dias da semana em que ser�o exibidos o filme:\n");
	scanf("%s", filme.exibicao_filme);
	getchar();

    int j, i = 0;
    struct salas sala[30];
  
    FILE *sl4;
    sl4 = fopen("Sala.txt", "r");
  
    int numSala=-1;
  
  while (!feof(sl4)) {
    fscanf(sl4, "%s", sala[i].nome);
    fscanf(sl4, "%d", &sala[i].assentos);
    fscanf(sl4, "%d", &sala[i].numero);
    if(sala[i].numero==filme.sala){
        numSala=sala[i].numero;
    }
    i++;
  }
    //printf("%d %d\n", numSala, filme.sala);
    if(numSala==filme.sala){
        fprintf(sl3,"%s\n",filme.titulo_filme);
	    fprintf(sl3,"%s\n",filme.exibicao_filme);
		fprintf(sl3,"%d\n",filme.sala);
		printf("Gravado com sucesso!!\n");
    }else{
		printf("Sala inexistente\n");

	}
	
    fclose(sl3);
	fclose(sl4);
	
	menuprincipal();	
}

int cad_sala(){
	
	struct salas sala;
		
	FILE *sl;
	sl = fopen("Sala.txt", "a");
	
	if (sl == NULL) // Testar abertura de aquivo
{
     printf("Erro na abertura do arquivo");
     exit(1);
}

	printf("informe o nome da sala:\n");
	scanf("%s", sala.nome);
	getchar();
	
	printf("informe a quantidade de assentos:\n");
	scanf("%d", &sala.assentos);
	getchar();
	
	printf("informe o numero da sala:\n");
	scanf("%d", &sala.numero);
	getchar();

	 int j, i = 0;
    struct salas sala2[30];
  
    FILE *sl4;
    sl4 = fopen("Sala.txt", "r");
  
    int numSala=-1;
  
  while (!feof(sl4)) {
    fscanf(sl4, "%s", sala2[i].nome);
    fscanf(sl4, "%d", &sala2[i].assentos);
    fscanf(sl4, "%d", &sala2[i].numero);
    if(sala2[i].numero==sala.numero){
        numSala=sala2[i].numero;
    }
    i++;
  }
    //printf("%d %d\n", numSala, filme.sala);
    if(numSala==sala.numero){

    printf("sala ja existe!!\n");

    }else{
		
	fprintf(sl,"%s\n",sala.nome);
	fprintf(sl,"%d\n",sala.assentos);
	fprintf(sl,"%d\n",sala.numero);
	printf("Gravado com sucesso!!!\n");
	}
	
    fclose(sl);
	fclose(sl4);

menuprincipal();
}

int cad_sessao(){
	 
	struct sessoes sessao;
	 
	FILE *sl2;
	sl2 = fopen("Sessao.txt", "a");
	
	if (sl2 == NULL) // Testar abertura de aquivo
{
     printf("Erro na abertura do arquivo");
     exit(1);
}
	 
	 printf("Informe o titulo da sessao:\n");
	 scanf("%s", sessao.titulo_sessao);
	 getchar();
	 
	 printf("Informe o horario de exibicao:\n");
	 scanf("%s", sessao.horario);
	 getchar();
	 
	 printf("informe os dias da semana em que a sessao sera exibida:\n");
	 scanf("%[^\n]s", sessao.exibicao_sessao);
	 getchar();

	 printf("Informe a sala da sessao:\n");
	 scanf("%d", &sessao.sala);
	 getchar();
	 
	 printf("Informe a quantidade de assentos disponiveis na sessao:\n");
	 scanf("%d", &sessao.assentos_sessao);
	 getchar();
	 
	 printf("Informe o valor do ticket da sessao:\n");
	 scanf("%f",&sessao.valor);
	 getchar();

	  int j, i = 0, k = 0;
    struct salas sala[30];
	
  
    FILE *sl4;
	
    sl4 = fopen("Sala.txt", "r");
	
  
    int numSala=-1;
	

  while (!feof(sl4)) {
    fscanf(sl4, "%s", sala[i].nome);
    fscanf(sl4, "%d", &sala[i].assentos);
    fscanf(sl4, "%d", &sala[i].numero);

	//  printf( "%s\n", sala[i].nome);
    // printf("%d\n", sala[i].assentos);
    // printf("%d\n", sala[i].numero);
	 if(sala[i].numero==sessao.sala){
        numSala=sala[i].numero;
    }
   
    i++;
  }

  
  

	struct filmes filme[30];
  	FILE *sl3;
	char nomeFilme[30];
	sl3 = fopen("Filmes.txt", "r");

  while (!feof(sl3)) {
    fscanf(sl3, "%s", filme[k].titulo_filme);
    fscanf(sl3, "%s", filme[k].exibicao_filme);
    fscanf(sl3, "%d", &filme[k].sala);

	printf("%s\n", filme[k].titulo_filme);
    printf("%s\n", filme[k].exibicao_filme);
    printf("%d\n", filme[k].sala);

	if(strcmp(filme[k].titulo_filme , sessao.titulo_sessao)==0){
        strcpy(nomeFilme, filme[k].titulo_filme);
    }
     
    k++;
  }

  
  
    printf("%d %s\n", numSala, nomeFilme);

    if(numSala == sessao.sala && strcmp(nomeFilme, sessao.titulo_sessao)==0 ){
    fprintf(sl2,"%s\n",sessao.titulo_sessao);
	fprintf(sl2,"%s\n",sessao.horario);
	fprintf(sl2,"%s\n",sessao.exibicao_sessao);
	fprintf(sl2,"%d\n",sessao.assentos_sessao);
	fprintf(sl2,"%d\n",sessao.sala);
	fprintf(sl2,"%.2f\n",sessao.valor);
	printf("Gravado com sucesso!!\n");

    }else{
		printf("Sala inexistente ou filme\n");

	}
	fclose(sl4);
	fclose(sl3);	
	fclose(sl2);

menuprincipal();	 
}

//FIM cadastros _______________________________________________________________________________________________________________________________

int menuAlterar(){

	int opcao;
	printf("1 - Alterar Filmes\n");
	printf("2 - Alterar Sala\n");
	printf("3 - Alterar Sessão\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		
		alter_filme();
		
	}else if(opcao == 2){
		
		alter_sala();
	
	}else if(opcao == 3){
		
		alter_sessao();
	
	}else{
		printf("Argumento invalido!!");
	}
}

int menuDeletar(){

	int opcao;
	printf("1 - Deletar Filmes\n");
	printf("2 - Deletar Sala\n");
	printf("3 - Deletar Sessao\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		
		delete_filme();
		
	}else if(opcao == 2){
		
		delete_sala();
	
	}else if(opcao == 3){
		
		delete_sessao();
	
	}else{
		printf("Argumento invalido!!");
	}
}

int menucadastrar(){
	
	
	int opcao;
	printf("1 - Cadastrar Filmes\n");
	printf("2 - Cadastrar Sala\n");
	printf("3 - Cadastrar Sessao\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		
		cad_filme();
		
	}else if(opcao == 2){
		
		cad_sala();
	
	}else if(opcao == 3){
		
		cad_sessao();
	
	}else{
		printf("Argumento invalido!!");
	}
}


int menuprincipal(){
	
	
	int opcao;
	printf("1 - Cadastrar\n");
	printf("2 - Alterar \n");
	printf("3 - Deletar \n");
	printf("4 - Gerar Ticket \n");
	printf("5 - Sair\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		
		menucadastrar();
		
	}else if(opcao == 2){
		
		menuAlterar();
	
	}else if(opcao == 3){
		
		menuDeletar();
	
	}else if(opcao == 4 ){

		ticket();

	}else if(opcao == 5 ){



	}else{
		printf("Argumento invalido!!");
	}
}


int alter_sala(){
	// Lendo do arquivo e gravando no array de struct
  int j, i = 0;
  char nome[30];
  char nome_novo[30];
  int assento_novo;
  int numero_novo;
  
  struct salas sala[30];
  
  FILE *sl4;
  sl4 = fopen("Sala.txt", "r");
  
  
  while (!feof(sl4)) {
    fscanf(sl4, "%s", sala[i].nome);
    fscanf(sl4, "%d", &sala[i].assentos);
    fscanf(sl4, "%d", &sala[i].numero);
    i++;
    
  }
  
  
  fclose(sl4);
  // Imprimir o struct pra conferir se gravou todo o arquivo no struct
  for (j = 0; j < i; j++) {
    printf("Nome: %s\n", sala[j].nome);
    printf("Numero: %d\n", sala[j].assentos);
    printf("Capacidade: %d\n", sala[j].numero);
    printf("-------\n");
  }
  
  printf("\n\n");
  // Fim c�digo Andr�
  
  	printf("Insira o nome da sala para pesquisa:\n");
	scanf("%s", nome);
	
	
	for (j = 0; j < i; j++) {
   
   if(strcmp(sala[j].nome , nome)==0){
   	
   	printf("Insira o novo nome:\n ");
   	scanf("%s", nome_novo);

	printf("Insira o novo numero de assentos:\n ");
   	scanf("%d", &assento_novo);

	printf("Insira o novo numero da sala:\n ");
   	scanf("%d", &numero_novo);

   	
   	strcpy(sala[j].nome, nome_novo);
	sala[j].assentos = assento_novo;
	sala[j].numero = numero_novo;
   	
   }
   
   
  }
  
   sl4 = fopen("Sala.txt", "a");
   
	for (j = 0; j < i; j++) {
    fprintf(sl4,"%s\n",sala[j].nome);
	fprintf(sl4,"%d\n",sala[j].assentos);
	fprintf(sl4,"%d\n",sala[j].numero);
	printf("Sala alterada com sucesso!!\n");
  }
  fclose(sl4);

menuprincipal();
}

int alter_filme(){
	// Lendo do arquivo e gravando no array de struct
  int j, i = 0;
  char titulo[30];
  char titulo_novo[30];
  char exibicao_novo[30];
  int sala_novo;
  
  struct filmes filme[30];
  
  FILE *sl5;
  sl5 = fopen("Filmes.txt", "r");
  
  
  while (!feof(sl5)) {
    fscanf(sl5, "%s", filme[i].titulo_filme);
    fscanf(sl5, "%s", filme[i].exibicao_filme);
    fscanf(sl5, "%d", &filme[i].sala);
    i++;
    
  }
  
  
  fclose(sl5);
  // Imprimir o struct pra conferir se gravou todo o arquivo no struct
  for (j = 0; j < i; j++) {
    printf("titulo: %s\n", filme[j].titulo_filme);
    printf("dias de exibicao: %s\n", filme[j].exibicao_filme);
    printf("Sala: %d\n", filme[j].sala);
    printf("-------\n");
  }
  
  printf("\n\n");
  // Fim c�digo Andr�
  
  	printf("Insira o titulo da sala para pesquisa:\n");
	scanf("%s", titulo);
	
	
	for (j = 0; j < i; j++) {
   
   if(strcmp(filme[j].titulo_filme , titulo)==0){
   	
   	printf("Insira o novo titulo:\n ");
   	scanf("%s", titulo_novo);

	printf("Insira os novos dias de exibicao:\n ");
   	scanf("%s", exibicao_novo);

	printf("Insira o novo numero da sala:\n ");
   	scanf("%d", &sala_novo);
   	
   	strcpy(filme[j].titulo_filme , titulo_novo);
	strcpy(filme[j].exibicao_filme , exibicao_novo);
	filme[j].sala = sala_novo;
	
   	
   }
   
   
  }
  
   sl5 = fopen("Filmes.txt", "w");
   
	for (j = 0; j < i; j++) {
    fprintf(sl5,"%s\n",filme[j].titulo_filme);
	fprintf(sl5,"%s\n",filme[j].exibicao_filme);
	fprintf(sl5,"%d\n",filme[j].sala);
	printf("Filme alterado com sucesso!!\n");

  }
  fclose(sl5);

menuprincipal();
}

int alter_sessao(){
	// Lendo do arquivo e gravando no array de struct
  int j, i = 0;
  char titulo[30];
  char titulo_novo[30];
  char exibicao_novo[30];
  char horario_novo[30];
  int assento_novo;
  int sala_novo;
  float valor_novo;
  
  struct sessoes sessao[30];
  
  FILE *sl6;
  sl6 = fopen("Sessao.txt", "r");
  
  
  while (!feof(sl6)) {
    fscanf(sl6, "%s",sessao[i].titulo_sessao);
	fscanf(sl6, "%s",sessao[i].horario);
	fscanf(sl6, "%s",sessao[i].exibicao_sessao);
	fscanf(sl6, "%d",&sessao[i].assentos_sessao);
	fscanf(sl6, "%d",&sessao[i].sala);
	fscanf(sl6, "%f",&sessao[i].valor);
    i++;

  }

  fclose(sl6);

  // Imprimir o struct pra conferir se gravou todo o arquivo no struct
  for (j = 0; j < i; j++) {

	printf("titulo: %s\n",sessao[j].titulo_sessao);
	printf("horario: %s\n",sessao[j].horario);
	printf("Dias de exibicao: %s\n", sessao[j].exibicao_sessao);
	printf("Numero de assentos: %d\n",sessao[j].assentos_sessao);
	printf("Sala: %d\n",sessao[j].sala);
	printf("Valor: %f\n", sessao[j].valor);
    printf("-------\n");
  }

  
  printf("\n\n");
  // Fim c�digo Andr�
  
  	printf("Insira o titulo da sala para pesquisa:\n");
	scanf("%s", titulo);


	
	
	for (j = 0; j < i; j++) {
   
   if(strcmp(sessao[j].titulo_sessao, titulo)==0){
   	
   	printf("Insira o novo nome:\n ");
   	scanf("%s", titulo_novo);
   

	printf("Insira o novo horario:\n ");
   	scanf("%s", horario_novo);

	printf("Insira os novos dias de exibicao:\n ");
   	scanf("%s", exibicao_novo);
   
	printf("Insira o novo numero de assentos:\n ");
   	scanf("%d", &assento_novo);

	printf("Insira o novo numero da sala:\n ");
   	scanf("%d", &sala_novo);

	printf("Insira o novo valor:\n ");
   	scanf("%f", &valor_novo);

	   

	strcpy(sessao[j].titulo_sessao, titulo_novo);
	strcpy(sessao[j].horario, horario_novo);
	strcpy(sessao[j].exibicao_sessao, exibicao_novo);
	sessao[j].assentos_sessao = assento_novo;
	sessao[j].sala = sala_novo;
	sessao[j].valor = valor_novo;
	
   }
   
   
  }
  
   sl6 = fopen("Sessao.txt", "w");
   
	for (j = 0; j < i; j++) {
    fprintf(sl6,"%s\n",sessao[j].titulo_sessao);
	fprintf(sl6,"%s\n",sessao[j].horario);
	fprintf(sl6,"%s\n",sessao[j].exibicao_sessao);
	fprintf(sl6,"%d\n",sessao[j].assentos_sessao);
	fprintf(sl6,"%d\n",sessao[j].sala);
	fprintf(sl6,"%f\n",sessao[j].valor);
	printf("Sessão alterada com sucesso!!\n");
  }
  fclose(sl6);

menuprincipal();
}


int delete_sala()
{
	// Lendo do arquivo e gravando no array de struct
	int j, i = 0;
	char nome[30];

	struct salas sala[30];

	FILE *sl4;
	sl4 = fopen("Sala.txt", "r");

	while (!feof(sl4))
	{
		fscanf(sl4, "%s", sala[i].nome);
		fscanf(sl4, "%d", &sala[i].assentos);
		fscanf(sl4, "%d", &sala[i].numero);
		i++;
	}

	fclose(sl4);
	// Imprimir o struct pra conferir se gravou todo o arquivo no struct
	for (j = 0; j < i; j++)
	{
		printf("Nome: %s\n", sala[j].nome);
		printf("Numero: %d\n", sala[j].assentos);
		printf("Capacidade: %d\n", sala[j].numero);
		printf("-------\n");
	}

	printf("\n\n");
	// Fim c�digo Andr�

	printf("Insira o nome da sala para apagar:\n");
	scanf("%s", nome);

	sl4 = fopen("Sala.txt", "w");

	for (j = 0; j < i; j++)
	{

		if (strcmp(sala[j].nome, nome) == 0)
		{
		}
		else
		{
			fprintf(sl4, "%s\n", sala[j].nome);
			fprintf(sl4, "%d\n", sala[j].assentos);
			fprintf(sl4, "%d", sala[j].numero);
		}
	}

	fclose(sl4);

menuprincipal();
}

int delete_filme(){

// Lendo do arquivo e gravando no array de struct
	int j, i = 0;
	char nome[30];

	struct filmes filme[30];

	FILE *sl5;
	sl5 = fopen("Filmes.txt", "r");

	while (!feof(sl5))
	{
		fscanf(sl5, "%s", filme[i].titulo_filme);
		fscanf(sl5, "%s", filme[i].exibicao_filme);
		fscanf(sl5, "%d", &filme[i].sala);
		i++;
	}

	fclose(sl5);
	// Imprimir o struct pra conferir se gravou todo o arquivo no struct
	for (j = 0; j < i; j++)
	{
		printf("Titulo: %s\n", filme[j].titulo_filme);
		printf("Dias de Exibição: %s\n", filme[j].exibicao_filme);
		printf("Sala: %d\n", filme[j].sala);
		printf("-------\n");
	}

	printf("\n\n");
	// Fim c�digo Andr�

	printf("Insira o nome do Filme para apagar:\n");
	scanf("%s", nome);

	sl5 = fopen("Filmes.txt", "w");

	for (j = 0; j < i; j++)
	{

		if (strcmp(filme[j].titulo_filme, nome) == 0)
		{
		}
		else
		{
			fprintf(sl5, "%s\n", filme[j].titulo_filme);
			fprintf(sl5, "%s\n", filme[j].exibicao_filme);
			fprintf(sl5, "%d", filme[j].sala);
		}
	}
		

	fclose(sl5);

menuprincipal();
}

int delete_sessao(){
	// Lendo do arquivo e gravando no array de struct
	int j, i = 0;
	char nome[30];

	struct sessoes sessao[30];

	FILE *sl6;
	sl6 = fopen("Sessao.txt", "r");

	while (!feof(sl6))
	{
		fscanf(sl6, "%s", sessao[i].titulo_sessao);
		fscanf(sl6, "%s", sessao[i].horario);
		fscanf(sl6, "%s", sessao[i].exibicao_sessao);
		fscanf(sl6, "%d", &sessao[i].assentos_sessao);
		fscanf(sl6, "%d", &sessao[i].sala);
		fscanf(sl6, "%f", &sessao[i].valor);
		i++;
	}


	fclose(sl6);
	// Imprimir o struct pra conferir se gravou todo o arquivo no struct
	for (j = 0; j < i; j++)
	{
		printf("Titulo: %s\n", sessao[j].titulo_sessao);
		printf("Horario: %s\n", sessao[j].horario);
		printf("Dias de Exibição: %s\n", sessao[j].exibicao_sessao);
		printf("Capacidade: %d\n", sessao[j].assentos_sessao);
		printf("Sala: %d\n", sessao[j].sala);
		printf("Valor: %f\n", sessao[j].valor);
		printf("-------\n");
	}

	printf("\n\n");
	// Fim c�digo Andr�

	printf("Insira o Titulo da Sessão para apagar:\n");
	scanf("%s", nome);

	sl6 = fopen("Sessao.txt", "w");

	for (j = 0; j < i; j++)
	{

		if (strcmp(sessao[j].titulo_sessao, nome) == 0)
		{
		}
		else
		{
			fprintf(sl6, "%s\n", sessao[j].titulo_sessao);
			fprintf(sl6, "%s\n", sessao[j].horario);
			fprintf(sl6, "%s\n", sessao[j].exibicao_sessao);
			fprintf(sl6, "%d\n", sessao[j].assentos_sessao);
			fprintf(sl6, "%d\n", sessao[j].sala);
			fprintf(sl6, "%f", sessao[j].valor);
		}
	}
		

	fclose(sl6);

menuprincipal();
}

int ticket(){

	// Lendo do arquivo e gravando no array de struct
	int j = 0, isala = 0, ifilme = 0, isessao = 0;
	char nome[30];
	char sessao_titulo[30];
	char filme_exibicao[30];
	int filme_sala;
	int numero_sala;
	float sessao_valor;
	int sessao_assento;
	char sessao_horario[30];
	char nome_sala[30];
	int ticket_sala;
	int ticket_assento;
	int vender = 0;


	struct salas sala[30];
	struct filmes filme[30];
	struct sessoes sessao[30];

	FILE *sl4;
	FILE *sl5;
	FILE *sl6;
	sl4 = fopen("Filmes.txt", "r");
	sl5 = fopen("Sala.txt", "r");
	sl6 = fopen("Sessao.txt", "r");


	while (!feof(sl4))
	{
		fscanf(sl4, "%s", filme[ifilme].titulo_filme);
		fscanf(sl4, "%s", filme[ifilme].exibicao_filme);
		fscanf(sl4, "%d", &filme[ifilme].sala);
		ifilme ++;
	}

	fclose(sl4);


		while (!feof(sl5))
	{
		fscanf(sl5, "%s", sala[isala].nome);
		fscanf(sl5, "%d", &sala[isala].assentos);
		fscanf(sl5, "%d", &sala[isala].numero);
		isala ++;
	}

	fclose(sl5);

	
	while (!feof(sl6))
	{
		fscanf(sl6, "%s", sessao[isessao].titulo_sessao);
		fscanf(sl6, "%s", sessao[isessao].horario);
		fscanf(sl6, "%s", sessao[isessao].exibicao_sessao);
		fscanf(sl6, "%d", &sessao[isessao].assentos_sessao);
		fscanf(sl6, "%d", &sessao[isessao].sala);
		fscanf(sl6, "%f", &sessao[isessao].valor);
		isessao ++;
	}

	fclose(sl6);
	

	printf("Informe o nome do filme para pesquisa:\n");
	scanf("%s", nome);
	getchar();

	printf("%s\n", nome);

	//um for para pesquisar cada elemento, ou seja, um para comparar filme com sala, outro para sala com sessão e assim por diantes

	for (j = 0; j < ifilme; j++)
	{

		if (strcmp(filme[j].titulo_filme, nome) == 0)
		{
			filme_sala = filme[j].sala;
			strcpy(sessao_titulo, filme[j].titulo_filme);
			strcpy(filme_exibicao, filme[j].exibicao_filme);
			printf("%d\n", filme_sala);
			printf("%s\n", sessao_titulo);


		}
	}
	j = 0;
//--------------------------------------------------------------------------------------------------------------------------

	for (j = 0; j < isala; j++)
	{	printf("salas\n");
		printf("%d\n",sala[j].numero );

		if ( sala[j].numero == filme_sala)
		{
			numero_sala = sala[j].numero;
			strcpy(nome_sala, sala[j].nome);

			printf("ok sala encontrada");

		}
	}
	j = 0;
// //--------------------------------------------------------------------------------------------------------------------------
	
	for (j = 0; j < isessao; j++)
	{

		if (strcmp(sessao[j].titulo_sessao, sessao_titulo) == 0)
		{	
			sessao_valor = sessao[j].valor;
			sessao_assento = sessao[j].assentos_sessao;
			strcpy(sessao_horario, sessao[j].horario);
			ticket_sala = sessao[j].sala;
			ticket_assento = sessao[j].assentos_sessao;
			

		}
	}
	printf("###______SEU TICKET___________________________\n");
	printf("|   Filme: %s             \n", sessao_titulo);
	printf("|   Dia de exibicao: %s              \n", filme_exibicao);
	printf("|   Horario: %s            \n", sessao_horario);
	printf("|   Numero da sala: %d     \n", ticket_sala);
	printf("|   Nome da Sala: %s       \n", nome_sala);
	printf("|   Seu assento: %d        \n", ticket_assento);
	printf("|   Valor: %0.2f         \n", sessao_valor);
	printf("|________________________________________________\n\n");

	printf("deseja realizar venda? 1 para sim 2 para nao\n");
	scanf("%d", &vender);
	if(vender == 1){
		printf("Venda efetuada com sucesso, ticket gerado!\n");

		ticket_assento = ticket_assento -1;

	}else if(vender == 2){
		printf("venda cancelada!!\n");
	}

menuprincipal();
}




int main(void){
	
	menuprincipal();
	
    FILE *farq;
    int i;
    char tentrada[50] = {"Teste de gravacao e leitura de dados-arquivo texto"};
    char tsaida[50], car;


if((farq = fopen("arqtexto.txt","w")) == NULL){
  printf( "Erro na abertura do arquivo");
  exit(1);
}

for (i=0; i < strlen(tentrada); i++)
{
   fputc(tentrada[i],farq);
}
fclose(farq);
farq = fopen("arqtexto.txt", "r");

if (farq == NULL) // Pode-se fazer o teste dessa forma
{
     printf("Erro na abertura do arquivo");
     exit(1);
}
printf("\n\nVou ler e mostrar o texto gravado....\n\n");
i=0;
car=fgetc(farq);
while (car!=EOF)
{
   tsaida[i]=car;
   printf("%c",tsaida[i]);
   i++;
   car =fgetc(farq);
}

fclose(farq);

}

