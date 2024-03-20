#include <stdio.h>

int main(){
  float PI = 3.14;
  float raio = 7.6;

  printf("Informe o valor da area da pizza: ");
  scanf("%f", &raio);

  printf("O valor da area da pizza é de %f\n", PI * raio * raio);

  return 0;
}