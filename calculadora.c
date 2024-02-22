#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2, resultado;
    char operador;

    printf("Digite el primer número: ");
    scanf("%d", &num1);
    printf("Digite el segundo numero: ");
    scanf("%d", &num2);
    printf("Digite la operacion que realizara: ");
    scanf(" %c", &operador);

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
}