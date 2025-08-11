#include <stdio.h>

int main() {

    // Declaração de variáveis Da Primeira carta

    char estado [3], codigoDaCarta[5],nomeDaCidade[21];
    int numerosDePontosTuristicos;
    float pib, areaEmKm, densidadePopulacional, pibPerCapita;
    unsigned long int populacao;

    printf("Digite uma letra de 'A' a 'H':  ");
    scanf(" %s", estado);
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (exemplo A01, B02): ");
    scanf(" %s", codigoDaCarta);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %s", nomeDaCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %lu", &populacao);

    printf("Digite a area da cidade em Km: ");
    scanf(" %f", &areaEmKm);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);

    printf("Digite o numeros de pontos turisticos: ");
    scanf(" %d", &numerosDePontosTuristicos);

    // Calculando a Densidade Populacional e Pib Per Capita

    densidadePopulacional =  (float)populacao / (float) areaEmKm;

    pibPerCapita = (pib * 1000000000) / populacao;

    // Calculando Super Poder

    float superPoder, inversoDaDensidadePopulacional;

    inversoDaDensidadePopulacional = 1.0 / densidadePopulacional;

    superPoder = (float) populacao + areaEmKm + pib + numerosDePontosTuristicos + pibPerCapita + inversoDaDensidadePopulacional;

    // Exibindo os Dados Da Primeira carta

    printf("\n-----Carta 1-----\n");

    printf("Estado: %s\n", estado);

    printf("Codigo: %s\n", codigoDaCarta);

    printf("Nome da cidade: %s\n", nomeDaCidade);

    printf("Populacao: %lu\n", populacao);

    printf("Area: %.2f\n", areaEmKm);

    printf("PIB: %.2f\n", pib);

    printf("Numeros de pontos turisticos: %d\n", numerosDePontosTuristicos);

    printf("Densidade Populacional: %.2f\n", densidadePopulacional);

    printf("Pib Per Capita: %.2f\n", pibPerCapita);

    printf("");

    // Declaração de variáveis Da Segunda carta

    printf("");

    char estadoDaSegundaCarta[3], codigoDaSegundaCarta[5], nomeDaSegundaCidade[21];
    int segundoNumerosDePontosTuristicos;
    float segundoPib, segundaAreaEmKm, segundaDensidadePopulacional, segundoPibPerCapita;
    unsigned long int segundaPopulacao;

    printf("Digite uma letra de 'A' a 'H':  ");
    scanf(" %s", estadoDaSegundaCarta);
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (exemplo A01, B02): ");
    scanf(" %s", codigoDaSegundaCarta);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %s", nomeDaSegundaCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %lu", &segundaPopulacao);

    printf("Digite a area da cidade em Km: ");
    scanf(" %f", &segundaAreaEmKm);

    printf("Digite o PIB: ");
    scanf(" %f", &segundoPib);

    printf("Digite o numeros de pontos turisticos: ");
    scanf(" %d", &segundoNumerosDePontosTuristicos);


    // Calculando a Segunda Densidade Populacional e Pib Per Capita

    segundaDensidadePopulacional = (float) segundaPopulacao / segundaAreaEmKm;

    segundoPibPerCapita = (float) (segundoPib * 1000000000) / segundaPopulacao;

    // Calculando o Segundo Super Poder
    float segundoSuperPoder, inversoDaSegundaDensidadePopulacional;
    
    inversoDaSegundaDensidadePopulacional = 1.0 / segundaDensidadePopulacional;

    segundoSuperPoder = (float) segundaPopulacao + segundaAreaEmKm + segundoPib + segundoNumerosDePontosTuristicos + segundoPibPerCapita + inversoDaSegundaDensidadePopulacional;

    // Exibindo os Dados Da Segunda carta

    printf("\n-----Carta 2-----\n");

    printf("Estado: %s\n", estadoDaSegundaCarta);

    printf("Codigo: %s\n", codigoDaSegundaCarta);

    printf("Nome da cidade: %s\n", nomeDaSegundaCidade);

    printf("Populacao: %lu\n", segundaPopulacao);

    printf("Area: %.2f\n", segundaAreaEmKm);

    printf("PIB: %.2f\n", segundoPib);

    printf("Numeros de pontos turisticos: %d\n", segundoNumerosDePontosTuristicos);

    printf("Densidade Populacional: %.2f\n", segundaDensidadePopulacional);

    printf("Pib Per Capita: %.2f\n", segundoPibPerCapita);

    printf("");

    // Comparando as Cartas e Exibindo o Resultado

    printf("Comparação de Cartas:\n");

    if (populacao > segundaPopulacao)
    {
    printf("Populacao: Carta 1 venceu (1)\n");
   } else
   {
    printf("Populacao: Carta 2 venceu (0)\n");
   }

   if (areaEmKm > segundaAreaEmKm)
   {
    printf("Area: Carta 1 venceu (1)\n");
   } else
   {
    printf("Area: Carta 2 venceu (0)\n");
   }

    if (pib > segundoPib)
   {
    printf("PIB: Carta 1 venceu (1)\n");
   } else
   {
    printf("PIB: Carta 2 venceu (0)\n");
   }

   if (numerosDePontosTuristicos > segundoNumerosDePontosTuristicos)
   {
    printf("Pontos Turisticos: Carta 1 venceuu (1)\n");
   } else
   {
    printf("Pontos Turisticos: Carta 2 venceuu (0)\n");
   }
   
   if (densidadePopulacional < segundaDensidadePopulacional)
   {
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
   } else
   {
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
   }
   
   if (pibPerCapita > segundoPibPerCapita)
   {
    printf("PIB per Capita: Carta 1 venceu (1)\n");
   } else
   {
    printf("PIB per Capita: Carta 2 venceu (0)\n");
   }

   if (superPoder > segundoSuperPoder)
    {
    printf("Super Poder: Carta 1 venceu (1)\n");
   } else
   {
    printf("Super Poder: Carta 2 venceu (0)\n");
   }
   
    return 0;
}
