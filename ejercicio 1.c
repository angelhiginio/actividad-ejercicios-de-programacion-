/* * Enunciado: Leer un número entero en la variable VALOR. Utilizar operadores de bits 
 * (bitwise) para determinar si el número es par o impar (verificando el bit menos 
 * significativo) y mostrar el resultado. No está permitido usar el operador de módulo (%).
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sánchez
 * Compilador usado: OnlineGDB 
 */

#include <stdio.h>

int main() {
    int numero; 
    int unidad, decena, centena, unidad_de_mil;

    printf("Ingrese el numero de 4 digitos");
    scanf("%d", &numero);

        // validar rango  
        if (numero <1000 || numero > 9999) {
            printf("el numero esta fuera del rango permitido(1000-9000).\n");
            return 0;
        }
        
        //obtener cada digito
        unidad_de_mil = numero / 1000;
        centena = (numero % 1000) / 100;
        decena = (numero % 100) / 10;
        unidad = numero % 10;
        
        // mostrar resultado
        printf("{´numero´: %d, ´unidad´: %d, ´decena´: %d, ´centena´: %d, ´unidad_de_mil´: %d}\n",
        numero, unidad, decena, centena, unidad_de_mil);
    
        return 0;
    }

