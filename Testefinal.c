#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Nível aventureiro - Comparação das Cartas usando Switch

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char pais1 [20];
    char pais2 [20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int NumeroPontosTuristicos1;
    int NumeroPontosTuristicos2;
    float densidadeDemografica1;
    float densidadeDemografica2;
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;

    printf ("*** Desafio Super Trunfo - Países *** \n");
       
    // Cadastro das Cartas:
    //Dados Carta 1
    printf("Carta 1 \n");

    printf("Digite o País:");
    scanf("%s", pais1);
 
    printf("Digite a População:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos1);

    //Cálculo da densidade populacional da Carta 1
    densidadeDemografica1 = (float) populacao1 / area1;

    printf("Densidade Demográfica: %.2f habitantes por km²\n", densidadeDemografica1);

    //Dados Carta 2
    printf("Carta 2 \n");

    printf("Digite o País:");
    scanf("%s", pais2);

    printf("Digite a População:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos2);

    //Cálculo da densidade populacional e PIB per capita da Carta 2
    densidadeDemografica2 = (float) populacao2 / area2;

    printf("Densidade Demográfica: %.2f habitantes por km²\n", densidadeDemografica2);


    // Comparação de Cartas:
    printf ("Comparando as Cartas:\n");

    // Lógica de comparação entre duas cartas:

    // início do jogo:
    //Escolha do primeiro atributo:
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Demográfica\n");
    
    printf("Escolha a comparação: \n");
    scanf("%c", &primeiroatributo);
         
    switch (primeiroatributo) {
                
      case 'A':
      case 'a':
        printf("Você escolheu a opção População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

      case 'B':
      case 'b':
        printf("Você escolheu a opção Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

      case 'C':
      case 'c':
        printf("Você escolheu a opção PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    
      case 'D':
      case 'd':
        printf("Você escolheu a opção Número de Pontos Turísticos\n");
        resultado1 = NumeroPontosTuristicos1 > NumeroPontosTuristicos2 ? 1 : 0;
        break;
    
      case 'E':
      case 'e':
        printf("Você escolheu a opção Densidade Demográfica\n");
        resultado1 = densidadeDemografica1 > densidadeDemografica2 ? 1 : 0; 
        break;

      default:
        printf("Opção inválida! Tente novamente!\n");
        break;
   }

   //Escolha do segundo atributo:
    printf("Escolha o primeiro atributo:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de Pontos Turísticos\n");
    printf("E. Densidade Demográfica\n");
    
    printf("Escolha a comparação: \n");
    scanf("%c", &segundoatributo);
        if (primeiroatributo == segundoatributo) {
            printf("Você escolheu o mesmo atributo!\n");
        } else {
            switch (segundoatributo) {
                
            case 'A':
            case 'a':
                printf("Você escolheu a opção População\n");
                resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;

            case 'B':
            case 'b':
                printf("Você escolheu a opção Área\n");
                resultado1 = area1 > area2 ? 1 : 0;
            break;

            case 'C':
            case 'c':
                printf("Você escolheu a opção PIB\n");
                resultado1 = pib1 > pib2 ? 1 : 0;
            break;
    
            case 'D':
            case 'd':
                printf("Você escolheu a opção Número de Pontos Turísticos\n");
                resultado1 = NumeroPontosTuristicos1 > NumeroPontosTuristicos2 ? 1 : 0;
            break;
    
            case 'E':
            case 'e':
                printf("Você escolheu a opção Densidade Demográfica\n");
                resultado1 = densidadeDemografica1 > densidadeDemografica2 ? 1 : 0; 
            break;

            default:
                printf("Opção inválida! Tente novamente!\n");
            break;
   }
            



  





    return 0;
}
