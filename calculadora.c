#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
<<<<<<< HEAD
    int num1, num2, resultado

    printf("VANESA ");
    printf("Digite el primer número: ");
    scanf("%d", &num1);
    printf("Digite el segundo numero: ");
    scanf("%d", &num2);
    printf("Digite la operacion que realizara: ");
    scanf(" %c", &operador);
=======
    int n1, n2, resultado;
    char operador;

    printf("Pon el primer numero: ");
    scanf("%d", &n1);
    printf("Que operador quieres ocupar?: ");
    scanf(" %c", &operador);
    printf("Pon el segundo numero:zzz ");
    scanf("%d", &n2);
>>>>>>> emiliano

    printf("Pulsa el primer numero: ");
    scanf("%d", &num1);
    printf("Selecceracion a realizar: ");
    scanf(" %c", &operador);
    printf("Pulsa tu segundo numero: ");
    
    switch (operador) {
<<<<<<< HEAD
        case 
            resultado = num1 + num2;
=======
        case '+':
            resultado = n1 + n2;
>>>>>>> emiliano
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
<<<<<<< HEAD
            resultado = num1 * num2;
            break;
        case '/':
=======
            resultado = n1 * n2;
>>>>>>> emiliano
            break;
        default:
            printf("Operador inválido\n");
            return 1;
    }

<<<<<<< HEAD
    printf("La respuesta es: %d\n", resultado);

    return 0;

    // esta es tu rama ulises
=======
    printf("El resultado de la operacion: %d %c %d es: %d\n",n1,operador,n2,resultado);

    return 0;

    //este se tu rama Emiliano
>>>>>>> emiliano
}