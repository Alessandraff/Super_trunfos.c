#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[50], codigo1[10], nome1[50];
    char estado2[50], codigo2[10], nome2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Entrada dos dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf("%s", estado1);
    
    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", nome1);
    
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf("%s", estado2);
    
    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da Carta 2: ");
    scanf("%s", nome2);
    
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}
