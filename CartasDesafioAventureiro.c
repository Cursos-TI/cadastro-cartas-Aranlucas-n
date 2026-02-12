#include <stdio.h>

// Desafio Super Trunfo Aventureiro

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1 inclusão de variáveis
  char estado1, codigo1[6], cidade1[60];
  int populacao1, turismo1;
  float area1, pib1, densidade1, pibpercapita1;
   
   // carta2
  char estado2, codigo2[6], cidade2[60];
  int populacao2, turismo2;
  float area2, pib2, densidade2, pibpercapita2;


  // Área para entrada de dados

  // Entrada de dados carta 1

  printf("\nCadastro da carta 1 \n");
  printf("\nUma letra de A a H:");
  scanf(" %c", &estado1);
  printf("Código da carta de 01 a 04 (ex:A01, B03):");
  scanf(" %s", codigo1);
  printf("Nome da cidade:");
  scanf(" %s", cidade1);
  printf("População:");
  scanf(" %d", &populacao1);
  printf("Área em km²:");
  scanf(" %f", &area1);
  printf("Pib (Em bilhões de reais):");
  scanf(" %f", &pib1);
  printf("Número de Pontos Turísticos:");
  scanf(" %d", &turismo1);

  // Entrada de dados carta 2

  printf("\nCadastro da carta 2\n");
  printf("\nUma letra de A a H:");
  scanf(" %c", &estado2);
  printf("Código da carta de 01 a 04 (ex:A01, B03):");
  scanf(" %s", codigo2);
  printf("Nome da cidade:");
  scanf(" %s", cidade2);
  printf("População:");
  scanf(" %d", &populacao2);
  printf("Área em km²:");
  scanf(" %f", &area2);
  printf("Pib (Em bilhões de reais):");
  scanf(" %f", &pib2);
  printf("Número de Pontos Turísticos:");
  scanf(" %d", &turismo2);

  // Abaixo foi feita as operações matemáticas

  densidade1 = populacao1 / area1; 
  pibpercapita1 = (pib1 * 1000000000) / populacao1; 

  densidade2 = populacao2 / area2; 
  pibpercapita2 = (pib2 * 1000000000) / populacao2; 

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
  printf("Área em Km²: %.2f " "Km²\n", area1);
  printf("Pib (Em bilhões de reais): %.2f " "Bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d \n", turismo1);
  printf("Densidade Populacional: %.2f " "hab/km²\n", densidade1);
  printf("PIB per capita: %.2f " "reais\n", pibpercapita1); 


  printf("\nCarta 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área em Km² %.2f " "Km²\n", area2);
  printf("Pib (Em bilhões de reais): %.2f " "Bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d \n", turismo2);
  printf("Densidade Populacional: %.2f " "hab/km²\n", densidade2);
  printf("PIB per capita: %.2f " "reais\n", pibpercapita2); 

return 0;
} 
