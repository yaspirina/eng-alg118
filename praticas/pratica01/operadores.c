#include <stdio.h>
#include <math.h>


int main(){
  int numero1;
  int numero2;
  const double PI = 3.14;

  printf("Entre com o valor do numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numero2: ");
  deu_certo = scanf("%i", &numero2);

  int resultado = numero1 + numero2;
  printf("A soma é %i\n", resultado);

  resultado = numero1 - numero2;
  printf("A subtração é %i\n", resultado);

  resultado = numero1 * numero2;
  printf("A multiplicação é %i\n", resultado);

  resultado = numero1 / numero2;
  printf("A divisão é %i\n", resultado);

  resultado = numero1 % numero2;
  printf("O resto da divisão é %i\n", resultado);

  float resultado2 = numero1 / (numero2 
  * 1.0); // conversao implicita
  printf("A divisão é %f\n", resultado2);

  resultado = numero1 % numero2;
  printf("O resto da divisão é %f\n", resultado);

  // numero1 = numero1 + 1;
  // numero1++;
  // ++numero1;

  printf("O incremento do numero1 é %i\n", numero1++);
  printf("O incremento do numero1 é %i\n", ++numero1);

  double raiz = sqrt(numero1);
  double potencia = pow(numero1, 3); // numero1 elevado a 3	
  double logaritmo_base2 = log2(numero1);
  double seno = sin(numero1 * PI/180);
  double cosseno = cos(numero1 * PI/180);
  double tangente = tan(numero1 * PI/180);
  printf("A raiz quadrada de %i é %f\n", numero1, raiz);
  printf("A potencia de %i é %f\n", numero1, potencia);
  



  
  return 0;
}
   