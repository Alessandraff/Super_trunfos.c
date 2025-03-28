#include <stdio.h>

// Definição da struct deve vir antes do uso
struct Carta {
    char estado;
    char codigo[10];
    char cidade[100];
    int populacao;
    float area;
    float pid;
    int pontosTuristicos;
};

// Função para ler os dados da struct Carta
void lerCarta(struct Carta *c) {
    printf("Digite o estado (uma letra): ");
    scanf(" %c", &c->estado); // O espaço antes de %c evita problemas com caracteres residuais

    printf("Digite o código: ");
    scanf("%s", c->codigo);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", c->cidade); // Para capturar espaços corretamente

    printf("Digite a população: ");
    scanf("%d", &c->populacao);

    printf("Digite a área: ");
    scanf("%f", &c->area);

    printf("Digite o PIB: ");
    scanf("%f", &c->pid);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);
}

int main() {
    struct Carta carta1, carta2; // Agora 'Carta' está completamente definido antes do uso

    printf("Preencha os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("Preencha os dados da segunda carta:\n");
    lerCarta(&carta2);

    // Exibir os dados para conferir
    printf("\n--- Informações da Primeira Carta ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pid);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n--- Informações da Segunda Carta ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pid);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

