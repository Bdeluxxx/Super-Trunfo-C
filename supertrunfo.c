#include <stdio.h>


#define MAX_CODIGO 5 // Ex: A01 + '\0' (terminador)
#define MAX_CIDADE 50 // Nome da cidade

int main() {
    // ---------------------------------------------
    // 1. DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 1
    // ---------------------------------------------
    char estado1;
    char codigo_carta1[MAX_CODIGO];
    char nome_cidade1[MAX_CIDADE];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // 2. DECLARAÇÃO DE VARIÁVEIS PARA A CARTA 2

    char estado2;
    char codigo_carta2[MAX_CODIGO];
    char nome_cidade2[MAX_CIDADE];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // ENTRADA DE DADOS - CARTA 1
  
    printf("==========================================\n");
    printf("CADASTRO CARTA 1 - INFORMACOES DA CIDADE\n");
    printf("==========================================\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo_carta1); 

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nome_cidade1);

    printf("População (habitantes): ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // ENTRADA DE DADOS - CARTA 2
    
    printf("\n==========================================\n");
    printf("CADASTRO CARTA 2 - INFORMACOES DA CIDADE\n");
    printf("==========================================\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: B03): ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nome_cidade2);

    printf("População (habitantes): ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // =============================================
    // EXIBIÇÃO DOS DADOS (SAÍDA FORMATADA)
    // =============================================
    printf("\n\n==========================================\n");
    printf("RESUMO DO CADASTRO SUPER TRUNFO\n");
    printf("==========================================\n");

    // Exibicao da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    // Usando '%.2f' para garantir duas casas decimais na exibição da Área e PIB
    printf("Área (em km²): %.2f km²\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    // Exibicao da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f km²\n", area2); 
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    printf("==========================================\n");

    return 0; 
}