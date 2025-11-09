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
    float pib_per_capita1 = pib1 * 1000000000 / populacao1; 
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

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

    // Menu interativo
    int opcao;
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparar (1-6): ");
    scanf("%d", &opcao);

    printf("\nComparando: %s (Carta 1) x %s (Carta 2)\n\n", nome_da_cidade1, nome_da_cidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nome_da_cidade1, populacao1);
            printf("%s: %lu habitantes\n", nome_da_cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome_da_cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome_da_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome_da_cidade1, area1);
            printf("%s: %.2f km²\n", nome_da_cidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome_da_cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nome_da_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", nome_da_cidade1, pib1);
            printf("%s: R$ %.2f bilhões\n", nome_da_cidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome_da_cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nome_da_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome_da_cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", nome_da_cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Resultado: %s venceu!\n", nome_da_cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Resultado: %s venceu!\n", nome_da_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome_da_cidade1, densidade_populacional1);
            printf("%s: %.2f hab/km²\n", nome_da_cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2)
                printf("Resultado: %s venceu! (menor densidade é melhor)\n", nome_da_cidade1);
            else if (densidade_populacional2 < densidade_populacional1)
                printf("Resultado: %s venceu! (menor densidade é melhor)\n", nome_da_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: R$ %.2f\n", nome_da_cidade1, pib_per_capita1);
            printf("%s: R$ %.2f\n", nome_da_cidade2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2)
                printf("Resultado: %s venceu!\n", nome_da_cidade1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("Resultado: %s venceu!\n", nome_da_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
            break;
    }

    return 0;
}
