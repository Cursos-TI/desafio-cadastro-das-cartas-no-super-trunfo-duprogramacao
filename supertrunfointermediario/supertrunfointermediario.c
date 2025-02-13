#include <stdio.h>
int main(){
    //Passo 1 - O sistema pede ao usuário dados
    int populacao;
    int area;
    int pib;
    int turistico;

    printf("Insira a população do estado: \n");
    scanf("%d", &populacao);

    printf("Insira a área do estado: \n");
    scanf("%d", &area);

    printf("Insira o PIB: \n");
    scanf("%d", &pib);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &turistico);

    printf("População: %d\n", populacao);
    printf("Área: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos turistícos: %d\n", turistico);

    float pibpercapta = (float) pib / populacao;
    printf("PIB Per Capta: %.2f", pibpercapta);





    return 0;

}