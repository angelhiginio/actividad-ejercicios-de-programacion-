/* * Enunciado: Leer un número entero en la variable VALOR. Utilizar operadores de bits 
 * (bitwise) para determinar si el número es par o impar (verificando el bit menos 
 * significativo) y mostrar el resultado. No está permitido usar el operador de módulo (%).
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sanchez 
 * Compilador usado: OnlineGDB 
 */

#include <stdio.h>

int main() {
    int VALOR;

    printf("Ingrese un numero entero: ");
    scanf("%d", &VALOR);

    // Verificar el bit menos significativo usando AND bit a bit
    if (VALOR & 1) {
        printf("El numero es IMPAR.\n");
    } else {
        printf("El numero es PAR.\n");
    }

    return 0;
}
