#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis
    char estado1[30], estado2[30];
    char codigo1[4], codigo2[4];
    char nomeCidade1[30], nomeCidade2[30];
    int populacao1, pontosTuristicos1;
    int populacao2, pontosTuristicos2;
    float area1, pib1;
    float area2, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    int pontos1, pontos2;
    float superPoder1, superPoder2;
    int menu;
    int carta1Atributo1, carta1Atributo2;
    int carta2Atributo1, carta2Atributo2;
    int resultadoCarta1, resultadoCarta2;
    
    // Entrada de dados - Carta 1
    printf("Carta 1:\n");

    printf("Digite o nome do estado (sem espaços): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
  
    // Entrada de dados - Carta 2
    printf("\nCarta 2:\n");

    printf("Digite o nome do estado (sem espaços): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;    
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Converte o PIB de bilhões para reais antes de calcular o PIB per capita.
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Converte o PIB de bilhões para reais antes de calcular o PIB per capita.

    
    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n");

    //Menu 1
    printf("Menu de comparação:\n");
    printf("População--------------[1]\n");
    printf("Área-------------------[2]\n");
    printf("PIB--------------------[3]\n");
    printf("Pontos Turísticos------[4]\n");
    printf("Densidade Populacional-[5]\n");
    printf("PIB per Capita---------[6]\n");
    printf("\n");
    printf("Digite a opção do primeiro atributo de comparação: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        //Compara pela População
        printf("Comparação de cartas (Atributo: População):\n");

        printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);

        printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (populacao1 > populacao2) {
            //printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo1 = 1;
            carta2Atributo1 = 0;

        } else if (populacao1 < populacao2) {
            //printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo1 = 0;
            carta2Atributo1 = 1;
        } else {
            //printf("Houve um empate!\n");
            carta1Atributo1 = 0;
            carta2Atributo1 = 0;
        }
        break;
    
    case 2:
        //Compara pela Área
        printf("Comparação de cartas (Atributo: Área):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, area1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, area2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (area1 > area2) {
            //printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo1 = 1;
            carta2Atributo1 = 0;
        } else if (area1 < area2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo1 = 0;
            carta2Atributo1 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo1 = 0;
            carta2Atributo1 = 0;
        }
        break;
    
    case 3:
        //Compara pelo PIB
        printf("Comparação de cartas (Atributo: PIB):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pib1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pib2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (pib1 > pib2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo1 = 1;
            carta2Atributo1 = 0;
        } else if (pib1 < pib2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo1 = 0;
            carta2Atributo1 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo1 = 0;
            carta2Atributo1 = 0;
        }
        break;
    
    case 4:
        //Compara pelos Pontos Turísticos
        printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");

        printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);

        printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (pontosTuristicos1 > pontosTuristicos2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo1 = 1;
            carta2Atributo1 = 0;
        } else if (pontosTuristicos1 < pontosTuristicos2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo1 = 0;
            carta2Atributo1 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo1 = 0;
            carta2Atributo1 = 0;
        }
        break;
    
    case 5:
        //Compara pela Densidade Populacional
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, densidadePopulacional1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, densidadePopulacional2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (densidadePopulacional1 < densidadePopulacional2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo1 = 1;
            carta2Atributo1 = 0;
        } else if (densidadePopulacional1 > densidadePopulacional2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo1 = 0;
            carta2Atributo1 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo1 = 0;
            carta2Atributo1 = 0;
        }
        break;
    
    case 6:
        //Compara pelo PIB per Capita
        printf("Comparação de cartas (Atributo: PIB per Capita):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapita2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (pibPerCapita1 > pibPerCapita2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo1 = 1;
            carta2Atributo1 = 0;
        } else if (pibPerCapita1 < pibPerCapita2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo1 = 0;
            carta2Atributo1 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo1 = 0;
            carta2Atributo1 = 0;
        }
        break;
    
    default:
        break;
    }

    //Menu
    printf("Menu de comparação:\n");
    printf("População--------------[1]\n");
    printf("Área-------------------[2]\n");
    printf("PIB--------------------[3]\n");
    printf("Pontos Turísticos------[4]\n");
    printf("Densidade Populacional-[5]\n");
    printf("PIB per Capita---------[6]\n");
    printf("\n");
    printf("Digite a opção do segundo atributo de comparação: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        //Compara pela População
        printf("Comparação de cartas (Atributo: População):\n");

        printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);

        printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (populacao1 > populacao2) {
            //printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo2 = 1;
            carta2Atributo2 = 0;

        } else if (populacao1 < populacao2) {
            //printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo2 = 0;
            carta2Atributo2 = 1;
        } else {
            //printf("Houve um empate!\n");
            carta1Atributo2 = 0;
            carta2Atributo2 = 0;
        }
        break;
    
    case 2:
        //Compara pela Área
        printf("Comparação de cartas (Atributo: Área):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, area1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, area2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (area1 > area2) {
            //printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo2 = 1;
            carta2Atributo2 = 0;
        } else if (area1 < area2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo2 = 0;
            carta2Atributo2 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo2 = 0;
            carta2Atributo2 = 0;
        }
        break;
    
    case 3:
        //Compara pelo PIB
        printf("Comparação de cartas (Atributo: PIB):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pib1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pib2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (pib1 > pib2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo2 = 1;
            carta2Atributo2 = 0;
        } else if (pib1 < pib2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo2 = 0;
            carta2Atributo2 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo2 = 0;
            carta2Atributo2 = 0;
        }
        break;
    
    case 4:
        //Compara pelos Pontos Turísticos
        printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");

        printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, pontosTuristicos1);

        printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, pontosTuristicos2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (pontosTuristicos1 > pontosTuristicos2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo2 = 1;
            carta2Atributo2 = 0;
        } else if (pontosTuristicos1 < pontosTuristicos2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo2 = 0;
            carta2Atributo2 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo2 = 0;
            carta2Atributo2 = 0;
        }
        break;
    
    case 5:
        //Compara pela Densidade Populacional
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, densidadePopulacional1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, densidadePopulacional2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (densidadePopulacional1 < densidadePopulacional2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo2 = 1;
            carta2Atributo2 = 0;
        } else if (densidadePopulacional1 > densidadePopulacional2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo2 = 0;
            carta2Atributo2 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo2 = 0;
            carta2Atributo2 = 0;
        }
        break;
    
    case 6:
        //Compara pelo PIB per Capita
        printf("Comparação de cartas (Atributo: PIB per Capita):\n");

        printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);

        printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapita2);

        printf("\n");
        
        // Exibição dos Resultados:
        // Após realizar as comparações, exibe os resultados para o usuário.
        if (pibPerCapita1 > pibPerCapita2) {
           // printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
            carta1Atributo2 = 1;
            carta2Atributo2 = 0;
        } else if (pibPerCapita1 < pibPerCapita2) {
           // printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
            carta1Atributo2 = 0;
            carta2Atributo2 = 1;
        } else {
           // printf("Houve um empate!\n");
            carta1Atributo2 = 0;
            carta2Atributo2 = 0;
        }
        break;
    
    default:
        break;
    }

    //Calcula o resultado
    resultadoCarta1 = carta1Atributo1 + carta1Atributo2;
    resultadoCarta2 = carta2Atributo1 + carta2Atributo2;

    if (resultadoCarta1 > resultadoCarta2)
    {
        printf("Resultado: Carta 1 - %s (%s) venceu!\n", nomeCidade1, estado1);
    } else if (resultadoCarta1 < resultadoCarta2) {
        printf("Resultado: Carta 2 - %s (%s) venceu!\n", nomeCidade2, estado2);
    } else {
        printf("Houve um empate!\n");
    }
    
    return 0;
}
