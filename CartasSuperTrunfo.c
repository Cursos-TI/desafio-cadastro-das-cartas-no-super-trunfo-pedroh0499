#include <stdio.h>
   int main(){
   char estado;
   char codigo[20];
   char nome[20];
   int populacao;
   float area;
   float pib;
   int pontos;

   printf("Estado: \n");
   scanf("%c", &estado);

   printf("Código da Carta: \n");
   scanf("%s", &codigo);

   printf("Nome da Cidade: \n");
   scanf("%s", &nome);

   printf("População: \n");
   scanf("%d", &populacao);

   printf("Área: \n");
   scanf("%f", &area);

   printf("PIB: \n");
   scanf("%f", &pib);

   printf("Número de Pontos Turísticos: \n");
   scanf ("%d", &pontos);

   printf("Estado: %c\n", estado);
   printf("Código da Carta: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome);
   printf("População: %d\n", populacao);
   printf("Área: %f\n", area);
   printf("PIB: %f\n", pib);
   printf("Número de pontos turísticos: %d\n", pontos);

   return 0;
}
