#include <stdio.h>

int main(){
    unsigned long int populacao;
    int pontoT;
    float pib;
    float area;
    char cidade[50];
    char codcarta[5];
    char estado[50];
    int densidade1;
    int percapta1;
    float superpoderA;
    
    unsigned long int populacao2;
    int pontoT2;
    float pib2;
    float area2;
    char cidade2[50];
    char codcarta2[5];
    char estado2[50];
    int densidade2;
    int percapta2;
    float superpoderB;
    long int resultado;

    printf ("Bem vindo ao super trunfo, informe os dados requisitados!\n");

    printf("Qual a letra do estado? \n");
    scanf(" %49[^\n]", estado);

    printf("qual o codigo da carta:   (letra seguida de número)\n");
    scanf(" %4s", codcarta);

    printf("qual o nome da cidade: \n");
    scanf(" %49[^\n]", cidade);

    printf("Qual a populacao: \n");
    scanf("%u", &populacao);

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
    scanf("%u", &populacao2);

    printf("qual area em km²: \n");
    scanf("%f", &area2);

    printf("Qual o pib: \n");
    scanf("%f", &pib2);

    printf("numero de pontos turisticos: \n");
    scanf("%d", &pontoT2);
    
    percapta2 = pib2 / populacao2;
    
    densidade2 = populacao2 / area2;

    

    superpoderA = populacao + pib + pontoT + percapta1 + densidade1;
    superpoderB = populacao2 + pib2 + pontoT2 + percapta2 + densidade2;

    resultado = superpoderA>superpoderB;

    printf("%ld", resultado);
    
    

    
  
    
  
    return 0;







}
