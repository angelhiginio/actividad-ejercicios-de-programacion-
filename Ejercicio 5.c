/* * Preguntar al usuario un número entero y almacenar en la variable NUMERO. Imprimir el valor de la posición NUMERO de la secuencia de Fibonacci asumiendo que  f_0 y f_1 . Verificar que NUMERO debe ser >= 2, en caso contrario, mostrar un mensaje que NUMERO debe cumplir esa condición.
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, 
 * Compilador usado: OnlineGDB 
 */
 
#include <stdio.h>

int main() {
    int NUMERO;

    printf("Ingrese un numero entero (>= 2): ");
    scanf("%d", &NUMERO);

    if (NUMERO < 2) {
        printf("Error: NUMERO debe ser mayor o igual a 2.\n");
    } else {
        int f0 = 0, f1 = 1, fn;

        for (int i = 2; i <= NUMERO; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }

        printf("El valor en la posicion %d de la secuencia de Fibonacci es: %d\n", NUMERO, f1);
    }

    return 0;
}