/* * Enunciado: En sistemas embebidos, los registros suelen empaquetar varios estados. 
 * Leer una variable de 8 bits llamada REGISTRO_ESTADO. El programa debe extraer y 
 * mostrar por separado el valor de los 4 bits menos significativos (nibble inferior) 
 * y el estado (0 o 1) del bit número 5. Usar exclusivamente operadores de bits (&, >>).
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sanchez
 * Compilador usado: OnlineGDB / GDB online Debugger
 */

int printf(const char *format, ...);

int main() {
    // Variable de 8 bits (Indicación 1 y 8)
    unsigned char REGISTRO_ESTADO = 0b11111111; //Cambiar el numero que esta despues del = usando ¨0b¨ antes de este, asegurarse de escribirlo en binarioo de 8 bits

    // Extracción usando exclusivamente operadores de bits (Indicación Ejercicio 7)
    unsigned char nibble_inferior = REGISTRO_ESTADO & 0x0F; 
    unsigned char bit_5 = (REGISTRO_ESTADO >> 5) & 1;

    printf("Nibble inferior: %d\n", nibble_inferior);
    printf("Estado del bit 5: %d\n", bit_5);

    return 0;

}
