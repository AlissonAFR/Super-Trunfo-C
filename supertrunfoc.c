#include <stdio.h>

int main() {
    int populacao, populacao2, pontos, pontos2;
    float pib, pib2, area, area2, densidade, densidade2, pibpc, pibpc2;
    char estado[3], estado2[3], cidade[20], cidade2[20];
    unsigned long int superpoder, superpoder2;

    /* Cadeia de variaveis de carta1 e carta2 */

    printf("Insira os dados da primeira carta.\n");

    printf("Qual o estado:\n");
    scanf("%s", estado);

    printf("Qual a cidade:\n");
    scanf("%s", cidade);

    printf("Qual a população:\n");
    scanf("%d", &populacao);

    printf("Qual a area:\n");
    scanf("%f", &area);

    printf("Qual o pib:\n");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos:\n");
    scanf("%d", &pontos);
    /* Entrada de dados carta1 */

    printf("Insira os dados da segunda carta.\n");

    printf("Qual o estado:\n");
    scanf("%s", estado2);

    printf("Qual a cidade:\n");
    scanf("%s", cidade2);

    printf("Qual a população:\n");
    scanf("%d", &populacao2);

    printf("Qual a area:\n");
    scanf("%f", &area2);

    printf("Qual o pib:\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos:\n");
    scanf("%d", &pontos2);
    /* Entrada de dados carta2 */

    pibpc = pib / populacao;
    pibpc2 = pib2 / populacao2;
    densidade = (float)area / populacao;
    densidade2 = (float)area2 / populacao2;

    // Calcule como double para evitar perda de precisão
    double superpoder = (double)(populacao + area + pib + pontos + pibpc) - densidade;
    double superpoder2 = (double)(populacao2 + area2 + pib2 + pontos2 + pibpc2) - densidade;

    // Converta para unsigned long int
    superpoder = (unsigned long int) superpoder;
    superpoder2 = (unsigned long int) superpoder2;

    printf("\n");
    /* Pular linha para organizar mostruario final */

    printf("Carta 1:\n");
    printf("Estado %s\n", estado);
    printf("Código A01\n");
    printf("Cidade %s\n", cidade);
    printf("População %d\n", populacao);
    printf("Área km² %.2f\n", area);
    printf("PIB R$%.2f\n", pib);
    printf("Pontos turísticos %d\n", pontos);
    printf("Densidade populacional: km² %f\n", densidade);
    printf("PIB Percapta: R$%f\n", pibpc);
    printf("Super poder: %lu\n\n", superpoder); 

    printf("Carta 2:\n");
    printf("Estado %s\n", estado2);
    printf("Código B02\n");
    printf("Cidade %s\n", cidade2);
    printf("População %d\n", populacao2);
    printf("Área km² %.2f\n", area2);
    printf("PIB R$%.2f\n", pib2);
    printf("Pontos turísticos %d\n", pontos2);
    printf("Densidade populacional: %f km²\n", densidade2);
    printf("PIB Percapta: R$%f\n", pibpc2);
    printf("Super poder: %lu\n", superpoder2); 

    printf("Comparação de cartas:\n");
    printf("População: Carta 1 venceu: %d\n", populacao > populacao2);
    printf("Area: Carta 1 venceu: %d\n", area > area2);
    printf("PIB: Carta 1 venceu: %d\n", pib > pib2);
    printf("Pontos turisticos: Carta 1 venceu: %d\n", pontos > pontos2);
    printf("Densidade populacional: Carta 1 venceu: %d\n", densidade > densidade2);
    printf("PIB Percapta: Carta 1 venceu: %d\n", pibpc > pibpc2);
    printf("Super Poder: Carta 1 venceu: %d\n", superpoder > superpoder2);

    // Comparação de cartas
    printf("Comparação de cartas:\n");
    printf("População: Carta 1 venceu: %d\n", populacao > populacao2);
    printf("Área: Carta 1 venceu: %d\n", area > area2);
    printf("PIB: Carta 1 venceu: %d\n", pib > pib2);
    printf("Pontos turísticos: Carta 1 venceu: %d\n", pontos > pontos2);
    printf("Densidade populacional: Carta 1 venceu: %d\n", densidade > densidade2);
    printf("PIB per capita: Carta 1 venceu: %d\n", pibpc > pibpc2);
    printf("Super Poder: Carta 1 venceu: %d\n", superpoder > superpoder2);

    if (populacao > populacao2) {
        printf("A carta 1 ganhou em populacao com %d.\n", populacao);
    }else{
        printf("A carta 2 ganhou em populacao com %d.\n", populacao2);
    }
    if (area > area2) {
        printf("A carta 1 ganhou em area com %.2f M2.\n", area);
    }else{
        printf("A carta 2 ganhou em area com %.2f M2.\n", area2);
    }
     if (pib > pib2) {
        printf("A carta 1 ganhou em PIB com %.2f .\n", pib);
    }else{
        printf("A carta 2 ganhou em PIB com %.2f .\n", pib2);
    }
     if (pontos > pontos2) {
        printf("A carta 1 ganhou em pontos turisticos com %d.\n", pontos);
    }else{
        printf("A carta 2 ganhou em pontos turisticos com %d.\n", pontos2);
    }
     if (densidade < densidade2) {
        printf("A carta 1 ganhou em densidade com %f.\n", densidade);
    }else{
        printf("A carta 2 ganhou em densidade com %f.\n", densidade2);
    }
     if (pibpc > pibpc2) {
        printf("A carta 1 ganhou em PIB percapta com %f.\n", pibpc);
    }else{
        printf("A carta 2 ganhou em PIB percapta com %f.\n", pibpc2);
    }
     if (superpoder > superpoder2) {
        printf("A carta 1 ganhou em Super Poder com %lu.\n", superpoder);
    }else{
        printf("A carta 2 ganhou em Super Poder com %lu.\n", superpoder2);
    }

    /* finalização do programa */