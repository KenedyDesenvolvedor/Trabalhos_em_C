#include <stdio.h>
int main()
{
    char estado;
    char cidade[50];
    int cod;
    int populacao, NPT; //npt=num de pontos turisticos
    float area, PIB, DP, PIBC;//dp = densidade populacional // PIBC = pib per capita

    printf("Atualização do nosso Sitema de cartas onde Você foi selecionado. Vamos começar?\n");
    printf("Escolha a classificação do atributo de A até H: ");
    scanf("%c", &estado);

    printf("Escolha o código de 1 a 4: ");
    scanf("%d", &cod);

    printf("Escolha a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Digite o numero de pontos Túristicos: ");
    scanf("%d", &NPT);

    printf("\nAnalisando...\n");

    DP = populacao /area;
    PIBC = PIB / populacao;

    printf("\nCarta 1 Cadastrada.\n");

    char estado1[5];
    char cidade1[50];
    int cod1;
    int populacao1, NPT1; //npt=num de pontos turisticos
    float area1, PIB1, DP1, PIBC1;//dp = densidade populacional // PIBC = pib per capita

    printf("\nAgora a Carta 2\n");
    printf("Escolha a classificação do atributo de A até H: ");
    scanf("%s", &estado1);

    printf("Escolha o código de 1 a 4: ");
    scanf("%d", &cod1);

    printf("Escolha a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o numero de pontos Túristicos: ");
    scanf("%d", &NPT1);

    printf("\nAnalisando...\n");

    DP1 = populacao1 /area1;
    PIBC1 = PIB1 / populacao1;

    printf("\nCarta 2 Cadastrada.\n");
    printf("VAMOS COMEÇAR COM POPULAÇÃO: "); //Comparando população
    if(populacao > populacao1)
    {
        printf("Carta 1 venceu\n");
    }
    else if (populacao == populacao1)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Carta 2 venceu\n");
    }
    printf("AREA: "); //Comparando area
    if(area > area1)
    {
        printf("Carta 1 venceu\n");
    }
    else if (area == area1)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Carta 2 venceu\n");
    }
    printf("PIB: "); //Comparando PIB
    if(PIB > PIB1)
    {
        printf("Carta 1 venceu\n");
    }
    else if (PIB == PIB1)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Carta 2 venceu\n");
    }
    printf("Numero de Pontos Turisticos: "); //Comparando NPT
    if(NPT >= NPT1)
    {
        if(NPT > NPT1)
        {printf("Carta 1 venceu\n");}
        printf("Empate\n");
    }
    else
    {
        printf("Carta 2 venceu\n");
    }
    printf("Densidade Populacional (Menor ganha): ");//comparando dp
    if(DP < DP1)
    {
        printf("Carta 1 venceu\n");
    }
    else if (DP == DP1)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Carta 2 venceu\n");
    }
    printf("PIB per Capita: "); //Comparando PIBC
    if(PIBC > PIBC1)
    {
        printf("Carta 1 venceu\n");
    }
    else if (PIBC == PIBC1)
    {
        printf("Empate\n");
    }
    else
    {
        printf("Carta 2 venceu\n");
    }
}
