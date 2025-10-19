#include <stdio.h>
#include <string.h> // Adicionado para usar a função strlen

// Função para calcular o Super Poder
float calcularSuperPoder(int populacao, float area, float pib, int pontos_turisticos, float pib_per_capita, float densidade_populacional) {
    float inverso_densidade_populacional = 0.0;
    if (densidade_populacional > 0) {
        inverso_densidade_populacional = 1.0 / densidade_populacional;
    }
    return (float)populacao + area + (pib * 1000000000) + pontos_turisticos + pib_per_capita + inverso_densidade_populacional;
}

// Limpa o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // --- Variáveis para a Carta 1 ---
    char estado_1[50];
    char codigo_da_carta_1[50];
    char nome_da_cidade_1[100];
    int carta_1;
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    float super_poder_1;

    // --- Variáveis para a Carta 2 ---
    char estado_2[50];
    char codigo_da_carta_2[50];
    char nome_da_cidade_2[100];
    int carta_2;
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_per_capita_2;
    float super_poder_2;

    // --- ENTRADA DE DADOS - CARTA 1 ---
    printf("--- ENTRADA DE DADOS CARTA 1 ---\n");
    printf("Qual a sua carta? (exemplo: 1 ou 10): ");
    scanf("%d", &carta_1);
    limpar_buffer(); // Limpa o buffer após a leitura do número
    
    printf("Digite o codigo da carta: ");
    fgets(codigo_da_carta_1, sizeof(codigo_da_carta_1), stdin);
    codigo_da_carta_1[strcspn(codigo_da_carta_1, "\n")] = 0; // Remove o \n

    printf("Digite o estado: ");
    fgets(estado_1, sizeof(estado_1), stdin);
    estado_1[strcspn(estado_1, "\n")] = 0; // Remove o \n

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade_1, sizeof(nome_da_cidade_1), stdin);
    nome_da_cidade_1[strcspn(nome_da_cidade_1, "\n")] = 0; // Remove o \n
    
    printf("Qual a populacao? ");
    scanf("%d", &populacao_1);
    printf("Area da cidade: ");
    scanf("%f", &area_1);
    printf("Qual o PIB da cidade (em bilhoes)? ");
    scanf("%f", &pib_1);
    printf("Quantos pontos turisticos: ");
    scanf(" %d", &pontos_turisticos_1);

    // --- CÁLCULOS - CARTA 1 ---
    densidade_populacional_1 = (float)populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    super_poder_1 = calcularSuperPoder(populacao_1, area_1, pib_1, pontos_turisticos_1, pib_per_capita_1, densidade_populacional_1);

    // --- EXIBIÇÃO DE DADOS - CARTA 1 ---
    printf("\n--- Super Trunfo - CARTA 1 ---\n");
    printf("Carta: %d\n", carta_1);
    printf("Codigo da Carta: %s\n", codigo_da_carta_1);
    printf("Estado: %s\n", estado_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhoes de reais\n", pib_1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
    printf("Super Poder: %.2f\n", super_poder_1);

    // --- ENTRADA DE DADOS - CARTA 2 ---
    printf("\n--- ENTRADA DE DADOS CARTA 2 ---\n");
    printf("Qual a sua carta? (exemplo: 1 ou 10): ");
    scanf("%d", &carta_2);
    limpar_buffer(); // Limpa o buffer após a leitura do número
    
    printf("Digite o codigo da carta: ");
    fgets(codigo_da_carta_2, sizeof(codigo_da_carta_2), stdin);
    codigo_da_carta_2[strcspn(codigo_da_carta_2, "\n")] = 0; // Remove o \n

    printf("Digite o estado: ");
    fgets(estado_2, sizeof(estado_2), stdin);
    estado_2[strcspn(estado_2, "\n")] = 0; // Remove o \n

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade_2, sizeof(nome_da_cidade_2), stdin);
    nome_da_cidade_2[strcspn(nome_da_cidade_2, "\n")] = 0; // Remove o \n
    
    printf("Qual a populacao? ");
    scanf("%d", &populacao_2);
    printf("Area da cidade: ");
    scanf("%f", &area_2);
    printf("Qual o PIB da cidade (em bilhoes)? ");
    scanf("%f", &pib_2);
    printf("Quantos pontos turisticos: ");
    scanf(" %d", &pontos_turisticos_2);

    // --- CÁLCULOS - CARTA 2 ---
    densidade_populacional_2 = (float)populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;
    super_poder_2 = calcularSuperPoder(populacao_2, area_2, pib_2, pontos_turisticos_2, pib_per_capita_2, densidade_populacional_2);

    // --- EXIBIÇÃO DE DADOS - CARTA 2 ---
    printf("\n--- Super Trunfo - CARTA 2 ---\n");
    printf("Carta: %d\n", carta_2);
    printf("Codigo da Carta: %s\n", codigo_da_carta_2);
    printf("Estado: %s\n", estado_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhoes de reais\n", pib_2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
    printf("Super Poder: %.2f\n", super_poder_2);

    // --- COMPARAÇÃO DE CARTAS ---
    printf("\nComparacao de Cartas:\n");

    // Comparar População
    printf("Populacao: ");
    if (populacao_1 > populacao_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparar Área
    printf("Area: ");
    if (area_1 > area_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparar PIB
    printf("PIB: ");
    if (pib_1 > pib_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparar Pontos Turísticos
    printf("Pontos Turisticos: ");
    if (pontos_turisticos_1 > pontos_turisticos_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparar Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: ");
    if (densidade_populacional_1 < densidade_populacional_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparar PIB per Capita
    printf("PIB per Capita: ");
    if (pib_per_capita_1 > pib_per_capita_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparar Super Poder
    printf("Super Poder: ");
    if (super_poder_1 > super_poder_2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}
    