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
    int escolha;

    printf("Vamos começar o jogo:\n");
    printf("Escolha qual atributo comparar:\n1.Area: \n2.Densidade Populacional: \n3.Numero de pontos Turisticos: \n4.PIB: \n5.PIB per Capita: \n6.População:\n");
    scanf("%d", &escolha);
    switch(escolha)
    {
        case 1:
            printf("1.AREA: "); //Comparando area
            if(area > area1)
            {
                printf("Carta 1 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nÁrea: %.2f",estado, cod, cidade, area);
            }
            else if (area == area1)
            {
                printf("Empate\n");
                printf("Área Carta 1: %.2f Área Carta 2: %.2f",area, area1);
            }
            else
            {
                printf("Carta 2 venceu\n");
                printf("Codigo: %s%02d: \nNome: %s\nÁrea: %.2f",estado1, cod1, cidade1, area1);
            }
            break;
        case 2:
            printf("Densidade Populacional (Menor ganha): \n");//comparando dp
            if(DP < DP1)
            {
                printf("Carta 1 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nDensidade Populacional: %.2f",estado, cod, cidade, DP);
            }
            else if (DP == DP1)
            {
                printf("Empate\n");
            }
            else
            {
                printf("Carta 2 venceu\n");
                printf("Codigo: %s%02d: \nNome: %s\nDensidade Populacional: %.2f",estado1, cod1, cidade1, DP1);
            }
            break;
        case 3:
            printf("Numero de Pontos Turisticos: "); //Comparando NPT
            if(NPT >= NPT1)
            {
                printf("Carta 1 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nNumero de Pontos Turisticos: %d",estado, cod, cidade, NPT);
            }
            else if (NPT == NPT1)
            {
                printf("Empate\n");
            }
            else
            {
                printf("Carta 2 venceu\n");
                printf("Codigo: %s%02d: \nNome: %s\nNumero de Pontos Turisticos: %d",estado1, cod1, cidade1, NPT1);
            }
            break;
        case 4:
            printf("PIB: "); //Comparando PIB
            if(PIB > PIB1)
            {
                printf("Carta 1 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nPIB: %.2f",estado, cod, cidade, PIB);
            }
            else if (PIB == PIB1)
            {
                printf("Empate\n");
            }
            else
            {
                printf("Carta 2 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nPIB: %.2f",estado, cod, cidade, PIB1);
            }
            break;
        case 5:
            printf("PIB per Capita: "); //Comparando PIBC
            if(PIBC > PIBC1)
            {
                printf("Carta 1 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nPIB per Capita: %.2f",estado, cod, cidade, PIBC);
            }
            else if (PIBC == PIBC1)
            {
                printf("Empate\n");
            }
            else
            {
                printf("Carta 2 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nPIB per Capita: %.2f",estado1, cod1, cidade1, PIBC1);
            }
            break;
        case 6:
            if(populacao > populacao1) //Comparando população
            {
                printf("Carta 1 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nPopulação: %d",estado, cod, cidade, populacao);
            }
            else if (populacao == populacao1)
            {
                printf("Empate\n");
            }
            else
            {
                printf("Carta 2 venceu\n");
                printf("Codigo: %c%02d: \nNome: %s\nPopulação: %d",estado1, cod1, cidade1, populacao1);
            }   
            break;
        default:
            printf("Opção invalida");
            break;
    }
}
