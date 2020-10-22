// Faça um programa que lê uma matriz de 3 x 3 elementos usando comandos "for", multiplica cada elemento por 5 e imprime o resultado na tela.

#include <stdio.h>

int main() {

  int matriz[3][3] = {
    {0, 1, 2},
    {4, 5, 6},
    {7, 8, 9}
  };

  for (int i = 0; i < 3; i++){
    
      for (int j = 0; j  < 3; j++) {
      printf("%d \n\n\n", matriz[i][j] * 5);
    }
  }
}