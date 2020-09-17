#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#define N 300

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int v[N], i;
	
	// entrada de dados
	for(i=0; i<N; i++)
	{
		printf("Digite valor..: ");
		scanf("%i", &v[i]);
	}
	
	// processamento
	for(i=0; i<N; i++)
	{
		v[i] = v[i] * 2;
	}
	
	printf("\n\nDados digitados");
	// saída de dados
	for(i=0; i<N; i++)
	{
		printf("%i ", v[i]);
	}
}