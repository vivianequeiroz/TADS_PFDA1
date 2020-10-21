#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int fatorialCalc(number) {
  int factorial;

  factorial = 1;

  for(int i=number; i>0; i--){
    factorial = factorial * i;
  }

  printf("O fatorial de %i é igual a %i", number, factorial);
  return 0;
}

int main(void) {
  int number;

  printf("Digite aqui o número: \n");
  scanf("%i", &number);

  
  fatorialCalc(number);
}