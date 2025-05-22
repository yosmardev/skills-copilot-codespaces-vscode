#include <stdio.h>

int main () {

unsigned long int nCarta, nPontosTuristicos, populacao;
char estado [10];
char nomeCidade [50];
char codigo[10];
float areaKm;
float pib;
float dspopulacional;
float pibcapita;
float superpoder;

unsigned long int nCarta2, nPontosTuristicos2, populacao2;
char estado2[10];
char nomeCidade2 [50];
char codigo2[10];
float areaKm2;
float pib2;
float dspopulacional2;
float pibcapita2;
float superpoder2;


printf ("Carta 1: \n");

printf ("Digite o Estado da carta (A-H): \n");
scanf ("%s", &estado);

printf ("Digite o código da carta(ex:A01):\n ");
scanf ("%s", &codigo);

printf ("Digite o nome da cidade:\n ");
scanf ("%s", &nomeCidade);

printf ("Digite qual o tamanho da população:\n");
scanf ("%lu",  &populacao);

printf ("Digite a área em km² dessa cidade:\n ");
scanf("%f", &areaKm);

printf ("Digite o PIB dessa cidade:\n ");
scanf("%f", &pib);

printf ("Digite o número de pontos turísticos da cidade:\n ");
scanf ("%d", &nPontosTuristicos);

dspopulacional =(float) populacao / areaKm;
pibcapita = (pib * 10000.0) / populacao;

superpoder = (float)populacao + areaKm + pib + (float)nPontosTuristicos + pibcapita + (1.0f / dspopulacional);

printf("Carta 1 \n");
printf("Estado: %s\n", estado);
printf("Código: %s%s\n", estado,codigo);
printf("Nome da Cidade: %s\n",nomeCidade);
printf("População: %d\n", populacao);
printf("Área: %.2f km²\n", areaKm);
printf("PIB: %.2f bilhões de reais\n", pib);
printf ("Número de Pontos Turísticos: %d\n", nPontosTuristicos);
printf("Densidade populacional: %f hab/km²\n", dspopulacional);
printf("PIB per Capita: %.2f reais\n", pibcapita);
printf("Super poder: %.2f\n", superpoder);


printf ("---------------------------------------------------------------------\n");

printf ("Carta 2: \n");

printf ("Digite o Estado da carta (A-H):\n ");
scanf ("%s", &estado2);

printf ("Digite o código da carta(ex:A01):\n ");
scanf ("%s", &codigo2);

printf("Digite o nome da cidade:\n");
scanf("%s", &nomeCidade2);
    
printf ("Digite qual o tamanho da população:\n ");
scanf ("%lu", &populacao2);

printf ("Digite a área em km² dessa cidade:\n ");
scanf ("%f", &areaKm2);

printf ("Digite o PIB dessa cidade:\n ");
scanf("%f", &pib2);

printf ("Digite o número de pontos turísticos da cidade:\n ");
scanf ("%d", &nPontosTuristicos2);

dspopulacional2 =(float) populacao2 / areaKm2;
pibcapita2 = (pib2 * 10000.0) / populacao2;

superpoder2 = (float)populacao2 + areaKm2 + pib2 + (float)nPontosTuristicos2 + pibcapita2 + (1.0f / dspopulacional2);

printf("Carta 2 \n");
printf("Estado: %s\n", estado2);
printf("Código: %s%s\n", estado2,codigo2);
printf("Nome da Cidade: %s\n",nomeCidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", areaKm2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", nPontosTuristicos2);
printf("Densidade populacional: %f hab/km²\n", dspopulacional2);
printf("PIB per Capita: %.2f reais\n", pibcapita2);
printf("Super Poder: %.2f\n", superpoder2);

printf("--------------------------------------------------------\n");

printf("Comparação de cartas (Atributo: PIB):\n");

printf("CARTA 1 PIB: %.2f\n", pib);
printf("CARTA 2 PIB: %.2f\n", pib2);

if (pib > pib2){printf("CARTA 1 venceu!!!!\n");
}else{ printf("CARTA 2 venceu!!!!");}


    return 0;
}
