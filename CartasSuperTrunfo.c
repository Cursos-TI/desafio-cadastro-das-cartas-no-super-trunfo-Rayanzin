#include <stdio.h>

int main() {
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[50];
    int populacao1;
    float area_km2_1;
    float pib_bilhoes1;
    int num_pontos_turisticos1;

    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area_km2_2;
    float pib_bilhoes2;
    int num_pontos_turisticos2;

    printf("--- Inserir dados da Carta 1 ---\n");

    // Coleta dados da Carta 1
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km^2): ");
    scanf("%f", &area_km2_1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_bilhoes1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &num_pontos_turisticos1);

    printf("\n--- Inserir dados da Carta 2 ---\n");

    // Coleta dados da Carta 2

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km^2): ");
    scanf("%f", &area_km2_2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_bilhoes2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &num_pontos_turisticos2);

    // Exibir informações das cartas
    printf("\n--- Informacoes das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area_km2_1);
    printf("PIB: %.2f bilhoes de reais\n", pib_bilhoes1);
    printf("Numero de Pontos Turisticos: %d\n", num_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area_km2_2);
    printf("PIB: %.2f bilhoes de reais\n", pib_bilhoes2);
    printf("Numero de Pontos Turisticos: %d\n", num_pontos_turisticos2);

    return 0;
}
