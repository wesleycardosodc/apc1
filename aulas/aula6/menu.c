#include <stdio.h>

int main() {
  char opçao;

  printf("MENU PRINCIPAL\n")
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - Ligaçoes Feitas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opçao => ");
  int leu_certo = scanf("%c", &opçao);
  
  switch(opcao){
    case '1': printf("Seu saldo e de 10.00\n"); break;
    case '2': {
      float valor;
     
      printf("Entre com o valor da recarga: ");
      leu_certo = scanf("%f", &valor);
      break;
    }
    case '3': printf("Voce nao tem recados\n"); break;
    case '4':
    printf("6199999999\n");
    printf("6188888888\n");
    break;
    case '0': printf("Ate logo!\n"); break;
    default: printf("Opçao invalida! tente novamente.\n");
  }

  return 0;
}