#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[20] = "A01";
    char nome_da_cidade1[50] = "Cuiaba";
    unsigned long int populacao1 = 650912;
    float area1 = 3538.0;
    float pib1 = 47700.88; // bilhões
    int pontos_turisticos1 = 15;

    // Cálculos da carta 1
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 * 1000000000 / populacao1; // convertendo para reais por pessoa
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Exibir carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Super Poder: %.2f\n\n", super_poder1);

    // Carta 2
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome_da_cidade2[50] = "Campo Grande";
    unsigned long int populacao2 = 898100;
    float area2 = 8096.0;
    float pib2 = 30121.78; // bilhões
    int pontos_turisticos2 = 14;

    // Cálculos da carta 2
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibir carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    // Comparações detalhadas
    printf("Comparação de Cartas:\n\n");

    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);

    // Comparações com if else
    printf("\nComparações Detalhadas:\n");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu \n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu \n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu \n");
    } else {
        printf("PIB per Capita: Carta 2 venceu \n");
    }

    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu \n");
    } else {
        printf("Super Poder: Carta 2 venceu \n");
    }
    return 0;
}
 