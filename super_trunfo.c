
#include <stdio.h>

int main(){
 int pontos;
 float populacao, area, pib;
 char estado[20], cidade[20], codigo[5];     

 printf("Digite o nome do seu estado: \n");
 scanf("%s", estado);

 printf("Digite o código da cidade:\n");
 scanf("%s", codigo);

 printf("Digite o nome da sua cidade: \n");
 scanf("%s", cidade);

 printf("Digite a população da cidade: \n");
 scanf("%f", &populacao);

 printf("Digite a área em km da cidade: \n");
 scanf("%f", &area);

 printf("Digite o pib da cidade: \n");
 scanf("%f", &pib);

 printf("Quantos pontos turísticos a cidade possui? \n");
 scanf("%d", &pontos);
 

 printf("Estado: %s", estado);
 printf("Código da cidade: %s", codigo);
 printf(" - Cidade: %s\n", cidade);
 printf("População: %f", populacao);
 printf(" - Área em km: %f\n", area);
 printf("PIB: %f", pib);
 printf(" - Pontos turísticos: %d\n", pontos);
 
    return 0;
}
