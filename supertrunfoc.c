#include <stdio.h>
int main()
{
int populacao, populacao2, pontos, pontos2;
float pib, pib2, area, area2;
char estado[3], estado2[3], cidade[20], cidade2[20];

/*Cadeia de variaveis de carta1 e carta2*/

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
/*Entrada de dados carta1*/

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
/*Entrada de dados carta2*/

printf("\n");
/*Pular linha para organizar mostruario final*/


printf("Carta 1:\n");
printf("Estado %s\n", estado);
printf("Código A01\n");
printf("Cidade %s\n", cidade);
printf("População %d\n", populacao);
printf("Área km² %.2f\n", area);
printf("PIB %.2f\n", pib);
printf("Pontos turísticos %d\n\n", pontos);
/*Mostruario carta1*/

printf("Carta 2:\n");
printf("Estado %s\n", estado2);
printf("Código B02\n");
printf("Cidade %s\n", cidade2);
printf("População %d\n", populacao2);
printf("Área km²%.2f\n", area2);
printf("PIB %.2f\n", pib2);
printf("Pontos turísticos %d\n\n", pontos2);
/*Mostruario carta2*/

return 0;

/*finalização do programa*/


}
