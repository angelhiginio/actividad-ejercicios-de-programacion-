/* * De un número entero positivo que está guardado en una variable llamada NUMERO, 
mostrar en pantalla su raíz cuadrada usando el método de Newton. Para este ejercicio
 debe realizarse una función que acepte el valor la variable NUMERO y retorne el resultado
  usando el método de Newton, sin usar una librería que contenga esa función. Resultado
   esperado en pantalla: {'Número' : NUMERO, 'Raíz cuadrada usando Newton' : RESULTADO}
 * Integrantes: Angel Higinio, Luis Donado, Yaribeth Rodriguez, Elias Sánchez
 * Compilador usado: OnlineGDB 
 */
// Función que calcula la raíz cuadrada usando Newton
double raizNewton(int NUMERO) {
    double x = NUMERO;          // Aproximación inicial
    double error = 0.000001;    // Margen de error permitido
    double diferencia;
 
    do {
        double anterior = x;
        x = 0.5 * (x + NUMERO / x);
        diferencia = anterior - x;
        if (diferencia < 0)
            diferencia = -diferencia;  
    } while (diferencia > error);
 
    return x;
}
 
int main() {
    int NUMERO = 3;
    double RESULTADO;
    int Valido ;
 
 
    RESULTADO = raizNewton(NUMERO);
 
    printf("{ 'Numero' : %d, 'Raiz cuadrada usando Newton' : %.6lf }\n",
           NUMERO, RESULTADO);
 
    return 0;
}
    printf("{ 'Numero' : %d, 'Raiz cuadrada usando Newton' : %.6lf }\n",
           NUMERO, RESULTADO);
 
    return 0;
}
