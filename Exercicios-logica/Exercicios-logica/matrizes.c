#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#define LINHA 
#define COLUNA 
int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	float alunos[LINHA][COLUNA];	// linha - Coluna
	int i;	// controla as linhas
	int j;	// controla as colunas
	
	// leitura dos dados
	for(i=0; i<LINHA; i++)		// controla as linhas
	{
		for(j=0; j<COLUNA; j++)		// controlando as colunas
		{
			printf("Digite a nota..: ");
			scanf("%f", &alunos[i][j]);
		}	
		
	}
}