#include <stdio.h>
#include <ctype.h>

int main() {
    // Carta 1
    char estado1, nomecidade1[50], codigo1[10];
    float area1, pib1, densidadePopulacional1, PibPerCapita1;
    int pturisticos1;
    unsigned long int populacao1;

    // Carta 2
    char estado2, nomecidade2[50], codigo2[10];
    float area2, pib2, densidadePopulacional2, PibPerCapita2;
    int pturisticos2;
    unsigned long int populacao2;

    // Entrada Carta 1
    printf("Dados da carta 1\n");

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    while (estado1 < 'A' || estado1 > 'H') {
        printf("Valor inválido! Digite uma letra de A a H: ");
        scanf(" %c", &estado1);
        estado1 = toupper(estado1);
    }

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    getchar(); // limpa ENTER
    
    printf("Nome da cidade: ");
    fgets(nomecidade1, 50, stdin);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pturisticos1);

    // Entrada Carta 2
    printf("\nDados da carta 2\n");
    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);
    while (estado2 < 'A' || estado2 > 'H') {
        printf("Valor inválido! Digite uma letra de A a H: ");
        scanf(" %c", &estado2);
        estado2 = toupper(estado2);
    }

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    getchar(); // limpa ENTER
    printf("Nome da cidade: ");
    fgets(nomecidade2, 50, stdin);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pturisticos2);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    PibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais
    PibPerCapita2 = (pib2 * 1000000000) / populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + pturisticos1 + PibPerCapita1 + (1.0f / densidadePopulacional1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pturisticos2 + PibPerCapita2 + (1.0f / densidadePopulacional2);

    // Impressão dados Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %sNome da Cidade: %s", estado1, codigo1, nomecidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao1, area1, pib1, pturisticos1);
    printf("Densidade Populacional: %.2f\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n", densidadePopulacional1, PibPerCapita1, superPoder1);

    // Impressão dados Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\nCódigo: %sNome da Cidade: %s", estado2, codigo2, nomecidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\n", populacao2, area2, pib2, pturisticos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n", densidadePopulacional2, PibPerCapita2, superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pturisticos1 > pturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PibPerCapita1 > PibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}