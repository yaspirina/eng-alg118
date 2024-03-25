#include <stdio.h>
#include <math.h>

int main(){
  double angulo, distancia, altura;
  double PI = 3.14;
  printf("Digite o angulo de inclinação do avião (em graus, menor ou igual a 45 graus): ");
  scanf("%lf", &angulo);
  

  printf("Digite a distancia do avião até o chão (em metros): ");
  scanf("%lf", &distancia);

  altura = sin(angulo * (PI/180)) * distancia;
  printf("A altura do avião é: %2f metros\n", altura);





  
  return 0;
  



  
}