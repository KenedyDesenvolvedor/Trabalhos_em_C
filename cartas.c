#include <stdio.h>

int main() {
    char estado;
    int cartaCod, populacao, NPT; //Número de Pontos Turisticos
    char cidade[50];
    float PIB, area;

    printf("Você foi selecionado para escolher as Duas Novas cartas do jogo Super Trunfo\n");

    printf("Agora para começarmos, escolha a classificação do estado de A até H: ");
    scanf(" %c", &estado);

    printf("Escolha o código da carta de 1 a 4: ");
    scanf("%d", &cartaCod);

    printf("Escolha a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &NPT);

    printf("\nAnalisando...\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%02d\n", estado, cartaCod);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);

    printf("Agora a segunda carta, escolha a classificação do estado de A até H: ");
    scanf(" %c", &estado);

    printf("Escolha o código da carta de 1 a 4: ");
    scanf("%d", &cartaCod);

    printf("Escolha a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &NPT);

    printf("\nAnalisando...\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%02d\n", estado, cartaCod); 
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);

    return 0;
}