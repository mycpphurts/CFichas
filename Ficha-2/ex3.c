#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &n);

    if (n%2 == 0)
        printf("Numero par.\n");
    else if(n % 2 != 0) {
        printf("Numero impar.\n");
    } else
        printf("Número inválido.\n");

    return(0);
}