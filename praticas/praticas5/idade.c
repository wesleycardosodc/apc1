#include <stdio.h>

int main() {
  int idade;
  const int ANO_EM_MESES = 12;
  const int MES_EM_DIAS = 30;

  printf("Entre com a idade: ");
  int deu_certo = scanf("%i", &idade);

  int meses = idade * ANO_EM_MESES;
  int dias = meses * MES_EM_DIAS;

  printf("A idade em meses é %i\n", meses);
  printf("A idade em dias é %i\n", dias);

  return 0;
}