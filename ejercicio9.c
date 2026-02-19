#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    while (1) {
        printf("Ingrese un bit (1 o 0): ");
        scanf("%d", &num1);

        if (num1 == 1) {
            printf("Ingrese un bit (1 o 0): ");
            scanf("%d", &num2);

            if (num2 == 0) {
                printf("Ingrese un bit (1 o 0): ");
                scanf("%d", &num3);

                if (num3 == 1) {
                    printf("Ingrese un bit (1 o 0): ");
                    scanf("%d", &num4);

                    if (num4 == 1) {
                        printf("Cerradura abierta\n");
                    }
                }
            }
        }
    }

    return 0;
}