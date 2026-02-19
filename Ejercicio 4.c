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