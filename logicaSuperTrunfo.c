#include <stdio.h>

int main () {
int PontosTuristicos1, PontosTuristicos2, Populacao1, Populacao2;
float Area1, PerCapita1, Densidade1, PIB1, Superpoder1, Area2, PerCapita2, Densidade2, PIB2, Superpoder2;
char Cidade[50], Codigo[50], Estado[50];

printf("Digite o Estado1: \n");
scanf("%s", Estado);

printf("Digite o Codigo1: \n");
scanf("%s", Codigo);

printf("Digite o nome da cidade1: \n");
scanf("%s", Cidade);

printf("Digite a populacao1: \n");
scanf("%d", &Populacao1);

printf("Digite a area1: \n");
scanf("%f", &Area1);

printf("Digite o PIB1: \n");
scanf("%f", &PIB1);

printf("Digite o numero de pontos turisticos1: \n");
scanf("%d", &PontosTuristicos1);


printf("CARTA 1: \n");
printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Nome da Cidade: %s\n", Cidade);
printf("Populacao: %d\n", Populacao1);
printf("Area: %.2f KM²\n", Area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);

Densidade1 = Populacao1 / Area1;
PerCapita1 = PIB1 / Populacao1;
Superpoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PerCapita1;

printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
printf("PIB per Capita: %.2f reais\n", PerCapita1);
printf("SUPERPODER: %.2f\n", Superpoder1);

printf("Digite o Estado2: \n");
scanf("%s", Estado);

printf("Digite o Codigo2: \n");
scanf("%s", Codigo);

printf("Digite o nome da cidade2: \n");
scanf("%s", Cidade);

printf("Digite a populacao2: \n");
scanf("%d", &Populacao2);

printf("Digite a area2: \n");
scanf("%f", &Area2);

printf("Digite o PIB2: \n");
scanf("%f", &PIB2);

printf("Digite o numero de pontos turisticos2: \n");
scanf("%d", &PontosTuristicos2);

printf("CARTA 2: \n");
printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", Codigo);
printf("Nome da Cidade: %s\n", Cidade);
printf("Populacao: %d\n", Populacao2);
printf("Area: %.2f KM²\n", Area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);

Densidade2 = Populacao2 / Area2;
PerCapita2 = PIB2 / Populacao2;
Superpoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PerCapita2;

printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
printf("PIB per Capita: %.2f reais\n", PerCapita2);
printf("SUPERPODER: %.2f\n", Superpoder2);

printf("População1 > Populacao2: %d\n", (int)Populacao1 > Populacao2);
printf("Area1 > Area2: %d\n", (int)Area1 > Area2);
printf("PIB1 > PIB2: %d\n", (int)PIB1 > PIB2);
printf("Pontos Turisticos1 > Pontos Turisticos2: %d\n", (int)PontosTuristicos1 > PontosTuristicos2);
printf("Densidade1 < Densidade2: %d\n", (int)Densidade1 < Densidade2);
printf("PerCapita1 > PerCapita2: %d\n", (int)PerCapita1 > PerCapita2);
printf("Superpoder1 > Superpoder2: %d\n", (int)Superpoder1 > Superpoder2);


if(Populacao1 > Populacao2){
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}

if(Area1 > Area2){
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}

if(PIB1 > PIB2){
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}

if(PontosTuristicos1 > PontosTuristicos2) {
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}

if(Densidade1 < Densidade2) {
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}

if(PerCapita1 > PerCapita2) {
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}

if(Superpoder1 > Superpoder2) {
printf("Carta 1 venceu!\n");
} else {
printf("Carta 2 venceu!\n");
}
}