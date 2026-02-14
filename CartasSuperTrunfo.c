#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // DECLARAÇÃO DAS VARIÁVEIS PARA A CARTA 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  //DECLARAÇÃO DAS VARIÁVEIS PARA A CARTA 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;


  // Área para entrada de dados

  // ENTRADA DOS DADOS DA CARTA 1
  printf("--- CADASTRO DA CARTA 1 ---\n");
    
  printf("Digite o Estado (Uma letra de A a H): ");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta (Ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a Area (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos1);


  // ENTRADA DOS DADOS DA CARTA 2
  printf("--- CADASTRO DA CARTA 2 ---\n");
    
  printf("Digite o Estado (Uma letra de A a H): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta (Ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade2);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a Area (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos2);


  // Área para exibição dos dados da cidade

  printf("\n===================================\n");
  printf("DADOS CADASTRADOS COM SUCESSO!\n");
  printf("===================================\n\n");

  // Imprimindo a Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  // %.2f formata o número decimal para mostrar apenas 2 casas após a vírgula
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos turisticos: %d\n\n", pontos_turisticos1);

  // Imprimindo a Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

return 0;
} 
