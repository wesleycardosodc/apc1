#include <stdio.h>

int main () {
  int numero;

  printf("Entre com um numero de 1 a 10: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo && numero >0 && numero <= 11) {
    printf("A tabuada de %i\n", numero);
    for (int i = 1; i <= 10; i++)
      printf("%i x %i = %i\n", numero, i, numero * i);
  }

  return 0;
}