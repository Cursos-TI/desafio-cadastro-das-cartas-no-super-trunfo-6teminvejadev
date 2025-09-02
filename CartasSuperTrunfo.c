#include <stdio.h>


int main() {

    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[20] = "SãoPaulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;

    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[20] = "RiodeJaneiro"; 
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosturisticos2 = 30;

    printf("Bem vindo ao jogo Super Trunfo!\n");
    printf("Vamos cadastrar suas cartas!\n");

    printf("Digite o Estado da sua Carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    printf("Agora vamos cadastrar a segunda carta!\n");

    printf("Digite o Estado da sua carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da sua Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");  
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1); 
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("\n");

    printf("Essa são as informações das suas cartas! \n");
        
    return 0;
    }