#include <stdio.h>

int main(){
  int temperatura;
  int temperatura_em_celcius;
  int temperatura_em_fahrenheit;

  printf("Entre com a temperatura em graus Celsius: ");
  int deu_certo = scanf("%i", &temperatura);

  temperatura_em_fahrenheit = (temperatura * 9/5) + 32;
  printf("A temperatura em fahrenheit é %i\n", temperatura_em_fahrenheit);

  return 0;
  




  
}