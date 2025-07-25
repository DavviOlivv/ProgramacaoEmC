#include <stdio.h>

int main() {

    // Declaração de variáveis
    char estado [2], codigoDaCarta[4],nomeDaCidade[20];
    int populacao, numerosDePontosTuristicos;
    float pib, areaEmKm;

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

    // Exibindo os Dados

    printf("\n-----Carta 1-----\n");

    printf("Estado: %s\n", estado);

    printf("Codigo: %s\n", codigoDaCarta);

    printf("Nome da cidade: %s\n", nomeDaCidade);

    printf("Populacao: %d\n", populacao);

    printf("Area: %.2f\n", areaEmKm);

    printf("PIB: %.2f\n", pib);

    printf("Numeros de pontos turisticos: %d\n", numerosDePontosTuristicos);


    return 0;
}