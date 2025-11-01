#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Entrada de dados para Carta 1
    printf("=== CADASTRO CARTA 1 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código da carta (ex: A01): ");
    scanf("%3s", codigo1);
    
    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = 0; // Remove o \n do final
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Entrada de dados para Carta 2
    printf("\n=== CADASTRO CARTA 2 ===\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código da carta (ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer do teclado
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0; // Remove o \n do final
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos resultados
    printf("\n=== CARTAS CADASTRADAS ===\n");
    
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}
