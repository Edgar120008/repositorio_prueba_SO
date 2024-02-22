#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2, resultado;
    char operador;

    printf("Pon el primer numero: ");
    scanf("%d", &num1);
    printf("Que operador quieres ocupar?: ");
    scanf(" %c", &operador);
    printf("Pon el segundo numero: ");
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

    printf("El resultado de la operacion: %d %c %d es: %d\n",num1,operador,num2,resultado);

    return 0;

    //este se tu rama Emiliano
}