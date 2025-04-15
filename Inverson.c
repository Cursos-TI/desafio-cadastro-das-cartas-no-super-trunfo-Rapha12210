#include <stdio.h>

int main() {
    float numero, inverso;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Verifica se o número é diferente de zero para evitar divisão por zero
    if (numero != 0) {
        inverso = 1 / numero;
        printf("O inverso de %.2f é %f\n", numero, inverso);
    } else {
        printf("Não é possível calcular o inverso de zero.\n");
    }

    return 0;
}
