#include <stdio.h>

int main() {
    // Variáveis das cartas (Simplificado para o exemplo)
    char pais1[] = "Brasil", pais2[] = "Argentina";
    int pop1 = 214300000, pop2 = 45810000;
    float area1 = 8515767.0, area2 = 2780400.0;
    float densidade1 = 25.16, densidade2 = 16.48;
    int opcao;

    // --- Menu Interativo ---
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparação ---\n");

    switch(opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d vs %s: %d\n", pais1, pop1, pais2, pop2);
            if (pop1 > pop2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pop2 > pop1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: 
            printf("Atributo: Área\n");
            printf("%s: %.2f vs %s: %.2f\n", pais1, area1, pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: 
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f vs %s: %.2f\n", pais1, densidade1, pais2, densidade2);
      
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Menor densidade)\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Menor densidade)\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}