#include <stdio.h>

int main () {
  int numero;

  printf("Entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
    for ( int i=1; i<=100; i++) {
      if (i % numero == 0) {
        printf("%i, ", i);
       }
     }
    printf("\n");
  } else {
    printf("Numero Invalido!\n");
  }

  return 0;
}