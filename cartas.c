#include <stdio.h>

int main()
{
    char estado;
    int cartaCod, populacao, NPT; // NPT = Número de Pontos Turisticos
    char cidade[50];
    float PIB, area, DP, PIBC, SPD; //DP = densidade populacional PIBC = PIB per Capita SPD = super poder
       printf("Você foi selecionado para escolher as Duas Novas cartas do jogo Super Trunfo\n");

    printf("\nAgora para começarmos, escolha a classificação do estado de A até H: ");
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

    DP = populacao / area;
    PIBC = PIB / populacao;

    SPD = populacao + area + PIB + NPT + PIBC + (1.0 / DP);

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
    printf("Super Poder: %.2f\n", SPD);

    char estado1;
    int cartaCod1, populacao1, NPT1;
    char cidade1[50];
    float PIB1,area1, DP1, PIBC1, SPD1;

    printf("\nAgora a segunda carta, escolha a classificação do estado de A até H: ");
    scanf(" %c", &estado1);

    printf("Escolha o código da carta de 1 a 4: ");
    scanf("%d", &cartaCod1);

    printf("Escolha a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &NPT1);

    printf("\nAnalisando...\n");

    DP1 = populacao1 / area1;
    PIBC1 = PIB1 / populacao1;

    SPD1 = populacao1 + area1 + PIB1 + NPT1 + PIBC1 + (1.0 / DP1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%02d\n", estado1, cartaCod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fkm²\n", area1);
    printf("PIB: R$%.2fbilhoes de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NPT1);
    printf("Densidade Populacional: %.2fhab/km²\n", DP1);
    printf("PIB per capita: %.2f reais\n", PIBC1);
    printf("Super Poder: %.2f\n", SPD1);
    
    printf("\nAgora vamos comparar suas duas novas cartas, sendo correspondente ao seus valores.\n Regras simples, estamos comparando a primeira carta (Esquerda) e a segunda carta (Direita) sendo assim, se na frente for 0 a carta1 ganhou, se for 1 a carta2 ganhou \n");
    printf("População: %d\n", populacao > populacao1);
    printf("Área: %.2f\n", area > area1);
    printf("PIB: %.2\n", PIB > PIB1);
    printf("Numero de Pontos Turisticos: %d\n", NPT > NPT1);
    printf("Densidade Populacional (Menor ganha): %d\n", DP < DP1);
    printf("PIB per Capita: %.2f\n", PIBC > PIBC1);
    printf("Super Poder: %d\n", SPD > SPD1);

    return 0;
}