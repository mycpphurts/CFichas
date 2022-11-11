#include <stdio.h>

int main() {
    int Num;

    do {
        printf("Introduza um num entre 0 e 9: ");
        scanf("%d", &Num);
    } while((Num < 0) || (Num > 9));

    printf("TÁ CERTOOOOOOOOOOO");
}