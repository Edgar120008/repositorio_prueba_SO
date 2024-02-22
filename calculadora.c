#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n1, n2, resultado;
    char operador;

    printf("Pon el primer numero: ");
    scanf("%d", &n1);
    printf("Que operador quieres ocupar?: ");
    scanf(" %c", &operador);
    printf("Pon el segundo numero: ");
    scanf("%d", &n2);

    switch (operador) {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            resultado = n1 / n2;
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }

    printf("El resultado de la operacion: %d %c %d es: %d\n",n1,operador,n2,resultado);

    return 0;

    //este se tu rama Emiliano
}