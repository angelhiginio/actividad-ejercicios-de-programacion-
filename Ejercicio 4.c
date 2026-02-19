/* * e puede calcular el cuadrado de un número NUMERO al sumar los primeros NUMERO números impares. Con esta lógica, el cuadrado del número 7 es la sumatoria de los primeros 7 números impares, es decir 1+3+5+7+9+11+13=49. Crear un programa que pida al usuario un número y se almacene en la variable NUMERO y luego imprima la suma de todos los números impares y su resultado.
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sanchez
 * Compilador usado: OnlineGDB 
 */

#include <stdio.h>

int main() {
    int NUMERO;
    int suma = 0;
    int impar = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &NUMERO);

    printf("La suma de los primeros %d numeros impares es:\n", NUMERO);

    for(int i = 1; i <= NUMERO; i++) {
        printf("%d", impar);
        suma += impar;

        if(i < NUMERO) {
            printf(" + ");
        }

        impar += 2;  // Siguiente número impar
    }

    printf(" = %d\n", suma);

    return 0;

}
