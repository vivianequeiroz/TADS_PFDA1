// Escreva um programa em Linguagem C/C++ que peça ao usuário que digite um número (entre 1 e 12) no qual representa um dos meses do ano. O programa deverá imprimir na tela o correspondente por extenso referente ao mês. Por exemplo: 3 – março | 9 - setembro. Obrigatório a utilização da estrutura switch..case.


#include <stdio.h>

int main () {

    int mes;

    printf("Digite um número que corresponda a um mês do ano: ");
    scanf("%d", &mes);

    switch (mes){

        case 1:
        printf("1 - Janeiro");
        break;

        case 2:
        printf("2 - Fevereiro");
        break;

        case 3:
        printf("3 - Março");
        break;
    
        case 4:
        printf("4 - Abril");
        break;

        case 5:
        printf("5 - Maio");
        break;

        case 6:
        printf("6 - Junho");
        break;

        case 7:
        printf("7 - Julho");
        break;

        case 8:
        printf("8 - Agosto");
        break;

        case 9:
        printf("9 - Setembro");
        break;

        case 10:
        printf("10 - Outubro");
        break;

        case 11:
        printf("11 - Novembro");
        break;

        case 12:
        printf("12 - Dezembro");
        break;

    }
}