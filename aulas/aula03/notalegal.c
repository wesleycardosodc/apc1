#include <stdio.h>

int main(){
  printf("\x1b[35m----------------------------------\n");
  printf("       N O T A    L E G A L       \n");
  printf("----------------------------------\x1b[0m\n");
  printf("\x1b[30mITEM              QTD        VALOR      \x1b[0m\n");
  printf("%14s %5i %13.2f\n" , "Banana nanica", 2, 20.00);
  printf("%10s %9i %13.2f\n" , "Uva globo", 1, 15.00);
  printf("%13s %6i %13.2f\n" , "Laranja lima", 1, 18.00);
  
  // printf("Banana nanica      2         20.00\n");
  // printf("uva globo          1         15.00\n");
  // printf("laranja lima       1         18.00\n");
  // printf("----------------------------------\n");
  // printf("TOTAL                        53.00\n");
  printf("-----------------------------------\n");
  printf("TOTAL......: %10.2f \n", 53.00);
  
  return 0;
}