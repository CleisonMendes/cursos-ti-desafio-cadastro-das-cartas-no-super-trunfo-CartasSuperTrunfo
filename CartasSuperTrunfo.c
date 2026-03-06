#include <stdio.h>

int main() {
    // --- VARIÁVEIS CARTA 1 ---
    char estado1[50]; 
    char codigo1[20];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // --- VARIÁVEIS CARTA 2 ---
    char estado2[50]; 
    char codigo2[20];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // --- ENTRADA DE DADOS (CARTA 1) ---
    printf("=== Cadastro da Carta 01 ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1); 

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- ENTRADA DE DADOS (CARTA 2) ---
    printf("\n=== Cadastro da Carta 02 ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- EXIBIÇÃO CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1); 
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // --- EXIBIÇÃO CARTA 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

