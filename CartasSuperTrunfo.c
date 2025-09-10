#include <stdio.h>


int main() {

    char estado1 = 'A';
    char codigo1[4] = "A01";
    char cidade1[20] = "SãoPaulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosturisticos1 = 50;
    float densidadepopulacional1 = 8.1;
    float pibpercapita1 = 56.7;
    float superpoder1 = 99.9;

    char estado2 = 'B';
    char codigo2[4] = "B02";
    char cidade2[20] = "RiodeJaneiro"; 
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosturisticos2 = 30;
    float densidadepopulacional2 = 24.0;
    float pibpercapita2 = 78.0;
    float superpoder2 = 88.8;

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

    printf("Digite a Densidade Populacional: \n");
    scanf("%f", &densidadepopulacional1);

    printf("Digite o PIB per Capita: \n");
    scanf("%f", &pibpercapita1);

    printf("Digite o Super Poder da sua Carta: \n");
    scanf("%f", &superpoder1);


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

    printf("Digite a Densidade Populacional: \n");
    scanf("%f", &densidadepopulacional2);

    printf("Digite o PIB per Capita: \n");      
    scanf("%f", &pibpercapita2);

    printf("Digite o Super Poder da sua Carta: \n");
    scanf("%f", &superpoder2);

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1); 
    printf("Densidade Populacional: %f\n", densidadepopulacional1);
    printf("PIB per Capita: %f\n", pibpercapita1);
    printf("Super Poder: %f\n", superpoder1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidadepopulacional2);
    printf("PIB per Capita: %f\n", pibpercapita2);
    printf("Super Poder: %f\n", superpoder2);
    printf("\n");

    printf("Agora vamos calcular a Densidade Populacional e o PIB per Capita de cada cidade!\n");

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("Densidade Populacional da Carta 1: %f\n", densidadepopulacional1);
    printf("PIB per Capita da Carta 1: %f\n", pibpercapita1);
    printf("Densidade Populacional da Carta 2: %f\n", densidadepopulacional2);
    printf("PIB per Capita da Carta 2: %f\n", pibpercapita2);

    printf("\n");

    int resultado = superpoder1 > superpoder2;
    int resultado2 = superpoder2 > superpoder1;

    printf("A carta 1 tem super poder maior que a carta 2: %d\n", superpoder1 > superpoder2, resultado);
    printf("A carta 2 tem super poder maior que a carta 1: %d\n", superpoder2 > superpoder1, resultado2);

    printf("\n");
    
    printf("Obrigado por jogar Super Trunfo!\n");
        
    return 0;
    }