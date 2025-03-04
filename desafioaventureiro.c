#include <stdio.h>
#include <stdlib.h>


int main(){
// criando vairaveis carta 1
int populacao , pontosturisticos;
float area, pib;
char pais[30];
float densidade;

// criando variaveis carta 2

int populacao2 , pontosturisticos2;
float area2, pib2;
char pais2[30];
float densidade2;

// solicitando dados carta 1

printf("digite o pais:\n");
scanf("%s", &pais);

printf("informe a popualacao\n");
scanf("%d", &populacao);

printf("informe area:\n");
scanf("%f", &area);

printf("informe o pib:\n");
scanf("%f", &pib);

printf("informe os pontos turisticos:\n");
scanf("%d", &pontosturisticos);

// imprimindo carta 1

printf("#### carta 1 ####\n");
printf("pais: %s\n", pais);
printf("populacao: %d\n", populacao);
printf("area: %f\n", area);
printf("pib:%f\n", pib);
printf("pontos turisticos:%d\n", pontosturisticos);

densidade = populacao / area;

printf("densidade populacional: %f\n", densidade);

printf("digite o pais:\n");
scanf("%s", &pais2);

printf("informe a popualacao\n");
scanf("%d", &populacao2);

printf("informe area:\n");
scanf("%f", &area2);

printf("informe o pib:\n");
scanf("%f", &pib2);

printf("informe os pontos turisticos:\n");
scanf("%d", &pontosturisticos2);

// imprimindo carta 2

printf(" #### carta 2 ####\n");
printf("pais: %s\n", pais2);
printf("populacao: %d\n", populacao2);
printf("area: %f\n", area2);
printf("pib:%f\n", pib2);
printf("pontos turisticos:%d\n", pontosturisticos2);

densidade2 = populacao2 / area2;

printf("densidade populacional:%f\n", densidade2);

// menu dos atributos das cartas para mostrar na tela os atributos comparados

printf("comparando cartas por populacao\n");
switch (populacao)
{
case 1:
    printf("populacao carta 1:\n%d", populacao);
    break;
}
switch (populacao2)
{
case 1:
    printf("populcacao carta 2:\n%d", populacao2);
    break;
} 
// logica para comparar qual carta vence
if (populacao == populacao2)
{ 
    printf("empate!!!");
} else if (populacao > populacao2)
{
    printf("carta 1 venceu\n");
    printf("pais 1:%s\n", pais);
    printf("populacao:%d\n", populacao);
} else if (densidade < densidade2)
{
printf("carta 1 venceu por densidade\n");
printf("pais 1:%s\n", pais);
printf("populacao:%d\n", populacao);
} else {
    printf("carta 2 venceu\n");
    printf("pais %s\n", pais2);
    printf("populacao:%d\n", populacao2);
}





return 0;
}