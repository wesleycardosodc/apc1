#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  do {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) opcao = 0;
    while (getchar() != '\n')
      ;
    switch (opcao) {
    case 1: {
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n');
      printf("Ola %s\n", nome);
      printf("Presiione ENTER p/ iniciar");
      getchar();
      break; 
    }
    case 2: { 
      deu_certo = system("clear");
      printf("Resultado\n");
      printf("1o lugar: Jogador 1 - 1000\n");
      printf("2o lugar: Jogador 1 - 900\n");
      printf("3o lugar: Jogador 1 - 700\n");
      printf("4o lugar: Jogador 1 - 500\n");
      printf("5o lugar: Jogador 1 - 250\n");
      printf("Presiione ENTER p/ voltar");
      getchar();
      break;
     }
    case 3:  break;
    case 4:  break;
    default:
      printf("Opcao invalida! Pressione ENTER p/ continuar");
      getchar();
    }
  } while (opcao != 4);

  return 0;
}
