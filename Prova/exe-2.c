#include <stdio.h>

int var1=1, var2=2;
void funcao1()

{

    int var1=100, var2=100;

    printf("\n%i - %i\n", var1, var2);

}



void funcao2()

{

    var1 = var1 + 1;

    var2 = var2 + 2;

    printf("\n%i - %i\n", var1, var2);

}



void main(void)

{

    printf("\n %i - %i \n", var1, var2); // 1 e 2

    funcao1(); // 100 e 200

    printf("\n%i - %i\n", var1, var2); //1 e 2

    funcao2(); // 2 e 4

    printf("\n%i - %i\n", var1, var2);

}
