/* * Enunciado: Leer un número entero en la variable VALOR. Utilizar operadores de bits 
 * (bitwise) para determinar si el número es par o impar (verificando el bit menos 
 * significativo) y mostrar el resultado. No está permitido usar el operador de módulo (%).
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez 
 * Compilador usado: OnlineGDB 
 */


int printf(const char *format, ...);

int main() {
    // Escribir el numero deseado despues del =
    int VALOR = 1189165; 

    // Verificamos el bit menos significativo con AND
    if ((VALOR & 1) == 0) {
        printf("El numero %d es Par\n", VALOR);
    } else {
        printf("El numero %d es Impar\n", VALOR);
    }

    return 0;
}