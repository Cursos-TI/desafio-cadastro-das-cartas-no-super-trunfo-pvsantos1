#include <stdio.h>
#include <string.h>

int main() {
    //  Declaração das variáveis para as duas cartas
    char estado1, estado2;
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, PIB1, PIB2;
    float densidade1, densidade2, PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;
    char *vencedor;

    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo_carta1);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("População da cidade: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo_carta2);
    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("População da cidade: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos das propriedades
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    PIB_per_capita1 = PIB1 / populacao1;
    PIB_per_capita2 = PIB2 / populacao2;

    // Cálculo do Super Poder (soma de todas as propriedades)
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + densidade1 + PIB_per_capita1;
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + densidade2 + PIB_per_capita2;

    // Exibição dos dados das cartas
    printf("\n--- Comparação de Cartas ---\n");
    
    // Comparação de Densidade Populacional (Menor valor vence)
    vencedor = nome_cidade1;
    vencedor += (densidade1 > densidade2) * (nome_cidade2 - nome_cidade1);
    printf("Densidade Populacional: Vencedor -> %s\n", vencedor);

    // Comparação de População (Maior valor vence)
    vencedor = nome_cidade1;
    vencedor += (populacao1 < populacao2) * (nome_cidade2 - nome_cidade1);
    printf("População: Vencedor -> %s\n", vencedor);

    // Comparação de Área (Maior valor vence)
    vencedor = nome_cidade1;
    vencedor += (area1 < area2) * (nome_cidade2 - nome_cidade1);
    printf("Área: Vencedor -> %s\n", vencedor);

    // Comparação de PIB (Maior valor vence)
    vencedor = nome_cidade1;
    vencedor += (PIB1 < PIB2) * (nome_cidade2 - nome_cidade1);
    printf("PIB: Vencedor -> %s\n", vencedor);

    // Comparação de Pontos Turísticos (Maior valor vence)
    vencedor = nome_cidade1;
    vencedor += (pontos_turisticos1 < pontos_turisticos2) * (nome_cidade2 - nome_cidade1);
    printf("Pontos Turísticos: Vencedor -> %s\n", vencedor);

    // Comparação de PIB per Capita (Maior valor vence)
    vencedor = nome_cidade1;
    vencedor += (PIB_per_capita1 < PIB_per_capita2) * (nome_cidade2 - nome_cidade1);
    printf("PIB per Capita: Vencedor -> %s\n", vencedor);

    // Comparação de Super Poder (Maior valor vence)
    vencedor = nome_cidade1;
    vencedor += (super_poder1 < super_poder2) * (nome_cidade2 - nome_cidade1);
    printf("Super Poder: Vencedor -> %s\n", vencedor);

    return 0;
}