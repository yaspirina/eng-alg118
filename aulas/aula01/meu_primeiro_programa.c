#include <stdio.h>

int main() {
  float pi = 3.14;
  float raio = 0.0;

  printf("infomre o raio da roda: ");

  scanf("%f", &raio);

  float area_da_roda = pi*raio*raio;

  printf("A area da roda é: %f\n", area_da_roda);

  
  return 0;
}
