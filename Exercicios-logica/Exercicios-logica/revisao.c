#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media;
	int i;
	int n;
	
	printf("Digite a quantidade de alunos...: ");
	scanf("%i", &n);
	
	for(i=0; i<n; i++)
	{
		printf("Digite a nota1: ");
		scanf("%f", &nota1);
	
		printf("Digite a nota2: ");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2)/2;
		
		printf("\n A media é %f\n\n", media);
	}
	
}