#include <stdio.h>

int main () {

    int populacao = 10, pontos_turisticos = 5;
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
    
    printf("Digite o números de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("\nCARTA 01:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s %s\n", nome1, nome2);
    printf("População:%d Habitantes\n", populacao);
    printf("Área:%.2f Km²\n", area);
    printf("PIB: R$ %.2f Bilhões de Reais\n", PIB);
    printf("Número de Pontos turísticos:%d\n\n", pontos_turisticos);


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

    printf("\nCarta 02:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s %s %s\n", nome1, nome2, nome3);
    printf("População:%d Habitantes\n", populacao);
    printf("Área:%.2f Km²\n", area);
    printf("PIB: R$ %.2f Bilhões de Reais\n", PIB);
    printf("Número de Pontos turísticos:%d\n", pontos_turisticos);


    return 0;

}
