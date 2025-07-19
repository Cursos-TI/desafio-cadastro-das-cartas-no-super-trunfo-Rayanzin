#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo_carta1[5], codigo_carta2[5];
    char nome_cidade1[50], nome_cidade2[50];
    unsigned long int populacao1, populacao2;
    float area_km2_1, area_km2_2;
    float pib_bilhoes1, pib_bilhoes2;
    int num_pontos_turisticos1, num_pontos_turisticos2;

    // Entrada Carta 1
    printf("--- Inserir dados da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km^2): ");
    scanf("%f", &area_km2_1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_bilhoes1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &num_pontos_turisticos1);

    // Entrada Carta 2
    printf("\n--- Inserir dados da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf("%s", nome_cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km^2): ");
    scanf("%f", &area_km2_2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib_bilhoes2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &num_pontos_turisticos2);

    // Cálculos
    float densidade1 = populacao1 / area_km2_1;
    float densidade2 = populacao2 / area_km2_2;

    float pib_per_capita1 = (pib_bilhoes1 * 1e9) / populacao1;
    float pib_per_capita2 = (pib_bilhoes2 * 1e9) / populacao2;

    float super_poder1 = populacao1 + area_km2_1 + pib_bilhoes1 + num_pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area_km2_2 + pib_bilhoes2 + num_pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Comparações
    int venceu_populacao = populacao1 > populacao2;
    int venceu_area = area_km2_1 > area_km2_2;
    int venceu_pib = pib_bilhoes1 > pib_bilhoes2;
    int venceu_turisticos = num_pontos_turisticos1 > num_pontos_turisticos2;
    int venceu_densidade = densidade1 < densidade2; // MENOR vence
    int venceu_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int venceu_super_poder = super_poder1 > super_poder2;

    // Exibição dos Resultados
    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", venceu_populacao);
    printf("Área: Carta 1 venceu (%d)\n", venceu_area);
    printf("PIB: Carta 1 venceu (%d)\n", venceu_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", venceu_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", venceu_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", venceu_pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", venceu_super_poder);

    return 0;
}
