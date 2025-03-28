int main() {
    // Declaração das variáveis
    char estado1[50], codigo1[10], nome1[50];
    char estado2[50], codigo2[10], nome2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    
    // Entrada dos dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf("%s", estado1);
    
    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade da Carta 1: ");
    scanf("%s", nome1);
    
    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);
    
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
    scanf("%d", &populacao2);
    
    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;  // Convertendo PIB para reais
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
