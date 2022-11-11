#include <stdio.h>
#include <math.h>

int main() {
    int num, i;
    printf("Diga um numero:\n ");
    scanf("%d", &num);

    for (i = 0; i <= 10; i++) {
        printf("\t%td x %d = %d", num, i, num * i);
    }

    return(0);
}