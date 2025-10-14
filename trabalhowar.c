#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

  //programa: Cadastro de territorio
  //Objetvo do codigo demostra o uso de struct em c para armazena dados 


  //Definição da estreutura de territorio, armazenar informações básicas
  //nome, cor do exército e quantidade de tropas

struct Territorio {
  char nome[30];
  char cor[10];
  int tropas;
};

int main() {
  struct Territorio Territorio[5]; //Vetor para armazenar os 5 Territorios
  int i;
  
  printf("===SISTEMA DE CADASTRO DE TERRITÓRIOS===\n");

  //Cadastro dos 5 territórios

  for (i = 0; i < 5; i++){
    printf("Cadastro do %dº território:\n", i + 1);

    // Leitura do nome
    printf("Digite o nome do território:");
    scanf("%s", Territorio[i].nome);

    // Leitura da cor do exército
    printf("Digite a cor do exército:");
    scanf("%s", Territorio[i].cor);

    // Leitura da quantidade de tropas
    printf("Digite o número de tropas:");
    scanf("%d", &Territorio[i].tropas);

    printf("\n");
  }
  
  //Exibição dos dados cadastrados
  printf("===DADOS DOS TERRRITÓRIOS CADASTRADOS===\n");

  for ( i = 0; i < 5; i++){
    printf("Território %d:\n", i + 1);
    printf("Nome: %s\n", Territorio[i].nome);
    printf("Cor do Exército: %s\n", Territorio[i].cor);
    printf("Tropas: %d\n", Territorio[i].tropas);
    printf("---------------------------------------\n");
  }
  
  printf("Fim do Programa.\n");

  return 0;
}