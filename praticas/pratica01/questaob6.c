#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, delta, x1, x2;
  
  printf("Digite o coficiente a da equação de segundo grau: ");
  scanf("%f", &a);
  printf("Digite o coficiente b da equação de segundo grau: ");
  scanf("%f", &b);
  printf("Digite o coficiente c da equação de segundo grau: ");
  scanf("%f", &c);
  

  delta = b*b - 4*a*c;
  
  if(delta < 0) {
    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);
    printf("As raízes da equação são: %f e %f\n", x1, x2);
    printf("A equação não possui raízes reais.\n");
    
  } else if (delta == 0){
    x1 = -b / (2*a);
    printf("A raiz da equação é: %f\n", x1);
    
  }else {
    float parteReal = -b / (2*a);
    float parteImaginaria = sqrt(-delta) / (2*a);
    printf("As raízes são complexas: %2f + %2fi e %2f - %2fi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);

    
    
  }

  return 0;
}