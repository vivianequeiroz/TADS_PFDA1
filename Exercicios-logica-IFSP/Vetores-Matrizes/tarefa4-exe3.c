#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale (LC_ALL, "Portuguese");

    int numbers[4], i;


    for (i = 0; i < 4; i++) { 
    printf("Digite o número real: \n");
    scanf("%i", &numbers[i]);
    numbers[i] = numbers[i] * numbers[i];
    }



    for (i = 3; i > -1; i--) { 
    printf("%i \n", numbers[i]);
    }
}




/* 
Planejamento da resolução:
1 - coletar e imprimir os números;


*/




