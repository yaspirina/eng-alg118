#include <stdio.h>

int main() {
    int numero;
    int unidade;
    int dezena;
    int centena;
    int milhar;

    printf("Entre com o numero: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    numero /= 10;
    dezena = numero % 10;
    numero /= 10;
    centena = numero % 10;
    numero /= 10;
    milhar = numero;

    printf("Unidade: %d\n", unidade);
    printf("Dezena: %d\n", dezena);
    printf("Centena: %d\n", centena);
    printf("Milhar: %d\n", milhar);

    return 0;
}
