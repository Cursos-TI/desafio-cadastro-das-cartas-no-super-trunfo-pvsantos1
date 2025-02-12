#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado;
    char codigo_carta[10];
    char nome_cidade[50];
    int populacao, numero_pontos_turisticos;
    float area, PIB;
    float densidade_populacional, PIB_per_capita;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Estado (A a H): ");
    scanf("%c", &estado);

    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo_carta);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Área (km²): ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Número de pontos turisticos: ");
    scanf("%d", &numero_pontos_turisticos);

    // Cálculo das novas propriedades
    densidade_populacional = populacao / area;
    PIB_per_capita = (PIB * 1000) / (float) populacao;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.1f bilhões\n", PIB);
    printf("Pontos turisticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f km²\n", densidade_populacional);
    printf("PIB per capita: %.2f milhões\n", PIB_per_capita);

    return 0;
}
