#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2, resultado;
    char operador;

    printf("Pulsa el primer numero: ");
    scanf("%d", &num1);
    printf("Selecciona una operacion a realizar: ");
    scanf(" %c", &operador);
    printf("Pulsa tu segundo numero: ");
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

    printf("La respuesta es: %d\n",num1,operador, num2, resultado);

    return 0;

    // esta es tu rama ulises
}