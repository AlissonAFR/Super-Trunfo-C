#include <stdio.h>
int main()
{
int populacao, populacao2, pontos, pontos2;
float pib, pib2, area, area2 ,densidade ,densidade2, pibpc ,pibpc2 ,superpoder, superpoder2;
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

pibpc = pib / populacao;
pibpc2 = pib2 / populacao2;
densidade =  (float) area / populacao ;
densidade2 = ( float) area2 / populacao2 ;
superpoder = (populacao + area + pib + pontos + pibpc) - (densidade);
superpoder2 = (populacao2 + area2 + pib2 + pontos2 + pibpc2) - (densidade);

printf("\n");
/*Pular linha para organizar mostruario final*/


printf("Carta 1:\n");
printf("Estado %s\n", estado);
printf("Código A01\n");
printf("Cidade %s\n", cidade);
printf("População %d\n", populacao);
printf("Área km² %.2f\n", area);
printf("PIB R$%.2f\n", pib);
printf("Pontos turísticos %d\n", pontos);
printf("Densidade populacional:%f\n" , densidade);
printf("PIB Percapta:R$%f\n", pibpc);
printf("Super poder:%f\n\n", superpoder2);
/*Mostruario carta1*/

printf("Carta 2:\n");
printf("Estado %s\n", estado2);
printf("Código B02\n");
printf("Cidade %s\n", cidade2);
printf("População %d\n", populacao2);
printf("Área km²%.2f\n", area2);
printf("PIB R$%.2f\n", pib2);
printf("Pontos turísticos %d\n", pontos2);
printf("Densidade populacional:%fkm²\n" ,(float) densidade2);
printf("PIB Percapta:R$%f\n", (float) pibpc2);
printf("Super poder:%f\n\n", superpoder2);
/*Mostruario carta2*/

printf("Comparação de cartas:\n");
printf("População:Carta 1 venceu:\n");
printf("Area:Carta 1 venceu:\n");
printf("PIB:Carta 1 venceu:\n");
printf("Pontos turisticos:Carta 1 venceu:\n");
printf("Densidade populacional:Carta 1 venceu:\n");
printf("PIB Percapta:Carta 1 venceu:\n");
printf("Super Poder:Carta 1 venceu:\n");


return 0;

/*finalização do programa*/


}
