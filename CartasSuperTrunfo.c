#include <stdio.h>
int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pop1;
    float area1;
    float pib1;
    int pontos1;

    printf("Carta 1\n");
    printf("Estado (ex: A): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Cidade: ");
    scanf(" %s", cidade1);
    printf("Populacao: ");
    scanf("%d", &pop1);
    printf("Area em km2: ");
    scanf("%f", &area1);
    printf("PIB em bilhoes: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pop2;
    float area2;
    float pib2;
    int pontos2;

    printf("\nCarta 2\n");
    printf("Estado (ex: B): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Cidade: ");
    scanf(" %s", cidade2);
    printf("Populacao: ");
    scanf("%d", &pop2);
    printf("Area em km2: ");
    scanf("%f", &area2);
    printf("PIB em bilhoes: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Mostrando as cartas
    printf("\n--- Suas Cartas ---\n");
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Pop: %d\n", pop1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos: %d\n", pontos1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Pop: %d\n", pop2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos: %d\n", pontos2);

    return 0;
    
