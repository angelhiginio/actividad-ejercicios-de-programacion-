/* * Crear un programa pida al usuario un número entero positivo y almacenarlo en la variable NUMERO.
 Usando NUMERO como límite, aplicar la Criba de Eratóstenes e imprimir en pantalla todos los números
  menores a NUMERO que son primos.
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sánchez
 * Compilador usado: OnlineGDB 
 */
#include <stdio.h>
#include <math.h>
 
int main() {
    int NUMERO;
 
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &NUMERO);
 
    if (NUMERO <= 1) {
        printf("El numero debe ser mayor que 1.\n");
        return 0;
    }
 
    int prim[NUMERO];
 
    // Inicializar todos como primos
    for (int i = 0; i < NUMERO; i++) {
        prim[i] = 1;
    }
 
    prim[0] = 0;
    prim[1] = 0;
 
    // Aplicar Criba de Eratóstenes
    for (int i = 2; i * i < NUMERO; i++) {
        if (prim[i] == 1) {
            for (int j = i * i; j < NUMERO; j += i) {
                prim[j] = 0;
            }
        }
    }
 
    printf("Numeros primos menores a %d:\n", NUMERO);
 
    for (int i = 2; i < NUMERO; i++) {
        if (prim[i] == 1) {
            printf("%d ", i);
        }
    }
 
    printf("\n");
 
    return 0;
}
