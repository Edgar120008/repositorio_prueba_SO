#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o operador: ");
    scanf(" %c", &operador);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }

    printf("Resultado: %d\n", resultado);

    return 0;

    // esta es tu rama ulises
}