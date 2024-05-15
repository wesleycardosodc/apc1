#include <stdio.h>

int main() {
  int numero;
  long int fatorial = 1;
  
  printf("Calculo do fatorial (!n)\n");
  printf("Entre com um numero >= 0: ");
  int certo = scanf("%i", &numero);
  int numero_valido = numero>= 0;

  if (certo && numero_valido) {
    printf("%i! = ", numero);
    for(int i = numero; i > 1; i--) {
      fatorial = fatorial * i;
      printf("%i x ", i);
    }
    printf("1 = %li\n", fatorial);
  } else {
    printf("Numero Invalido!\n");
  }

  return 0;
}