#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[100];
    int carta;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    
    // Variáveis para os cálculos da Carta 1
    float densidade_populacional;
    float pib_per_capita;

  // Área para entrada de dados
    printf("Qual a sua carta? (exemplo: 1 ou 10): ");
    scanf("%d", &carta);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta);
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o nome da cidade: ");
    scanf(" %99[^\n]", nome_da_cidade);
    printf("Qual a população? ");
    scanf("%d", &populacao);
    printf("Area da cidade: ");
    scanf("%f", &area);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos: ");
    scanf(" %d", &pontos_turisticos);
  
        // Área para os cálculos da Carta 1
    densidade_populacional = (float) populacao / area;
    pib_per_capita = (pib * 1000000000) / populacao; // O PIB é em bilhões, então multiplicamos por 10^9



  // Área para exibição dos dados da cidade
    printf("\n--- Super Trunfo ---\n");
    printf("Carta: %d\n", carta);
    printf("Codigo da Carta: %s\n", codigo_da_carta);
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);



    

     // Área para definição das variáveis para armazenar as propriedades das cidades 2
    char estado2[50];
    char codigo_da_carta2[50];
    char nome_da_cidade2[100];
    int carta2;
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Variáveis para os cálculos da Carta 2
    float densidade_populacional2;
    float pib_per_capita2;

  // Área para entrada de dados 2
    printf("Qual a sua carta? (exemplo: 1 ou 10): ");
    scanf("%d", &carta2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_da_carta2);
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %99[^\n]", nome_da_cidade2);
    printf("Qual a população? ");
    scanf("%d", &populacao2);
    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

     // Área para os cálculos da Carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Multiplicamos por 10^9

  

  // Área para exibição dos dados da cidade #2
    printf("\n--- Super Trunfo ---\n");
    printf("Carta: %d\n", carta2);
    printf("Codigo da Carta: %s\n", codigo_da_carta2);
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    

    return 0;


}
   