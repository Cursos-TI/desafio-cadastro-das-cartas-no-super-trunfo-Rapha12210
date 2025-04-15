#include <stdio.h>

int main() {
    
    //1ª Declarar as variáveis
    char estado[20], codigo[10], nome1 [50], nome2 [50], nome3 [50];
    int pontos_turisticos1 = 5;
    unsigned long int populacao1 = 10;
    float area1 = 20, PIB1 = 10, PIB_per_Capita1 = 10, Densidade_populacional1 = 10, Super_Poder1 = 10, inverso1;
    int pontos_turisticos2 = 5;
    unsigned long int populacao2 = 10;
    float area2 = 20, PIB2 = 10, PIB_per_Capita2 = 10, Densidade_populacional2 = 10, Super_Poder2 = 10, inverso2;
    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;

    printf("CADASTRO DE CARTA 01:\n \n");

    printf("Digite a letra  que representará o Estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s %s", nome1, nome2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos1);

    Densidade_populacional1 = (float) populacao1 / area1;
    PIB_per_Capita1 = PIB1 / populacao1;
    inverso1 = 1/Densidade_populacional1;
    Super_Poder1 = populacao1 + area1 + PIB1 + PIB_per_Capita1 + inverso1;

    printf("\nCarta 01:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s %s\n", nome1, nome2);
    printf("População:%d Habitantes\n", populacao1);
    printf("Área:%.2f Km²\n", area1);
    printf("PIB: R$ %f Bilhões de Reais\n", PIB1);
    printf("Número de Pontos turísticos:%d\n", pontos_turisticos1);
    printf("Densidade Populacional:%.2f Hab/km²\n", Densidade_populacional1);
    printf("PIB per Capita:%.2f Reais\n \n", PIB_per_Capita1);
    printf("Super Poder:%f\n\n\n", Super_Poder1);


    printf("CADASTRO DE CARTA 02:\n\n");

    printf("Digite a letra  que representará o Estado:\n");
    scanf("%s", estado);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s %s %s", nome1, nome2, nome3);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos2);

    Densidade_populacional2 = (float) populacao2 / area2;
    PIB_per_Capita2 = PIB2 / populacao2;
    inverso2 = 1/Densidade_populacional2;
    Super_Poder2 = populacao2 + area2 + PIB2 + PIB_per_Capita2 + inverso2;

    printf("\nCarta 02:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s %s %s\n", nome1, nome2, nome3);
    printf("População:%d Habitantes\n", populacao2);
    printf("Área:%.2f Km²\n", area2);
    printf("PIB: R$ %f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos turísticos:%d\n", pontos_turisticos2);
    printf("Densidade Populacional:%.2f Hab/km²\n", Densidade_populacional2);
    printf("PIB per Capita:%.2f Reais\n \n", PIB_per_Capita2);
    printf("Super Poder:%.2f\n\n\n", Super_Poder2);

    resultadoA = populacao1 > populacao2;
    resultadoB = area1 > area2;
    resultadoC = PIB1 > PIB2;
    resultadoD = pontos_turisticos1 > pontos_turisticos2;
    resultadoE = Densidade_populacional1 < Densidade_populacional2;
    resultadoF = PIB_per_Capita1 > PIB_per_Capita2;
    resultadoG = Super_Poder1 > Super_Poder2;

    printf("COMPARAÇÃO DE CARTAS:\n\n");

    printf("População: A carta 1 venceu (%d)\n", resultadoA);
    printf("Área:A carta 1 venceu (%d)\n", resultadoB);
    printf("PIB:A carta 1 venceu (%d)\n", resultadoC);
    printf("Número de Pontos turísticos:A carta 1 venceu (%d)\n", resultadoD);
    printf("Densidade Populacional:A carta 2 venceu (%d)\n", resultadoE);
    printf("PIB per Capita:A carta 1 venceu (%d)\n", resultadoF);
    printf("Super Poder:A carta 1 venceu (%d)\n\n\n", resultadoG);

return 0;



}
