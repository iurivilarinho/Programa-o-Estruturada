#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
//Fa�a um c�digo que gere 10 n�meros aleat�rios entre 0 e 100. Imprima em uma �nica linha, com os n�meros separados por espa�os.

	srand( (unsigned)time(NULL) );
  	int  num, i;
  	
	for(i = 0; i < 10; i++) {
		num = rand() % 100;
		printf("%i ",num);
	}
	
	}



