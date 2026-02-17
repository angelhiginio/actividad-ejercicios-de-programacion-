/* * Enunciado: Crear una función que reciba tres variables booleanas (A, B, C) y 
 * retorne el resultado de la siguiente expresión lógica: F = (A * B) + !C. 
 * El resultado debe mostrarse como una pequeña tabla de verdad en la consola.
 * Integrantes: [Tu Nombre / Nombres]
 * Compilador usado: OnlineGDB / GDB online Debugger
 */

int printf(const char *format, ...);

// Función que emula lógica booleana usando enteros (Indicación Ejercicio 8)
int calcular_F(int A, int B, int C) {
    // Expresión lógica: (A AND B) OR NOT C
    return (A && B) || !C;
}

int main() {
    printf("A | B | C | F\n");
    printf("--|---|---|--\n");

    // Generación de tabla de verdad (Indicación Ejercicio 8)
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            for (int c = 0; c <= 1; c++) {
                int resultado = calcular_F(a, b, c);
                printf("%d | %d | %d | %d\n", a, b, c, resultado);
            }
        }
    }

    return 0;
}