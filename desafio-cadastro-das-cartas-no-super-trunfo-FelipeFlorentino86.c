#include <stdio.h>

int main() {
    // Estrutura para armazenar os dados da carta
    char codigo1[4] = "A01";
    int populacao1 = 1000000;
    float area1 = 550.5;
    float pib1 = 20000.75;
    int pontos_turisticos1 = 50;

    char codigo2[4] = "B02";
    int populacao2 = 2000000;
    float area2 = 3000.0;
    float pib2 = 50000.00;
    int pontos_turisticos2 = 100;

    // Exibição dos dados
    printf("\n--- Dados da primeira carta ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
