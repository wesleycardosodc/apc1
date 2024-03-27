#include <stdio.h>

int main(){
  const int HORA_EM_SEGUNDOS = 3600;
  const int MINUTO_EM_SEGUNDOS = 60;
  int segundos;
  
  printf("Entre com o tempo em segundos: ");
  int deu_certo = scanf("%i", &segundos);
  int hora = segundos / HORA_EM_SEGUNDOS;
  int resto = segundos % HORA_EM_SEGUNDOS;
  
  printf("Hora: %i\n", hora);

  int minutos = resto / MINUTO_EM_SEGUNDOS;
  
  printf("Minutos: %i\n", minutos);
  
  
  return 0;
}