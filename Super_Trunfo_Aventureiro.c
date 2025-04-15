#include <stdio.h>

int main () {

    unsigned long int populacao = 10, pontos_turisticos = 5;
    float area = 20, PIB = 10, PIB_per_Capita = 10, Densidade_populacional = 10;
    char estado[20], codigo[10], nome1 [50], nome2 [50], nome3 [50];

    printf("CADASTRO DE CARTA 01:\n \n");

    printf("Digite a letra que representará o Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s %s", nome1, nome2);

    printf("Digite o número de habitates da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB);
    
    printf("Digite o números de pontos turísticos da cidade:\n\n");
    scanf("%d", &pontos_turisticos);

    Densidade_populacional = (float) populacao / area;
    PIB_per_Capita = PIB / populacao;

    printf("\nCARTA 01:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s %s\n", nome1, nome2);
    printf("População:%d Habitantes\n", populacao);
    printf("Área:%.2f Km²\n", area);
    printf("PIB: R$ %f Bilhões de Reais\n", PIB);
    printf("Número de Pontos turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional);
    printf("PIB per Capita: %.2f Reais\n \n \n \n", PIB_per_Capita);

    //AGORA INICIAR O CADASTRO DA CARTA 02

    printf("CADASTRO DE CARTA 02:\n \n");

    printf("Digite a letra que representará o Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s %s %s", nome1, nome2, nome3);

    printf("Digite o número de habitates da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);


    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB);
    
    printf("Digite o números de pontos turísticos da cidade:\n\n");
    scanf("%d", &pontos_turisticos);

    Densidade_populacional = (float) populacao/ area;
    PIB_per_Capita = (float) populacao / PIB;

    printf("\nCarta 02:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s %s %s\n", nome1, nome2, nome3);
    printf("População:%d Habitantes\n", populacao);
    printf("Área:%.2f Km²\n", area);
    printf("PIB: R$ %f Bilhões de Reais\n", PIB);
    printf("Número de Pontos turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional:%.2f Hab/km²\n", Densidade_populacional);
    printf("PIB per Capita:%.2f Reais\n \n \n", PIB_per_Capita);



    return 0;

}
