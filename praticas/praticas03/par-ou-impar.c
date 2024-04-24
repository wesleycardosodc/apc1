#include <stdio.h>

int main(){
  int numero1;

  printf("Entre com o número inteiro: ");
  int leu_certo = scanf("%d", &numero1);

  if (leu_certo){
  int numero1_eh_divisivel_por_2 = numero1 % 2 == 0;

  if (numero1_eh_divisivel_por_2){
    printf("O numero %i eh par\n", numero1);
  }else{
    printf("O numero %i eh impar\n", numero1);
  }
} else {
    printf("Número invalido! Tente novamente.\n");
}
  return 0;
}