// Dado uma sala com N alunos, criar um algoritmo em linguagem C que faça 
// a leitura das N notas em um vetor. Após a leitura das N notas deverá 
// apresentar a média da sala.


#include <stdio.h>

int main ()
{

    int i;
    int n;
    float nota[i];
  float media;
  float soma = 0;
    printf("Digite a quantidade de alunos...: ");
    scanf("%i", &n);

    for(i=0; i<n; i++){

        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &nota[i]);
    }

  for(i=0; i<n; i++){
    soma = soma + nota[i];
    }

  media = (soma / n);
    printf("A media da sala eh %.1f", media);
}
