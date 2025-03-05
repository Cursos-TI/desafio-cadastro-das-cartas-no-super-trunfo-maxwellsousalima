#include <stdio.h>
#include <stdlib.h>


int main(){
// criando vairaveis carta 1
int populacao , pontosturisticos;
float area, pib;
char pais[30];
float densidade;
int opcao;

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

printf("densidade populacional: %f\n\n", densidade);

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

// menu dos atributos das cartas para usuario escolher qual atributo comparar

printf("\nMENU\n");
printf("\nESCOLHA QUAL ATRIBUTO COMPARAR\n");
printf("1.populacao\n");
printf("2.area\n");
printf("3.pib\n");
printf("4.pontos turisticos\n");
printf("5.densidade\n");
scanf("%d", &opcao);

// logica para comparar cartas e definir a vencedora
switch (opcao)
{
case 1:
    printf("comparando cartas por populacao\n");
    if (populacao == populacao2)
{
    printf("\nempate\n");
} else if (populacao > populacao2)
{
    printf("\ncarta um venceu\n");
} else{
    printf("\ncarta dois venceu\n");
}
printf("pais: %s\n", pais);
printf("pais 2: %s\n", pais2);
printf("populacao: %d\n", populacao);
printf("populacao 2: %d\n", populacao2);
   break;

case 2:
printf("comparando cartas por area\n");
if (area == area2)
{
    printf("\nempate\n");
} else if (area > area2)
{
    printf("\ncarta um venceu\n");
} else{
    printf("\ncarta dois venceu\n");
} 
printf("pais: %s\n", pais);
printf("pais 2: %s\n", pais2);
printf("area: %f\n", area);
printf("area 2: %f\n", area2);
break;

case 3:
printf("comparando cartas por pib\n");
if (pib == pib2)
{
    printf("\nempate\n");
} else if (pib > pib2)
{
    printf("\ncarta um venceu\n");
} else{
    printf("\ncarta dois venceu\n");
} 
printf("pais: %s\n", pais);
printf("pais 2: %s\n", pais2);
printf("pib: %f\n", pib);
printf("pib 2: %f\n", pib2);
break;
case 4:
printf("comparando cartas por pontos turisticos\n");
if (pontosturisticos == pontosturisticos2)
{
    printf("\nempate\n");
} else if (pontosturisticos > pontosturisticos2)
{
    printf("\ncarta um venceu\n");
} else{
    printf("\ncarta dois venceu\n");
} 
printf("pais: %s\n", pais);
printf("pais 2: %s\n", pais2);
printf("pontos turisticos: %d\n", pontosturisticos);
printf("pontos turisticos 2: %d\n", pontosturisticos2);
break;
case 5:
printf("comparando cartas por densidade\n");
if (densidade == densidade2)
{
    printf("\nempate\n");
} else if (densidade < densidade2)
{
    printf("\ncarta um venceu\n");
} else{
    printf("\ncarta dois venceu\n");
} 
printf("pais: %s\n", pais);
printf("pais 2: %s\n", pais2);
printf("densidade: %f\n", densidade);
printf("densidade 2: %f\n", densidade2);
break;
default:
printf("selecione um opcao valida\n");
    break;
}








return 0;
}