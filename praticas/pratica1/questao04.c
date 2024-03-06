#include <stdio.h>

int main(){
  float preco_inicial = 100.0f;
  float preco_final = 0.0f;
  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

  float valor_imposto_icms = ICMS * preco_inicial;
  float valor_imposto_cofins = COFINS * preco_inicial;
  float valor_imposto_pis_pasep = PIS_PASEP * preco_inicial;

  preco_final = (1+ ICMS +COFINS + PIS_PASEP) * preco_inicial;

  printf("Preco inicial = %f\n" , preco_inicial);
  printf("Valor ICMS =%f\n" , valor_imposto_icms);
  printf("Valor COFINS = %f\n" , valor_imposto_cofins);
  printf("PIS/PASEP = %f\n" , valor_imposto_pis_pasep);
  printf("preco final = %f\n" , preco_final);
  
  return 0;
}