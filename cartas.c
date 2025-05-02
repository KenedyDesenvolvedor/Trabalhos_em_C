#include <stdio.h>

int main() {
    char estado;
    int cartaCod, populacao, NPT; // NPT = Número de Pontos Turisticos
    char cidade[50];
    float PIB, area, DP, PIBC; //DP = densidade populacional PIBC = PIB per Capita

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

    DP = (float)(populacao/area);
    PIBC = (float)(PIB/populacao);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%02d\n", estado, cartaCod);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: R$%.2f bilhoes de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2fhab/km²\n", DP);
    printf("PIB per capita: %.2f reais\n", PIBC);

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

    DP = (float)(populacao/area);
    PIBC = (float)(PIB/populacao);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%02d\n", estado, cartaCod); 
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\nkm²", area);
    printf("PIB: R$%.2f\n bilhoes de reais", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2fhab/km²\n", DP);
    printf("PIB per capita: %.2f reais\n", PIBC);

    return 0;
}
