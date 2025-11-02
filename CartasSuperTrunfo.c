#include <stdio.h>
 int main(){

   // essa é a estrutura basica do codigo, onde sera mostrado as cartas de super trunfo//
    char estado1;
    char codigo1[20];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeros_de_pontos_Turisticos1;

    //o calculo do pib per capita e da densidade populacional//
     pib1 / populacao1;
    float pib_per_capoita1;
     populacao1 / area1;
    float densidade_populacional;

   // dessa forma sera mostrado os dados da carta 1//
    printf("Carta 1: \n");
    printf("Estado: A\n", estado1);
    printf("Codigo: A01\n", codigo1);
    printf("Nome da cidade: Cuiabá\n", nome_da_cidade1);
    printf("população; 650.912\n", populacao1);
    printf("Área: 3.538km²\n", area1);
    printf("PIB: R$ 47.700,88 bilhões\n", pib1);
    printf("Numeros de Pontos Turisticos: 15\n", numeros_de_pontos_Turisticos);
    printf("Pib per capita: R$ %.2f \n"), pib_per_capoita1;
    printf("Densidade populacional: %.2f hab/km²\n\n", densidade_populacional1);

   // Essa é a segunda estrutura basica do codigo, onde sera mostrado os dados da carta 2//
    char estado2;
    char codigo2[20];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeros_de_pontos_Turisticos2;

    //o calculo do pib per capita e da densidade populacional//
     pib2 / populacao2;
    float pib_per_capoita2;
      populacao2 / area2;
    float densidade_populacional2;

   // E essa é a sseugunda carta que sera mostrada//
    printf("Carta : 2 \n");
    printf("Estado: B\n", estado2);
    printf("Codigo: B02\n", codigo2);
    printf("Nome da cidade: Campo Grade\n", nome_da_cidade2);
    printf("população; 898.100\n", populacao2);
    printf("Área: 8.096km²\n", area2);
    printf("PIB: R$ 30.121,78 bilhões\n", pib2);
    printf("Numeros de Pontos Turisticos: 14\n", numeros_de_pontos_Turisticos2);
    printf("Pib per capita: R$ %.2f \n", pib_per_capoita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);

    // agora vamos comparar as duas cartas ultilizando o if e o else//
    // primeiro vamos comparar o pib per capita//
    if (pib_per_capoita1 > pib_per_capoita2) {
        printf("A carta 1 tem o maior PIB per cspita. \n");
    } else {
        printf("A carta 2 tem o maior PIB per capita. \n");

// agora vamos comparar a densidade populacional//
        if (densidade_populacional > densidade_populacional2) {
            printf("A carta 1 tem a maior densidade populacional. \n");
        } else {
            printf("A carta 2 tem a maior densidade populacional. \n");
        }
        return 0;
    }
 }