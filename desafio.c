#include <stdio.h>

int main() {

// carta 1

char estado1[15];
char cidade1[15];
char codigo1[15];
int  populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// carta2

char estado2[15];
char cidade2[15];
char codigo2[15];
int  populacao2;
float area2;
float pib2;
int pontosTuristicos2;

// dados carta1

printf("Cadastro da Carta 1:\n");

printf("digite o estado:");
scanf("%s", &estado1);

printf("digite a cidade:");
scanf("%s", &cidade1);

printf("digite o codigo:");
scanf("%s", &codigo1);

printf("digite a população:");
scanf("%d", &populacao1);

printf("Digite o PIB:");
scanf("%f", &area1);


printf("Digite o Número de Pontos Turísticos:");
scanf("%d", &pontosTuristicos2);

// dados carta2

printf("Cadastro da Carta 2:\n");

printf("digite o estado:");
scanf("%s", &estado2);

printf("digite a cidade:");
scanf("%s", &cidade2);

printf("digite o codigo:");
scanf("%s", &codigo2);

printf("digite a população:");
scanf("%d", &populacao2);

printf("Digite o PIB:");
scanf("%f", &area2);


printf("Digite o Número de Pontos Turísticos:");
scanf("%d", &pontosTuristicos2);



return 0;

}