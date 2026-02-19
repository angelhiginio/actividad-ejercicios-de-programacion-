/* * Los sensores analógicos suelen presentar ruido. Definir una lista de 10 lecturas llamada LECTURAS_ADC. Crear un programa que calcule una nueva lista donde cada elemento sea el promedio de la lectura actual y las dos anteriores (esto se le conoce como filtro de media móvil). Para la primera posición, segunda y última posición de la nueva lista, dejar en 0.
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sánchez
 * Compilador usado: OnlineGDB 
 */
 
#include <stdio.h>

#define TAM 10

int main() {
    float LECTURAS_ADC[TAM];
    float FILTRO[TAM];

    // Ingresar las 10 lecturas analógicas
    printf("Ingrese 10 lecturas analogicas:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Lectura %d: ", i);
        scanf("%f", &LECTURAS_ADC[i]);
    }

    // Inicializar primera, segunda y ultima posicion en 0
    FILTRO[0] = 0;
    FILTRO[1] = 0;
    FILTRO[TAM - 1] = 0;

    // Aplicar filtro de media movil
    for (int i = 2; i < TAM - 1; i++) {
        FILTRO[i] = (LECTURAS_ADC[i] + LECTURAS_ADC[i - 1] + LECTURAS_ADC[i - 2]) / 3.0;
    }

    printf("\nLista original:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", LECTURAS_ADC[i]);
    }

    printf("\n\nLista filtrada (media movil):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%.2f ", FILTRO[i]);
    }

    return 0;
}