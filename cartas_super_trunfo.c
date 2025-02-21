#include <stdio.h>
int main() {
    //Atributos das cartas (a numeração no fim do nome das variaveis indicam para qual carta cada uma serve)
    int população1,população2, pontos_turisticos1, pontos_turisticos2;
    float pib1, pib2, area1, area2;
    char codigo1 [10], codigo2 [10], nome1[25], nome2[25];
    char estado1, estado2;
    
    
    //apresentação do jogo
    printf("Olá, seja bem vindo ao jogo supertrunfo de países! \n");
    printf("Vamos cadastrar as cartas do nosso jogo ? \n");
    printf("Para isso basta digitar o que lhe for pedido \n");

    //Cadastro das cartas
    // Carta 1
    printf("Para comerçarmos vamos cadastrar a primeira carta \n");
    printf("digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite uma letra de A à H, para representar um estado: \n");
    scanf(" %c", estado1);

    printf("Digite um código para representar este estado, o código deve conter a Letra que representa o estado e seguida de um número de 01 à 04: \n");
    scanf("%s", codigo1);

    printf("Digite a População desta cidade: \n");
    scanf("%i", população1);

    printf("Digite a quantidade de pontos turisticos presentes nesta cidade: \n");
    scanf("%i", pontos_turisticos1);

    printf("Digite o PIB(produto interno bruto) desta cidade:\n");
    scanf("%f", pib1);

    printf("Digite a área em km² desta cidade: \n");
    scanf("%f", area1);
    
    // Carta 2
    
    printf("Agora vamos cadastrar a segunda carta de cidade \n");

    printf("digite o nome da cidade n2º: \n");
    scanf("%s", nome2);

    printf("Digite uma letra de A à H, para representar um estado: \n");
    scanf(" %c", estado2);

    printf("Digite um código para representar este estado, o código deve conter a Letra que representa o estado e seguida de um número de 01 à 04: \n");
    scanf("%s", codigo2);

    printf("Digite a População desta cidade: \n");
    scanf("%i", população2);

    printf("Digite a quantidade de pontos turisticos presentes nesta cidade: \n");
    scanf("%i", pontos_turisticos2);

    printf("Digite o PIB(produto interno bruto) desta cidade:\n");
    scanf("%f", pib2);

    printf("Digite a área em km² desta cidade: \n");
    scanf("%f", area2);

    //Exibição das cartas montadas

    printf("Carta 1: \n");
    printf("Nome da cidade: %s \n", nome1);
    printf("Estado: %c \n", & estado1);
    printf("Codigo da cidade: %s \n ",  codigo1);
    printf("População: %i \n", & população1);
    printf("Pontos Turisticos: %i \n", & pontos_turisticos1);
    printf("PIB: %f", & pib1);
    printf("Área Km²: %f \n", & area1);


    printf("Carta 2: \n");
    printf("Nome da cidade: %s \n", nome2);
    printf("Estado: %c \n", & estado2);
    printf("Codigo da cidade: %s \n ",  codigo2);
    printf("População: %i \n", & população2);
    printf("Pontos Turisticos: %i \n", & pontos_turisticos2);
    printf("PIB: %f", & pib2);
    printf("Área Km²: %f \n", & area2);
    return 0;
}
