#include <stdio.h>
#include <math.h>
#include "Calculadora.h"

// Declare as variáveis antes do switch
float usr1, usr2, resultado;

void menu(int opc) {

    printf("Calculadora\n");
    printf("Entre com o valor desejado:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Fatorial\n");
    printf("6 - Primo\n");
    printf("7 - Cosseno\n");
    printf("8 - Média\n");

    printf("Escolha a operação (1-8): ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%f", &usr1);
            printf("Digite o segundo número: ");
            scanf("%f", &usr2);
            resultado = soma(usr1, usr2);
            printf("A soma é: %f\n", resultado);
            break;
        case 2:
            printf("Digite o primeiro número: ");
            scanf("%f", &usr1);
            printf("Digite o segundo número: ");
            scanf("%f", &usr2);
            resultado = subtracao(usr1, usr2);
            printf("A subtração é: %f\n", resultado);
            break;
        case 3:
            printf("Digite o primeiro número: ");
            scanf("%f", &usr1);
            printf("Digite o segundo número: ");
            scanf("%f", &usr2);
            resultado = multiplicacao(usr1, usr2);
            printf("A multiplicação é: %f\n", resultado);
            break;
        case 4:
            printf("Digite o numerador: ");
            scanf("%f", &usr1);
            do {
                printf("Digite o denominador (não pode ser zero): ");
                scanf("%f", &usr2);
                if (usr2 == 0) {
                    printf("Denominador não pode ser zero. Tente novamente.\n");
                }
            } while (usr2 == 0);

            resultado = divisao(usr1, usr2);
            printf("A divisão é: %f\n", resultado);
            break;
        case 5:
            printf("Digite o número para calcular o fatorial: ");
            scanf("%f", &usr1);
            if (usr1 < 0) {
                printf("Não é possível calcular o fatorial de um número negativo.\n");
            } else {
                printf("O fatorial de %.0f é: %d\n", usr1, fatorial((int)usr1));
            }
            break;
        case 6:
            printf("Digite o número para verificar se é primo: ");
            scanf("%f", &usr1);
            if (Primo((int)usr1, (int)usr1 - 1)) {
                printf("%.0f é um número primo.\n", usr1);
            } else {
                printf("%.0f não é um número primo.\n", usr1);
            }
            break;
        case 7:
            printf("Digite o ângulo em radianos para calcular o cosseno: ");
            scanf("%f", &usr1);
            printf("O cosseno de %.2f radianos é: %.4f\n", usr1, cosseno(usr1));
            break;
        case 8:
            printf("Digite o primeiro número: ");
            scanf("%f", &usr1);
            printf("Digite o segundo número: ");
            scanf("%f", &usr2);
            resultado = media(usr1, usr2);
            printf("A média é: %f\n", resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}
