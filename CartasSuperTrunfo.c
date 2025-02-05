#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cartas Super Trunfo\n");
    printf("Novo commit\n");
    
    char codigo;
    int populacao;
    int area;
    double pib;
    int pontosturisticos;

    printf("Digite o código da cidade: \n");
    scanf("%c", &codigo);
    
    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%d", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Código da cidade: %c\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %lf\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticos);


    return 0;
}
