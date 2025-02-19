#include <stdio.h>


int main() {

    //variaveis das cartas
    char carta[] = "01";
    char carta_2[]= "01";
    char estado = 'a', estado_2 ='b';
    char codigocarta[15]= "01";
    char codigocarta_2[20]= "02";
    char nomecidade [22], nomecidade_2[23];
    int populacao;
    int populacao_2;
    float area, area_2;
    float pib, pib_2;
    int pontosturisticos, pontosturisticos_2;

     //cadastro da carta 1

     printf("informe o estado: %c\n", estado);
     scanf("%c", &estado);
     printf("informe codigo da carta: %s\n", codigocarta);
     scanf("%s", &codigocarta);
     printf("informe o nome da cidade: %s\n", nomecidade);
     scanf("%s", &nomecidade);
     printf("informe tamanho da populaçao: \n");
     scanf("%d", &populacao);
     printf("informe tamandho da cidade: \n");
     scanf("%f", &area);
     printf("informe o pib: \n");
     scanf("%f", &pib);
     printf("informe numero pontos turisticos: \n");
     scanf("%d", &pontosturisticos);


    ///cadastro da carta 2
    
     printf("informe o estado 2: %c\n", estado_2);
     scanf("%c", &estado_2);
     printf("informe codigo da carta: \n");
     scanf("%s", &codigocarta_2);
     printf("informe o nome da cidade:\n ");
     scanf("%s", &nomecidade_2);
     printf("informe tamanho da populaçao: \n");
     scanf("%d", &populacao_2);
     printf("informe tamandho da cidade: \n");
     scanf("%f", &area_2);
     printf("informe o pib: \n");
     scanf("%f", &pib_2);
     printf("informe numero pontos turisticos: \n");
     scanf("%d", &pontosturisticos_2);

     //// imprimindo valores das cartas
     
     printf("carta 01: \n estado: %c\n codigo: %s\n cidade: %s\n populaçao: %d\n area: %f\n pib: %f\n pontos turisticos: %d\n carta 02: \n estado2: %c\n codigo2: %s\n cidade2: %s\n populaçao2: %d\n area2: %f\n pib2: %f\n pontos turisticos2: %d\n",
         estado, codigocarta, nomecidade, populacao, area, pib, pontosturisticos, estado_2, codigocarta_2, nomecidade_2, populacao_2, area_2, pib_2, pontosturisticos_2);
        return 0;  

     }