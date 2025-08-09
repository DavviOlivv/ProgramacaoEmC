#include <stdio.h>

int main() {

    // Declaração de variáveis Da Primeira carta

    char estado [3], codigoDaCarta[5],nomeDaCidade[21];
    int populacao, numerosDePontosTuristicos;
    float pib, areaEmKm, densidadePopulacional, pibPerCapita;

    printf("Digite uma letra de 'A' a 'H':  ");
    scanf(" %s", estado);
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (exemplo A01, B02): ");
    scanf(" %s", codigoDaCarta);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %s", nomeDaCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao);

    printf("Digite a area da cidade em Km: ");
    scanf(" %f", &areaEmKm);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);

    printf("Digite o numeros de pontos turisticos: ");
    scanf(" %d", &numerosDePontosTuristicos);

    // Calculando a Densidade Populacional e Pib Per Capita

    densidadePopulacional =  (float)populacao / (float) areaEmKm;

    pibPerCapita = (pib * 1000000000) / populacao;

    // Exibindo os Dados Da Primeira carta

    printf("\n-----Carta 1-----\n");

    printf("Estado: %s\n", estado);

    printf("Codigo: %s\n", codigoDaCarta);

    printf("Nome da cidade: %s\n", nomeDaCidade);

    printf("Populacao: %d\n", populacao);

    printf("Area: %.2f\n", areaEmKm);

    printf("PIB: %.2f\n", pib);

    printf("Numeros de pontos turisticos: %d\n", numerosDePontosTuristicos);

    printf("Densidade Populacional: %.2f\n", densidadePopulacional);

    printf("Pib Per Capita: %.2f\n", pibPerCapita);

    printf("");

    // Declaração de variáveis Da Segunda carta

    printf("");

    char estadoDaSegundaCarta[3], codigoDaSegundaCarta[5], nomeDaSegundaCidade[21];
    int segundaPopulacao, segundoNumerosDePontosTuristicos;
    float segundoPib, segundaAreaEmKm, segundaDensidadePopulacional, segundoPibPerCapita;

    printf("Digite uma letra de 'A' a 'H':  ");
    scanf(" %s", estadoDaSegundaCarta);
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (exemplo A01, B02): ");
    scanf(" %s", codigoDaSegundaCarta);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %s", nomeDaSegundaCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &segundaPopulacao);

    printf("Digite a area da cidade em Km: ");
    scanf(" %f", &segundaAreaEmKm);

    printf("Digite o PIB: ");
    scanf(" %f", &segundoPib);

    printf("Digite o numeros de pontos turisticos: ");
    scanf(" %d", &segundoNumerosDePontosTuristicos);


    // Calculando a Segunda Densidade Populacional e Pib Per Capita

    segundaDensidadePopulacional = (float) segundaPopulacao / segundaAreaEmKm;

    segundoPibPerCapita = (float) (segundoPib * 1000000000) / segundaPopulacao;

    // Exibindo os Dados Da Segunda carta

    printf("\n-----Carta 2-----\n");

    printf("Estado: %s\n", estadoDaSegundaCarta);

    printf("Codigo: %s\n", codigoDaSegundaCarta);

    printf("Nome da cidade: %s\n", nomeDaSegundaCidade);

    printf("Populacao: %d\n", segundaPopulacao);

    printf("Area: %.2f\n", segundaAreaEmKm);

    printf("PIB: %.2f\n", segundoPib);

    printf("Numeros de pontos turisticos: %d\n", segundoNumerosDePontosTuristicos);

    printf("Densidade Populacional: %.2f\n", segundaDensidadePopulacional);

    printf("Pib Per Capita: %.2f\n", segundoPibPerCapita);

    return 0;
}