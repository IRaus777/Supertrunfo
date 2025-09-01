#include <stdio.h>

int main(){
    int populacao;
    int pontoT;
    float pib;
    float area;
    char cidade[50];
    char codcarta[5];
    char estado[50];
    int densidade1;
    int percapta1;

    int populacao2;
    int pontoT2;
    float pib2;
    float area2;
    char cidade2[50];
    char codcarta2[5];
    char estado2[50];
    int densidade2;
    int percapta2;

    printf ("Bem vindo ao super trunfo, informe os dados requisitados!\n");

    printf("Qual a letra do estado? \n");
    scanf(" %49[^\n]", estado);

    printf("qual o codigo da carta:   (letra seguida de número)\n");
    scanf(" %4s", codcarta);

    printf("qual o nome da cidade: \n");
    scanf(" %49[^\n]", cidade);

    printf("Qual a populacao: \n");
    scanf("%d", &populacao);

    printf("qual area em km²: \n");
    scanf("%f", &area);

    printf("Qual o pib: \n");
    scanf("%f", &pib);

    printf("numero de pontos turisticos: \n");
    scanf("%d", &pontoT);
    
    percapta1 = pib / populacao;

    densidade1 = populacao / area;
    

    printf("\nAgora digite os dados da segunda carta!\n");

    printf("Qual a letra do estado? \n");
    scanf(" %49[^\n]", estado2);

    printf("qual o codigo da carta:   (letra seguida de número)\n");
    scanf(" %4s", codcarta2);

    printf("qual o nome da cidade: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Qual a populacao: \n");
    scanf("%d", &populacao2);

    printf("qual area em km²: \n");
    scanf("%f", &area2);

    printf("Qual o pib: \n");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: \n");
    scanf("%d", &pontoT2);
    
    percapta2 = pib2 / populacao2;
    
    
    
    densidade2 = populacao2 / area2;
  

    
    
    printf("Carta 1:\n Estado: %s\n Codigo: %s\n Nome da cidade: %s\n Populacao: %d\n Area: %f\n Pib: %f\n Numero de pontos turisticos: %d\n Pibpercapta: %d\n Densidade populacional: %d\n", estado, codcarta, cidade, populacao, area, pib, pontoT, percapta1, densidade1);

    printf("\nCarta 2:\n Estado: %s\n Codigo: %s\n Nome da cidade: %s\n Populacao: %d\n Area: %f\n Pib: %f\n Numero de pontos turisticos: %d\n Pibpercapta: %d\n Densidade populacional: %d\n", estado2, codcarta2, cidade2, populacao2, area2, pib2, pontoT2, pib2, densidade2);

    
    return 0;







}
