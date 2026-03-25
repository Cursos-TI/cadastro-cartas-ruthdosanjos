#include <stdio.h>
#include <ctype.h> // para toupper()

int main (){

    // 🔹 Variáveis da Carta 1
    char estado1, nomecidade1[50], codigo1[10];
    float area1, pib1;
    int populacao1, pturisticos1;

    // 🔹 Variáveis da Carta 2
    char estado2, nomecidade2[50], codigo2[10];
    float area2, pib2;
    int populacao2, pturisticos2;

    // =========================
    // ENTRADA DE DADOS CARTA 1
    // =========================
    printf("Dados da carta 1\n");

    // 🔹 Estado com validação (A–H)
    printf("\nDigite o estado (A a H): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    while (estado1 < 'A' || estado1 > 'H') {
        printf("Valor inválido! Digite uma letra de A a H: ");
        scanf(" %c", &estado1);
        estado1 = toupper(estado1);
    }

    // 🔹 Código da carta
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    getchar(); // limpa o ENTER do buffer

    // 🔹 Nome da cidade (com espaço)
    printf("Digite o nome da cidade: ");
    fgets(nomecidade1, 50, stdin);

    // 🔹 População
    printf("População: ");
    scanf("%d", &populacao1);

    // 🔹 Área
    printf("Área: ");
    scanf("%f", &area1);

    // 🔹 PIB
    printf("PIB: ");
    scanf("%f", &pib1);

    // 🔹 Pontos turísticos
    printf("Número de pontos turísticos: ");
    scanf("%d", &pturisticos1);


    // =========================
    // ENTRADA DE DADOS CARTA 2
    // =========================
    printf("\n\nDados da carta 2\n");

    printf("\nDigite o estado (A a H): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    while (estado2 < 'A' || estado2 > 'H') {
        printf("Valor inválido! Digite uma letra de A a H: ");
        scanf(" %c", &estado2);
        estado2 = toupper(estado2);
    }

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    getchar(); // limpa buffer

    printf("Nome da cidade: ");
    fgets(nomecidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pturisticos2);


    // =========================
    // SAÍDA 
    // =========================

    printf("\n\nCarta 1:\n\n");
    printf("Estado: %c\n\n", estado1);
    printf("Código: %s\n\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n\n", populacao1);
    printf("Área: %.2f km²\n\n", area1);
    printf("PIB: %.2f bilhões de reais \n\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);

    printf("\n\nCarta 2:\n\n");
    printf("Estado: %c\n\n", estado2);
    printf("Código: %s\n\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n\n", populacao2);
    printf("Área: %.2f km²\n\n", area2);
    printf("PIB: %.2f bilhões de reais\n\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);

    return 0;
}