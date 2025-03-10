#include <stdio.h>

int main() {

    int populacao = 5, pontos_turisticos = 5;
    float area = 10, PIB = 10;
    char nome[50], estado[10], codigo[20];

    printf("CADASTRO DE CARTA 01:\n \n");

    printf("Digite uma letra que represente o estado:\n");
    scanf("%s", estado);

    printf("Digite o código da cidade:\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB);

    printf("Digite o número de Pontos Turísticos tem a cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("\nCarta 01:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da Cidade:%s\n", nome);
    printf("População:%d Habitantes\n", populacao);
    printf("Área:%.2f Km²\n", area);
    printf("PIB: R$ %.3f Milhões de Reais\n", PIB);
    printf("Pontos Turísticos:%d\n \n", pontos_turisticos);

    //AGORA INICIAR O CADASTRO DA CARTA 02

    printf("\n \nCADASTRO DE CARTA 02:\n \n");

    printf("Digite a letra que representará o Estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite o número de habitates da cidade:\n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB);
    
    printf("Digite o números de pontos turísticos da cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("\nCarta 02:\n");
    printf("Estado:%s\n", estado);
    printf("Código:%s\n", codigo);
    printf("Nome da cidade:%s\n", nome);
    printf("População:%d Habitantes\n", populacao);
    printf("Área:%.2f Km²\n", area);
    printf("PIB: R$ %.3f Milhões de Reais\n", PIB);
    printf("Número de Pontos turísticos:%d\n \n \n", pontos_turisticos);

    return 0;

}