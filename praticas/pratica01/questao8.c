#include <stdio.h>

int main(){
  int segundo;
  int minuto;
  int hora;
  int resto;

  printf("Entre com o valor do segundo: ");
  int deu_certo = scanf("%i", &segundo);

  hora = segundo / 3600;
  resto = segundo % 3600;
  minuto = resto / 60;
  segundo = resto % 60;

  printf("%i:%i:%i\n", hora, minuto, segundo);
  return 0;

  
  


  
}