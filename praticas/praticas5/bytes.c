#include <stdio.h>

int main(){
  int numero1;
  const int GIGABYTE = 1024 * 1024 * 1024;

  printf("Entre com o tamanho do arquivo em gigabytes: ");
  int deu_certo = scanf("%i", &numero1);

  int bytes = numero1 * GIGABYTE;
  
  printf("O tamanho do arquivo em %i bytes\n", bytes);
  

  return 0;
}