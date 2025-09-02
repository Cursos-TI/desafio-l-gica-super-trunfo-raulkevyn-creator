#include <stdio.h>

int  main (){
    char estado[3], codigo[20], cidade[200];
    unsigned int popu, turismo;
    float area, pib, densidade, capital, super;

    char estado2[3], codigo2[20], cidade2[200];
    unsigned int popu2, turismo2;
    float area2, pib2, densidade2, capital2, super1 ;
    // 2

    printf("Digite seu Estado: ");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade);

    printf("Digite a Populacao: ");
    scanf("%u", &popu);

    printf("Digite a Area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    printf("Digite  o Numero de pontos Turisticos: ");
    scanf("%u", &turismo);

    densidade = (popu / area);

    capital = (pib / popu);

    super = (float)(popu + area + pib + turismo + capital + densidade);

    // 2
    printf("Digite seu Estado: ");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a Populacao: ");
    scanf("%u", &popu2);

    printf("Digite a area  ");
    scanf("%f", &area2);

    printf("Digite o PIB ");
    scanf("%f", &pib2);
    
    printf("Digite  o Numero de pontos Turisticos: ");
    scanf("%u", &turismo2);
    
    densidade2 = (popu2 / area2);

    capital2 = (pib2 / popu2);

    super1 = (float)(popu2 + area2 + pib2 + turismo2 + capital2 + densidade2);

    
    // 
    printf("***Carta 1: ***\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %u \n", popu);
    printf("Area: %.2f km2\n", area);
    printf("PIB %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %u \n", turismo);
    printf("densidade populacional e: %f \n", densidade);
    printf("PIB per capita: %f \n", capital);


    printf("***Carta 2***\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %u \n", popu2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %u \n", turismo2);
    printf("densidade populacional e: %f \n", densidade2);
    printf("PIB per capita: %f \n", capital2);

    
    printf("\n*** Comparacao de Cartas*** \n");

    printf("\n Atributo: Populaçao\n");
    printf("Carta 1 - %s: %u \n", cidade, popu);
    printf("Carta 2 - %s %u\n",cidade2, popu2);
    if(popu > popu2){
        printf("Carta 1 (%s) venceu! \n", cidade);
    } else {
        printf("Carta 2 (%s) venceu! \n",cidade2);
    }

    printf("\n Atributo: Area\n");
    printf("Carta 1 - %s: %.2f \n", cidade, area);
    printf("Carta 2 - %s %.2f\n",cidade2, area2);
    if(area > area2){
        printf("Carta 1 (%s) venceu! \n", cidade);
    } else {
        printf("Carta 2 (%s) venceu! \n",cidade2);
    }
    

    printf("\n Atributo: PIB\n");
    printf("Carta 1 - %s: %.2f \n", cidade, pib);
    printf("Carta 2 - %s %.2f\n",cidade2, pib2);
    if(pib > pib2){
        printf("Carta 1 (%s) venceu! \n", cidade);
    } else {
        printf("Carta 2 (%s) venceu! \n",cidade2);
    }
    return 0;
    }

