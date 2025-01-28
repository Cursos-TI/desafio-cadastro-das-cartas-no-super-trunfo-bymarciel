#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar os dados da cidade
    char estado;
    int cidade;
    long populacao;
    float area, pib;
    int pontos_turismo;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao Sistema de Cadastro de Cartas do Jogo Super Trunfo!\n");

    // Cadastrar dados da cidade
    printf("Digite o estado da cidade (letra A-H): ");
    scanf(" %c", &estado);  // O espaço antes de %c é para garantir a leitura correta do caractere.

    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade);

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turismo);

    // Exibir os dados cadastrados
    printf("\n--- Dados da Cidade ---\n");
    printf("Código da Carta: %c%02d\n", estado, cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turismo);

    return 0;
}
