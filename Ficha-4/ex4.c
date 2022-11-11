#include <stdio.h>

void main() {
    /* int i, j, n = 0, num, den;
    double s = 0.0;
    char c;

    printf("Valor de N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        num = 1;
        for (j = 1; j <= i; j++)
                num = num * 2;
        den = 1;
        for (j = 1; j <= i; j++)
            den = den + 1;

        s = s + num * 1.0 / den; 
    } 
    
    printf("\nO somatorio de i=1 ate %d de 2 levantado a i / i factoria = %0.4f", n, s);
    printf("\n");
    printf("PRESS ENTER PARA SAIR.");
    scanf("%c", c);
    */

    int i, n;
    float s = 0.0, termo = 1.0;
    char c;

    printf("Valor de N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
        termo = 2 * termo / i;
        s += termo;
        printf("Termo %d = %0.4f", i, termo);
    }

    printf("\nO somatorio de i=1 ate %d de 2 levantado a i / i factoria = %0.4f", n, s);
    printf("\n");
    printf("PRESS ENTER PARA SAIR.");
    scanf("%c", c);
}