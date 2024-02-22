#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2, resultado

    printf("VANESA ");
    printf("Digite el primer número: ");
    scanf("%d", &num1);
    printf("Digite el segundo numero: ");
    scanf("%d", &num2);
    printf("Digite la operacion que realizara: ");
    scanf(" %c", &operador);

    printf("Pulsa el primer numero: ");
    scanf("%d", &num1);
    printf("Selecceracion a realizar: ");
    scanf(" %c", &operador);
    printf("Pulsa tu segundo numero: ");
    
    switch (operador) {
        case 
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }

    printf("La respuesta es: %d\n", resultado);

    return 0;

    // esta es tu rama ulises
}