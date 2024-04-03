#include <stdio.h>
#include <math.h>

int main(){
  int numero1;
  const double PI = 3.1416;
 
  printf("Entre com o numero menor ou igual a 45 para calcular a altura do aviao: ");
  int deu_certo = scanf("%i", &numero1);

  double raio = numero1 * (PI / 180);
  double altura = sin(raio);
  double distancia = altura * altura + 2 * 6378150 * cos(raio);

  printf("A altura do aviao é de %f\n", altura);

  return 0;
}