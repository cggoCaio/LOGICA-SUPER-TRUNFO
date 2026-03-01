#include <stdio.h>

int main(){

/* Estrutura da primeira carta*/
//Coloquei o unsigned long int para a variável população// 
//Adicionei super poder as variaveis//

    char  nome1[50];
    int  npturisticos1;
    float area1, pib1, resultpib1, resultdens1, superpoder1;
    unsigned long int populacao1;


    printf("\n--- Insira os dados da primeira carta ---\n");
    
    printf("Digite o Nome do País: \n");
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
    printf("Nome do País: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", npturisticos1);
    printf("PIB per capita: %.2f reais \n", resultpib1);
    printf("Densidade Demográfica: %.2f habitantes por km² \n", resultdens1);
    printf("Super Poder: %.2f \n", superpoder1); 




/* Agora ler a segunda carta */
//Coloquei o unsigned long int para a variável população//
    char  nome2[50];
    int  npturisticos2;
    float area2, pib2, resultpib2, resultdens2,superpoder2;
    unsigned long int populacao2;

    printf("\n--- Agora insira os dados da segunda carta ---\n");

    printf("Digite o Nome da País: \n");
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
    printf("Nome do País: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", npturisticos2);
    printf("PIB per capita: %.2f reais \n", resultpib2);
    printf("Densidade Demográfica: %.2f habitantes por km² \n", resultdens2);
    printf("Super Poder: %.2f \n", superpoder2);


// Seleção do primeiro atributo a ser comparado
    int atributo1, atributo2, resultado1, resultado2, TOTAL;

    printf("Selecione o Primeiro atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &atributo1);



// Comparação dos aspectos
    printf("\n--- Comparação dos Aspectos ---\n");

          switch (atributo1)
          {
          case 1:
              printf("Você escolheu comparar a População\n");
              printf("País %s = %lu habitantes \n", nome1, populacao1);
              printf("País %s = %lu habitantes \n", nome2, populacao2);
              if (populacao1 > populacao2) {
                  resultado1 = 1;
              } else if (populacao2 > populacao1) {
                  resultado1 = 0;
              } else {
                  resultado1 = -1;
              }
          break;
             
            
        
          case 2:
                printf ("Você escolheu comparar a Área\n");
                printf("País %s = %.2f km² \n", nome1, area1);
                printf("País %s = %.2f km² \n", nome2, area2);
                if (area1 > area2) {
                    resultado1 = 1;
                } else if (area2 > area1) {
                    resultado1 = 0;
                } else {
                    resultado1 = -1;
                }
                       
            break;
          case 3:
                printf ("Você escolheu comparar o PIB\n");
                printf("País %s = %.2f bilhões de reais \n", nome1, pib1);
                printf("País %s = %.2f bilhões de reais \n", nome2, pib2);
                if (pib1 > pib2) {
                    resultado1 = 1;
                } else if (pib2 > pib1) {
                    resultado1 = 0;
                } else {
                    resultado1 = -1;
                }
            
            break;
          case 4:
                printf ("Você escolheu comparar o Número de Pontos Turísticos\n");
                printf("País %s = %d Pontos Turísticos \n", nome1, npturisticos1);
                printf("País %s = %d Pontos Turísticos \n", nome2, npturisticos2);
                if (npturisticos1 > npturisticos2) {
                    resultado1 = 1;
                } else if (npturisticos2 > npturisticos1) {
                    resultado1 = 0;
                } else {
                    resultado1 = -1;
                }
            break;
          case 5:
                printf ("Você escolheu comparar a Densidade Demográfica\n");
                printf("País %s = %.2f habitantes por km² \n", nome1, resultdens1);
                printf("País %s = %.2f habitantes por km² \n", nome2, resultdens2);
                if (resultdens1 > resultdens2) {
                    resultado1 = 1;
                } else if (resultdens2 > resultdens1) {
                    resultado1 = 0;
                } else {
                    resultado1 = -1;
                }
               
              break;
          

              default:
                  printf("Opção inválida!\n");
            break;
          }


// Seleção do segundo atributo a ser comparado
    printf("Selecione o segundo atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &atributo2);

              if (atributo2 == atributo1) {
                  printf("Você já comparou esse atributo. Por favor, escolha outro.\n");
              } else {
                  printf("Comparando o segundo atributo...\n");
              }

          switch (atributo2)
                {
          case 1:
        
              printf("Você escolheu comparar a População\n");
              printf("País %s = %lu habitantes \n", nome1, populacao1);
              printf("País %s = %lu habitantes \n", nome2, populacao2);
              if (populacao1 > populacao2) {
                  resultado2 = 1;
              } else if (populacao2 > populacao1) {
                  resultado2 = 0;
              } else {
                  resultado2 = -1;
              }
          break;
             
            
        
          case 2:
                printf ("Você escolheu comparar a Área\n");
                printf("País %s = %.2f km² \n", nome1, area1);
                printf("País %s = %.2f km² \n", nome2, area2);
                if (area1 > area2) {
                    resultado2 = 1;
                } else if (area2 > area1) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
                       
            break;
          case 3:
                printf ("Você escolheu comparar o PIB\n");
                printf("País %s = %.2f bilhões de reais \n", nome1, pib1);
                printf("País %s = %.2f bilhões de reais \n", nome2, pib2);
                if (pib1 > pib2) {
                    resultado2 = 1;
                } else if (pib2 > pib1) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
            
            break;
          case 4:
                printf ("Você escolheu comparar o Número de Pontos Turísticos\n");
                printf("País %s = %d Pontos Turísticos \n", nome1, npturisticos1);
                printf("País %s = %d Pontos Turísticos \n", nome2, npturisticos2);
                if (npturisticos1 > npturisticos2) {
                    resultado2 = 1;
                } else if (npturisticos2 > npturisticos1) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
            break;
          case 5:
                printf ("Você escolheu comparar a Densidade Demográfica\n");
                printf("País %s = %.2f habitantes por km² \n", nome1, resultdens1);
                printf("País %s = %.2f habitantes por km² \n", nome2, resultdens2);
                if (resultdens1 > resultdens2) {
                    resultado2 = 1;
                } else if (resultdens2 > resultdens1) {
                    resultado2 = 0;
                } else {
                    resultado2 = -1;
                }
               
              break;
          

              default:
                  printf("Opção inválida!\n");
            break;
          }

               if (resultado1 + resultado2 == 2 || resultado1 + resultado2 == 0) {
                   printf("Carta %s venceu!\n", nome1);
               } else if (resultado1 + resultado2 == 0 || resultado1 + resultado2 == -1) {
                   printf("Carta %s venceu!\n", nome2);
               } else if (resultado1 + resultado2 == -2 || resultado1 + resultado2 == 1) {
                   printf("Empate!\n");
               }
    
    return 0;
}