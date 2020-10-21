
#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int verifyNumber(number){ 
   if(number > 0) {
    printf("O número digitado é positivo.");
  } else {
    printf("O número digitado é negativo.");
  }
  return 0;
}

int main(void) {
  int number;

    printf("Digite aqui o número: \n");
    scanf("%d", &number);

    verifyNumber(number);

}