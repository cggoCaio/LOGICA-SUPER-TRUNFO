#include <stdio.h>

int main(){

/* Estrutura da primeira carta*/
//Coloquei o unsigned long int para a variável população// 
//Adicionei super poder as variaveis//

    char estado1[50], codigo1[20], nome1[50];
    int  npturisticos1;
    float area1, pib1, resultpib1, resultdens1, superpoder1;
    unsigned long int populacao1;


    printf("\n--- Insira os dados da primeira carta ---\n");
    
    printf("Digite o Estado: \n");
    scanf(" %49s", estado1);

    printf("Digite o código da cidade: \n");
    scanf(" %19s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49s", nome1);

    printf("Digite a População: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a Área: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &npturisticos1);


//IMPLEMENTANDO O CALCULO DO PIB PER CAPITA E DA DENSIDADE DEMOGRÁFICA//
    resultpib1 = (pib1 / populacao1);
    resultdens1 = (populacao1 / area1);


//Implementando o super poder//
    superpoder1 = (populacao1 + area1 + pib1 + npturisticos1 + resultpib1 - resultdens1);


//RETORNANDO OS DADOS DA PRIMEIRA CARTA//
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", npturisticos1);
    printf("PIB per capita: %.2f reais \n", resultpib1);
    printf("Densidade Demográfica: %.2f habitantes por km² \n", resultdens1);
    printf("Super Poder: %.2f \n", superpoder1); 




/* Agora ler a segunda carta */
//Coloquei o unsigned long int para a variável população//
    char estado2[50], codigo2[20], nome2[50];
    int  npturisticos2;
    float area2, pib2, resultpib2, resultdens2,superpoder2;
    unsigned long int populacao2;

    printf("\n--- Agora insira os dados da segunda carta ---\n");

    printf("Digite o Estado: \n");
    scanf(" %49s", estado2);

    printf("Digite o código da cidade: \n");
    scanf(" %19s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49s", nome2);

    printf("Digite a População: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a Área: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &npturisticos2);


//IMPLEMENTANDO O CALCULO DO PIB PER CAPITA E DA DENSIDADE DEMOGRÁFICA//
    resultpib2 = (pib2 / populacao2);
    resultdens2 = (populacao2 / area2);

//Implementando o super poder//
    superpoder2 = (populacao2 + area2 + pib2 + npturisticos2 + resultpib2 - resultdens2);


//RETORNANDO OS DADOS DA SEGUNDA CARTA//
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", npturisticos2);
    printf("PIB per capita: %.2f reais \n", resultpib2);
    printf("Densidade Demográfica: %.2f habitantes por km² \n", resultdens2);
    printf("Super Poder: %.2f \n", superpoder2);


    // Comparação dos aspectos
    printf("\n--- Comparação dos Aspectos ---\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else if (populacao1 < populacao2) {
        printf("População: Carta 2 venceu\n");       
    } else if (populacao1 == populacao2) {
        printf("População: Empate\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu\n");
    } else if (area1 < area2) {
        printf("Área: Carta 2 venceu\n");
    } else if (area1 == area2) {
        printf("Área: Empate\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else if (pib1 < pib2) {
        printf("PIB: Carta 2 venceu\n");       
    } else if (pib1 == pib2) {
        printf("PIB: Empate\n");
    }

    if (npturisticos1 > npturisticos2) {
        printf("Número de Pontos Turísticos: Carta 1 venceu\n");
    } else if (npturisticos1 < npturisticos2) {
        printf("Número de Pontos Turísticos: Carta 2 venceu\n");
    } else if (npturisticos1 == npturisticos2) {
        printf("Número de Pontos Turísticos: Empate\n");
    }

    if (resultpib1 > resultpib2) {
        printf("PIB per capita: Carta 1 venceu\n");
    } else if (resultpib1 < resultpib2) {
        printf("PIB per capita: Carta 2 venceu\n");
    } else if (resultpib1 == resultpib2) {
        printf("PIB per capita: Empate\n");       
    } 

    if (resultdens1 > resultdens2) {
        printf("Densidade Demográfica: Carta 2 venceu \n");
    } else if (resultdens1 < resultdens2) {
        printf("Densidade Demográfica: Carta 1 venceu\n");
    } else if (resultdens1 == resultdens2) {
        printf("Densidade Demográfica: Empate\n");
    }
    return 0;

}