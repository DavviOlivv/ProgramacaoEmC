#include <stdio.h>

int main() {
    
    /*
Sobre os tipos usados:

- populacao: usei unsigned long int porque população é um número inteiro grande e não pode ser negativo.
- pib, area, densidade, pibPerCapita e superPoder: usei double porque esses valores podem ter casas decimais e precisam ser precisos.
- numerosDePontosTuristicos: usei int porque é um número inteiro pequeno.
- nos scanf, uso %lu para populacao e %lf para double, que é o jeito correto.
- limite o tamanho das strings para evitar erro se o usuário digitar muita coisa.

Assim o programa calcula certo e evita problemas com números grandes ou pequenos demais.
*/

    // ---------- PRIMEIRA CARTA ----------
    // Declaração das variáveis
    char estado[3], codigoDaCarta[5], nomeDaCidade[21];
    int numerosDePontosTuristicos;
    double pib, areaEmKm, densidadePopulacional, pibPerCapita;
    unsigned long int populacao;

    // Entrada de dados da primeira carta
    printf("Digite uma letra de 'A' a 'H':  ");
    scanf(" %2s", estado);
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (exemplo A01, B02): ");
    scanf(" %4s", codigoDaCarta);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %20s", nomeDaCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %lu", &populacao);

    printf("Digite a area da cidade em Km: ");
    scanf(" %lf", &areaEmKm);

    printf("Digite o PIB (valor absoluto): ");
    scanf(" %lf", &pib);

    printf("Digite o numeros de pontos turisticos: ");
    scanf(" %d", &numerosDePontosTuristicos);

    // Cálculo da densidade populacional: população / área
    densidadePopulacional = (double) populacao / areaEmKm;

    // Cálculo do PIB per capita: PIB / população
    pibPerCapita = pib / populacao;

    // Variáveis para cálculo do "Super Poder"
    double inversoDaDensidadePopulacional, superPoder;

    // Inverso da densidade para valorizar cidades menos populosas
    inversoDaDensidadePopulacional = 1.0 / densidadePopulacional;

    // Cálculo do super poder somando atributos
    superPoder = (double) populacao + areaEmKm + pib + numerosDePontosTuristicos + pibPerCapita + inversoDaDensidadePopulacional;

    // Exibição da primeira carta
    printf("\n-----Carta 1-----\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigoDaCarta);
    printf("Nome da cidade: %s\n", nomeDaCidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2lf\n", areaEmKm);
    printf("PIB: %.2lf\n", pib);
    printf("Numeros de pontos turisticos: %d\n", numerosDePontosTuristicos);
    printf("Densidade Populacional: %.2lf\n", densidadePopulacional);
    printf("Pib Per Capita: %.2lf\n", pibPerCapita);

    // ---------- SEGUNDA CARTA ----------
    char estadoDaSegundaCarta[3], codigoDaSegundaCarta[5], nomeDaSegundaCidade[21];
    int segundoNumerosDePontosTuristicos;
    double segundoPib, segundaAreaEmKm, segundaDensidadePopulacional, segundoPibPerCapita;
    unsigned long int segundaPopulacao;

    printf("\n----------------------------------------\n");

    // Entrada de dados da segunda carta
    printf("Digite uma letra de 'A' a 'H':  ");
    scanf(" %2s", estadoDaSegundaCarta);
    
    printf("Digite a letra do estado seguida de um numero de 01 a 04 (exemplo A01, B02): ");
    scanf(" %4s", codigoDaSegundaCarta);

    printf("Digite o nome da cidade (Sem espaços): ");
    scanf(" %20s", nomeDaSegundaCidade);

    printf("Digite a populacao da cidade: ");
    scanf(" %lu", &segundaPopulacao);

    printf("Digite a area da cidade em Km: ");
    scanf(" %lf", &segundaAreaEmKm);

    printf("Digite o PIB (valor absoluto): ");
    scanf(" %lf", &segundoPib);

    printf("Digite o numeros de pontos turisticos: ");
    scanf(" %d", &segundoNumerosDePontosTuristicos);

    // Cálculo da densidade populacional da segunda carta
    segundaDensidadePopulacional = (double) segundaPopulacao / segundaAreaEmKm;

    // Cálculo do PIB per capita da segunda carta
    segundoPibPerCapita = segundoPib / segundaPopulacao;

    // Variáveis para cálculo do super poder da segunda carta
    double inversoDaSegundaDensidadePopulacional, segundoSuperPoder;

    inversoDaSegundaDensidadePopulacional = 1.0 / segundaDensidadePopulacional;

    segundoSuperPoder = (double) segundaPopulacao + segundaAreaEmKm + segundoPib + segundoNumerosDePontosTuristicos + segundoPibPerCapita + inversoDaSegundaDensidadePopulacional;

    // Exibição da segunda carta
    printf("\n-----Carta 2-----\n");
    printf("Estado: %s\n", estadoDaSegundaCarta);
    printf("Codigo: %s\n", codigoDaSegundaCarta);
    printf("Nome da cidade: %s\n", nomeDaSegundaCidade);
    printf("Populacao: %lu\n", segundaPopulacao);
    printf("Area: %.2lf\n", segundaAreaEmKm);
    printf("PIB: %.2lf\n", segundoPib);
    printf("Numeros de pontos turisticos: %d\n", segundoNumerosDePontosTuristicos);
    printf("Densidade Populacional: %.2lf\n", segundaDensidadePopulacional);
    printf("Pib Per Capita: %.2lf\n", segundoPibPerCapita);

    printf("");

    // Comparando as Cartas e Saída de dados

    printf("Comparação de Cartas:\n");

    if (populacao > segundaPopulacao)
        printf("Populacao: Carta 1 venceu (1)\n");
    else
        printf("Populacao: Carta 2 venceu (0)\n");

    if (areaEmKm > segundaAreaEmKm)
        printf("Area: Carta 1 venceu (1)\n");
    else
        printf("Area: Carta 2 venceu (0)\n");

    if (pib > segundoPib)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    if (numerosDePontosTuristicos > segundoNumerosDePontosTuristicos)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    if (densidadePopulacional < segundaDensidadePopulacional)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    if (pibPerCapita > segundoPibPerCapita)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");

    if (superPoder > segundoSuperPoder)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");


    
    return 0;
}