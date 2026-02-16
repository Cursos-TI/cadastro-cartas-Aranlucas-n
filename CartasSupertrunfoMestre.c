#include <stdio.h>

// Desafio Super Trunfo Aventureiro

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1 inclusão de variáveis
  char estado1, codigo1[6], cidade1[60];
  unsigned long int populacao1;
  int turismo1;
  float area1, pib1, densidade1, pibpercapita1, superpoder1;
   
   // carta2
  char estado2, codigo2[6], cidade2[60];
  unsigned long int populacao2;
  int turismo2;
  float area2, pib2, densidade2, pibpercapita2, superpoder2;


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
  scanf(" %lu", &populacao1);
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
  scanf(" %lu", &populacao2);
  printf("Área em km²:");
  scanf(" %f", &area2);
  printf("Pib (Em bilhões de reais):");
  scanf(" %f", &pib2);
  printf("Número de Pontos Turísticos:");
  scanf(" %d", &turismo2);

  // Abaixo foi feita as operações matemáticas
  // Multiplicado por 1 bilhão para facilitar no calculo e na leitura das cartas.

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
  printf("População: %lu \n", populacao1);
  printf("Área: %.2f " "Km²\n", area1);
  printf("Pib: %.2f " "Bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d \n", turismo1);
  printf("Densidade Populacional: %.2f " "hab/km²\n", densidade1);
  printf("PIB per capita: %.2f " "reais\n", pibpercapita1); 


  printf("\nCarta 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("População: %lu \n", populacao2);
  printf("Área: %.2f " "Km²\n", area2);
  printf("Pib: %.2f " "Bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d \n", turismo2);
  printf("Densidade Populacional: %.2f " "hab/km²\n", densidade2);
  printf("PIB per capita: %.2f " "reais\n", pibpercapita2); 


// Calculo e comparação das cartas
// Definido variavel superpoder para armazenar resultado das somas
// Definido de forme explicita (float) na variavel turismo, pois a mesma é do tipo int
// Definido de forme explicita (float) na variavel populacao, pois a mesma é do tipo unsigned long int


superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + pibpercapita1 + 1.0/densidade1;

superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pibpercapita2 + 1.0/densidade2;

//Resultado do super poder de cada carta
printf("\nSuper poder carta 1: %.2f\n", superpoder1);
printf("\nSuper poder carta 2: %.2f\n", superpoder2);

//Descrição dos resultados
printf("\nResultado = (1) Carta 1 vence, resultado = (0) Carta 2 vence \n \n");
printf("\n***Comparação de Cartas***\n");


//

printf("\nPopulação:(%d)\n", populacao1 > populacao2);
printf("Área:(%d)\n", area1 > area2);
printf("PIB:(%d)\n", pib1 > pib2);
printf("Pontos Turisticos:(%d)\n", turismo1 > turismo2);
printf("Densidade Populacional:(%d)\n", densidade1 < densidade2);
printf("Pib Per capita:(%d)\n", pibpercapita1 > pibpercapita2);
printf("Super poder:(%d) \n", superpoder1 > superpoder2);




return 0;
} 