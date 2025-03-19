#include <stdio.h>
int main() {
    //Atributos das cartas (a numeração no fim do nome das variaveis indicam para qual carta cada uma serve)
    int populacao1 ,populacao2 , pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2, area1, area2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2 ;
    char codigo1 [25], codigo2 [25], nome1[25], nome2[25];
    char estado1, estado2;
    
    
    //apresentação do jogo
    printf("***Olá, seja bem vindo ao jogo supertrunfo de países!*** \n");
    printf("Vamos cadastrar as cartas do nosso jogo ? \n");
    printf("Para isso basta digitar o que lhe for pedido \n");

    //Cadastro das cartas
    // Carta 1
    printf("Para comerçarmos vamos cadastrar a primeira carta \n");
    printf("digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite uma letra de A à H, para representar um estado: \n");
    scanf(" %c", &estado1);

    printf("Digite um código para representar este esta cidade, o código deve conter a Letra que representa o estado e seguida de um número de 01 à 04: \n");
    scanf(" %s", codigo1);

    printf("Digite a População desta cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turisticos presentes nesta cidade: \n");
    scanf(" %i", &pontos_turisticos1);

    printf("Digite o PIB(produto interno bruto) desta cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a área em km² desta cidade: \n");
    scanf(" %f", &area1);
    
    // Carta 2
    
    printf("Agora vamos cadastrar a segunda carta de cidade \n");

    printf("digite o nome da cidade n2º: \n");
    scanf("%s", nome2);

    printf("Digite uma letra de A à H, para representar um estado: \n");
    scanf(" %c", &estado2);

    printf("Digite um código para representar este estado, o código deve conter a Letra que representa o estado e seguida de um número de 01 à 04: \n");
    scanf(" %s", codigo2);

    printf("Digite a População desta cidade: \n");
    scanf("%i", &populacao2);

    printf("Digite a quantidade de pontos turisticos presentes nesta cidade: \n");
    scanf(" %d", &pontos_turisticos2);

    printf("Digite o PIB(produto interno bruto) desta cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a área em km² desta cidade: \n");
    scanf(" %f", &area2);

    printf("-------------------------------------------- \n"); //Separaçao
    //Cálculo da densidade populacional e do PIB per capita.
    // Cálculo Carta 1:

    densidade_populacional1 = (double) (populacao1 / area1);
    
    pib_per_capita1 = (double) (pib1 / populacao1);

    // Cálculo Carta 2:
    densidade_populacional2 = (double) (populacao2 / area2);
    
    pib_per_capita2 = (double) (pib2 / populacao2);


    //Exibição das cartas montadas

    printf("Carta 1: \n");
    printf("Nome da cidade: %s \n", nome1);
    printf("Estado: %c \n", estado1);
    printf("Codigo da cidade: %s \n ",  codigo1);
    printf("População: %i \n", populacao1);
    printf("Pontos Turisticos: %i \n", pontos_turisticos1);
    printf("PIB: %f \n", pib1);
    printf("Área Km²: %f \n", area1);
    printf("Densidade Populacional: %f \n", densidade_populacional1);
    printf("PIB per Capita: %f \n", pib_per_capita1);
    
    printf("-------------------------------------------- \n");//Separaçao

    printf("Carta 2: \n");
    printf("Nome da cidade: %s \n", nome2);
    printf("Estado: %c \n", estado2);
    printf("Codigo da cidade: %s \n ",  codigo2);
    printf("População: %i \n", populacao2);
    printf("Pontos Turisticos: %i \n", pontos_turisticos2);
    printf("PIB: %f \n", pib2);
    printf("Área Km²: %f \n", area2);
    printf("Densidade Populacional: %f \n", densidade_populacional2);
    printf("PIB per Capita: %f \n", pib_per_capita2);

    return 0;
} 