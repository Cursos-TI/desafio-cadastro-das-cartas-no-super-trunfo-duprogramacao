#include <stdio.h>
int main(){
    //Passo 1 - O sistema pede ao usuário dados
    char letra;
    char nomeestado[100];
    int populacao;
    int area;
    int pib;
    int turistico;

    printf("(;´･ω･) DESAFIO CARTAS DE SUPER TRUNFO (;´･ω･)\n");

    printf("Insira o caractere do estado: \n");
    scanf("%c", &letra);

    printf("Insira o nome do estado: \n");
    scanf("%s", nomeestado);

    printf("Insira a população do estado: \n");
    scanf("%d", &populacao);

    printf("Insira a área do estado: \n");
    scanf("%d", &area);

    printf("Insira o PIB: \n");
    scanf("%d", &pib);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico);

    printf("Caractere: %c\n", letra);
    printf("Nome: %s\n", nomeestado);
    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos turistícos: %d\n", turistico);

    //Cálculo de PIB Per Capta
    float pibpercapta = (float) pib / populacao;
    printf("PIB Per Capta: %.2f\n", pibpercapta);

    //Cálculo de densidade populacional
    float densidade = (float) populacao / area;
    printf("Densidade populacional: %.2f\n", densidade);




    return 0;

}