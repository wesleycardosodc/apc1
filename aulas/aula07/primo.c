#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
    int qtd_divisores = 0;
    for(int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        qtd_divisores++;
      }
    }
    if (qtd_divisores == 2) {
      printf("O numero %i e primo!\n", numero);
  } else{
    printf("O numero %i nao e primo!\n", numero);
    }
  } else {
    printf("Numero Invalido!\n");
  }

  return 0;
}