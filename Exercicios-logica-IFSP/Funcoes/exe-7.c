#include <stdio.h>

int areaCalc(height, width, area) {
  area = height * width;
  printf("A area calculada da parede é: %i \n", area);
  return 0;
}

int main(void) {
  int height, width, area;

  printf("Digite aqui a altura: \n");
  scanf("%i", &height);

  printf("Digite aqui a largura: \n");
  scanf("%i", &width);

  areaCalc(height, width, area);
}