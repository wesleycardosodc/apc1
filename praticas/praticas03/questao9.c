#include <stdio.h>

int main() {
  int numero = 1;
  int maior = 0;
  int menor = 0;
  
  while(numero != 0) {
    printf("Entre com um numero: ");
    int certo = scanf("%i", &numero);

    if (certo) {
      if (numero > maior) {
        maior = numero;
      }
      if (numero < menor) {
        menor = numero;
      }
      
    } else {
      getchar();
        printf("Numero invalido. Tente de outro.\n");
    }
  }

  printf("O maior numero foi %i e o menor foi %i\n", maior, menor);

  return 0;
}