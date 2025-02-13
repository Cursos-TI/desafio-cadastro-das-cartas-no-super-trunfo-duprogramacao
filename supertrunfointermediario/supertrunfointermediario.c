#include <stdio.h>
int main(){
    //Passo 1 - O sistema pede ao usuário dados
    char nome;
    int populacao;
    int area;
    int pib;
    int turistico;

    printf("(;´･ω･) DESAFIO CARTAS DE SUPER TRUNFO\n");

    printf("Insira o nome do estado: \n");
    scanf("%s", &nome);

    printf("Insira a população do estado: \n");
    scanf("%d", &populacao);

    printf("Insira a área do estado: \n");
    scanf("%d", &area);

    printf("Insira o PIB: \n");
    scanf("%d", &pib);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico);

    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos turistícos: %d\n", turistico);

    //Cálculo de PIB Per Capta
    float pibpercapta = (float) pib / populacao;
    printf("PIB Per Capta: %.2f", pibpercapta);





    return 0;

}