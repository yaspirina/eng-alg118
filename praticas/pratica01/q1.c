#include <stdio.h>

int main(){

  float A1, A2, media;

  


  printf("Digite a nota da A1: ");
  scanf("%f", &A1);

  printf("Digite a nota da A2: ");
  scanf("%f", &A2);



  media = (0.4 * A1) + (0.6 * A2);

  printf("A média de A1 e A2 é: %f", media);


  return 0;
  
}
