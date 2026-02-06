#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1 inclusão de variáveis
   char estado1;
   char codigo1[6];
   char cidade1[60];
   int populacao1;
   float area1;
   float pib1;
   int turismo1;
   
   // carta2
   char estado2;
   char codigo2[6];
   char cidade2[60];
   int populacao2;
   float area2;
   float pib2;
   int turismo2;


  // Área para entrada de dados

  // Entrada de dados carta 1

  printf("\nCadastro da carta 1 \n");
  printf("\nUma letra de A a H:");
  scanf("%c", &estado1);
  printf("Código da carta de 01 a 04 (ex:A01, B03):");
  scanf("%s", &codigo1);
  printf("Nome da cidade:");
  scanf("%s", &cidade1);
  printf("População:");
  scanf("%d", &populacao1);
  printf("Área em km²:");
  scanf("%f", &area1);
  printf("Pib (Em bilhões de reais):");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos:");
  scanf("%d", &turismo1);

  // Entrada de dados carta 2

  printf("\nCadastro da carta 2\n");
  printf("\nUma letra de A a H:");
  scanf(" %c", &estado2);
  printf("Código da carta de 01 a 04 (ex:A01, B03):");
  scanf("%s", &codigo2);
  printf("Nome da cidade:");
  scanf("%s", &cidade2);
  printf("População:");
  scanf("%d", &populacao2);
  printf("Área em km²:");
  scanf("%f", &area2);
  printf("Pib (Em bilhões de reais):");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos:");
  scanf("%d", &turismo2);

  // Área para exibição dos dados da cidade
  /*Foi incluido (\n) no inicio de algumas varíaveis para garantir um bom espaçamento
  do texto de forma que fique mais facil de entender*/

  // Exibição de cartas cadastradas

  printf("\nCartas Cadastradas \n");

  printf("\nCarta 1 \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área em Km²: %2.f \n", area1);
  printf("Pib (Em bilhões de reais): %2.f \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", turismo1);


  printf("\nCarta 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área em Km² %2.f \n", area2);
  printf("Pib (Em bilhões de reais): %2.f \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", turismo2);

return 0;
} 
