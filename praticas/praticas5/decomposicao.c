#include <stdio.h>

int main(){
  int numero1;

  printf("Entre com o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  int unidade = numero1 % 10;
  int dezena = (numero1 / 10) % 10;
  int centena = (numero1 / 100) % 10;
  int milhar = (numero1 / 1000) % 10;

  printf("Unidades: %i\n", unidade);
  printf("Dezenas: %i\n", dezena);
  printf("Centenas: %i\n", centena);
  printf("Milhares: %i\n", milhar);
  

  return 0;
}