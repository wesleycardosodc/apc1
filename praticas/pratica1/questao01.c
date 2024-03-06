/*
1. Faça um programa em C que calcule a media  final a partir da formula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 numeros reais entre 0 a 10
*/

#include <stdio.h>

int main() {
  float nota1 = 5.5f;
  float nota2 = 4.0f;

  float media = 0.4 * nota1 +0.6 * nota2;

  printf("A media é %f\n", media);

  return 0;
}