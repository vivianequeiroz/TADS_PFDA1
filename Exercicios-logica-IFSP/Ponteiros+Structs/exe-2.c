#include <stdio.h>
// identificar os erros do exercícios 
//a 
void main() {
int x, *p;
x = 100;
p = x;
printf(“Valor de p: %i”, *p);
}

//b
(int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;
}

//c

char *a, *b;
a = "abacate";
b = "uva”;
if (a < b)
printf ("%s vem antes de %s no dicionário", a, b);
else
printf ("%s vem depois de %s no dicionário", a, b);

