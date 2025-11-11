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

    // Cálculos carta 1
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 * 1000000000 / populacao1;

    // Carta 2
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome_da_cidade2[50] = "Campo Grande";
    unsigned long int populacao2 = 898100;
    float area2 = 8096.0;
    float pib2 = 30121.78; // bilhões
    int pontos_turisticos2 = 14;

    // Cálculos carta 2
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // Menu interativo
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");
    printf("Atributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor é melhor)\n");
    printf("6 - PIB per Capita\n\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo (1-6): ");
    scanf("%d", &opcao1);

    // Validação da primeira opção
    if (opcao1 < 1 || opcao1 > 6) {
        printf("Opção inválida! Encerrando programa.\n");
        return 0;
    }

    // Menu dinâmico (remove o primeiro atributo escolhido)
    printf("\nAgora escolha o segundo atributo (1-6), diferente do primeiro:\n");
    for (int i = 1; i <= 6; i++) {
        if (i == opcao1) continue;
        printf("%d - ", i);
        switch (i) {
            case 1: printf("População\n"); break;
            case 2: printf("Área\n"); break;
            case 3: printf("PIB\n"); break;
            case 4: printf("Pontos Turísticos\n"); break;
            case 5: printf("Densidade Demográfica (menor é melhor)\n"); break;
            case 6: printf("PIB per Capita\n"); break;
        }
    }

    printf("\nEscolha o segundo atributo: ");
    scanf("%d", &opcao2);

    // Validação da segunda opção
    if (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        printf("Opção inválida! Encerrando programa.\n");
        return 0;
    }

    // Função auxiliar de comparação via switch
    // Primeira comparação
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: valor1_carta1 = densidade_populacional1; valor1_carta2 = densidade_populacional2; break;
        case 6: valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
    }

    // Segunda comparação
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 5: valor2_carta1 = densidade_populacional1; valor2_carta2 = densidade_populacional2; break;
        case 6: valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
    }

    // Exibe os atributos e valores
    printf("\nComparando cartas:\n");
    printf("%s (Carta 1) x %s (Carta 2)\n\n", nome_da_cidade1, nome_da_cidade2);

    // Mostra valores
    printf("Primeiro atributo: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nome_da_cidade1, valor1_carta1, nome_da_cidade2, valor1_carta2);

    printf("\nSegundo atributo: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nome_da_cidade1, valor2_carta1, nome_da_cidade2, valor2_carta2);

    // Regra especial da densidade (menor é melhor)
    soma1 = ((opcao1 == 5 ? -valor1_carta1 : valor1_carta1) +
             (opcao2 == 5 ? -valor2_carta1 : valor2_carta1));
    soma2 = ((opcao1 == 5 ? -valor1_carta2 : valor1_carta2) +
             (opcao2 == 5 ? -valor2_carta2 : valor2_carta2));

    printf("\nSoma dos dois atributos:\n");
    printf("%s: %.2f\n", nome_da_cidade1, soma1);
    printf("%s: %.2f\n", nome_da_cidade2, soma2);

    // Resultado final usando operador ternário
    printf("\n=== RESULTADO FINAL ===\n");
    (soma1 > soma2) ? printf("%s venceu a rodada!\n", nome_da_cidade1) :
    (soma2 > soma1) ? printf("%s venceu a rodada!\n", nome_da_cidade2) :
    printf("Empate!\n");

    return 0;
}
