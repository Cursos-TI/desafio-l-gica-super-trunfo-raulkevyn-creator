#include <stdio.h>

int  main (){
    char estado[3], codigo[20], cidade[200];
    int popu, turismo;
    float area, pib, densidade, capital, super;

    char estado2[3], codigo2[20], cidade2[200];
    int popu2, turismo2;
    float area2, pib2, densidade2, capital2, super1 ;
    // 2

    printf("Digite seu Estado: ");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade);

    printf("Digite a Populacao: ");
    scanf("%i", &popu);

    printf("Digite a Area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    
    printf("Digite  o Numero de pontos Turisticos: ");
    scanf("%d", &turismo);

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
    scanf("%i", &popu2);

    printf("Digite a area  ");
    scanf("%f", &area2);

    printf("Digite o PIB ");
    scanf("%f", &pib2);
    
    printf("Digite  o Numero de pontos Turisticos: ");
    scanf("%d", &turismo2);
    
    densidade2 = (popu2 / area2);

    capital2 = (pib2 / popu2);

    super1 = (float)(popu2 + area2 + pib2 + turismo2 + capital2 + densidade2);

    
    // 
    printf("***Carta 1: ***\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Populacao: %i \n", popu);
    printf("Area: %.2f km2\n", area);
    printf("PIB %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d \n", turismo);
    printf("densidade populacional e: %f \n", densidade);
    printf("PIB per capita: %f \n", capital);


    printf("***Carta 2***\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Populacao: %i \n", popu2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", turismo2);
    printf("densidade populacional e: %f \n", densidade2);
    printf("PIB per capita: %f \n", capital2);

    

    
int opcao;
     

  printf("***Menur de comparacao*** \n");
  printf("1. Populacao \n");
  printf("2. Area\n");
  printf("3. PIB\n");
  printf("4. Densidade \n");
  printf("5. PIB per capita\n");
  printf("0. sair\n");
  scanf("%d", &opcao);

    
switch (opcao)
{
case 1:
    
    printf("\n Populacao\n");
    printf("%s: %i \n", cidade, popu);
    printf("%s: %i\n",cidade2, popu2);
    if(popu > popu2){
        printf("Vencedor! %s \n", cidade);
    } else if (popu2 > popu){
        printf("Vencedor! %s \n",cidade2);
    } else {
    printf("Empate! \n");
     }
    break;

 case 2:
    printf("\nArea:\n");
    printf("%s: %.2f\n", cidade, area);
    printf("%s: %.2f\n", cidade2, area2);
     if(area > area2){
         printf("Vencedor: %s\n", cidade);
    }else if(area2 > area){
         printf("Vencedor: %s\n", cidade2);
    } else{ 
    printf("Empate!\n");
     }
    break;
case 3:
    printf("\nPIB:\n");
    printf("%s: %.2f\n", cidade, pib);
     printf("%s: %.2f\n", cidade2, pib2);
     if(pib > pib2) {
        printf("Vencedor: %s\n", cidade);
     }else if(pib2 > pib) {
        printf("Vencedor: %s\n", cidade2);
    }else{ printf("Empate!\n");
        }
    break;
case 4:
    printf("\nDensidade Populacional:\n");
    printf("%s: %.2f\n", cidade, densidade);
    printf("%s: %.2f\n", cidade2, densidade2);
    if(densidade > densidade2) {
        printf("Vencedor: %s\n", cidade);
    }else if(densidade2 > densidade){
         printf("Vencedor: %s\n", cidade2);
    }else{
         printf("Empate!\n");
         }
    break;
case 5:
    printf("\nPIB per capita:\n");
    printf("%s: %.2f\n", cidade, capital);
    printf("%s: %.2f\n", cidade2, capital2);
    if(capital > capital2){
         printf("Vencedor: %s\n", cidade);
    }else if(capital2 > capital) {
        printf("Vencedor: %s\n", cidade2);
    }else{
         printf("Empate!\n");
         }
    break;
 case 0:
    printf("Saindo...\n");
    break;
    default:
    printf("Opcao invalida!\n");

}
 } 


