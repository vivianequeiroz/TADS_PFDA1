#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale (LC_ALL, "Portuguese");

    int numbers[10], i;


    for (i = 0; i < 10; i++) { 

    printf("Digite o número real: \n");
    scanf("%i", &numbers[i]);
    }

    printf("Os números digitados foram: \n");

    for (i = 0; i < 10; i++) { 
    printf("%i \n", numbers[i]);
    }
}




/* 
Planejamento da resolução:
1 - coletar e imprimir os números;


*/


