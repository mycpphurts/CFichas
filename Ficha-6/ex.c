/*
        _   _                _                   _              _              _               _           
       /\_\/\_\ _           / /\                _\ \           _\ \           /\ \            / /\      _  
      / / / / //\_\        / /  \              /\__ \         /\__ \         /  \ \          / / /    / /\ 
     /\ \/ \ \/ / /       / / /\ \            / /_ \_\       / /_ \_\       / /\ \ \        / / /    / / / 
    /  \____\__/ /       / / /\ \ \          / / /\/_/      / / /\/_/      / / /\ \ \      / / /_   / / /  
   / /\/________/       / / /  \ \ \        / / /          / / /          / / /  \ \_\    / /_//_/\/ / /   
  / / /\/_// / /       / / /___/ /\ \      / / /          / / /          / / /   / / /   / _______/\/ /    
 / / /    / / /       / / /_____/ /\ \    / / / ____     / / / ____     / / /   / / /   / /  \____\  /     
/ / /    / / /       / /_________/\ \ \  / /_/_/ ___/\  / /_/_/ ___/\  / / /___/ / /   /_/ /\ \ /\ \/      
\/_/    / / /       / / /_       __\ \_\/_______/\__\/ /_______/\__\/ / / /____\/ /    \_\//_/ /_/ /       
        \/_/        \_\___\     /____/_/\_______\/     \_______\/     \/_________/         \_\/\_\/        
                                                                                                           

                                                    I wanna die
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#define MAX 20


/*

// EX 1
void trocarStrings(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    
    int a, b;
    printf("Dois valores a trocar: ");
    scanf("%d %d", &a, &b);
    
    trocarStrings(&a, &b);
    printf("Depois da troca: \t");
    printf("%d %d", a, b);

    return 0;
}

*/

/*

// Ex 2
void Ex02() {
    setlocale(LC_ALL, "Portuguese");
    char str1[20];
    printf("\nEscrever a string:\t");
    gets(str1);
    printf("Primeiros 2 carateres: \nC1 = %c\n C2 = %c", str1[0], str1[1]);
}
*/


/*

//EX 3
void concatenarString(char *str1, const char *str2) {
    while (*str1 != '0')
    {
        str1++;
    }
    while (*str2 != '0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = *str2;
}
// Nota: "strlen()" determina o tamanho da string

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    char str1[40];
    char str2[20];
    printf("Escreve a primeira string:\t");
    gets(str1);
    printf("Escreve a segunda string:\t");
    gets(str2);
    concatenarString(str1, str2);
    printf("\nResultado da concatenação: %s", str1);
    return 0;
}

*/
//EX4
void intercalarVetores(int* v, int* y, int n, int* z) {
    int i;
    y = y + n - 1;
    for (i = 0; i < n; i++)
    {
        *z = *v;
        z++;
        *z = *y;
        z++;
        v++;
        y--;
    }
    
}

//EX5 - a
void lerVetor(int *v, int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%dÉ valor: ", i + 1);
        scanf("%d", v);
        v++;
    }
}

//EX5 - b
void escreverVetor(int *v, int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *v);
        v++;
    }
}

//EX5 - c
void inversoVetor(int *v, int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *v);
        v--;
    }
    printf("\n");
}

//EX5 - d
int maxVetor(int *v, int n) {
    int maximo = *v;
    int i;

    for (i = 1; i < n; i++)
    {
        v++;
        if ((*v) > maximo)
        {
            maximo = *v;
        }
    }
    return maximo;
}

//EX5 - e
int minVetor(int *v, int n) {
    int minimo = *v;
    int i;

    for (i = 1; i < n; i++)
    {
        v++;
        if ((*v) < minimo)
        {
            minimo = *v;
        }
    }
    return minimo;
}

//EX5 - f
int somaVetor(int *v, int n) {
    int i, soma = 0;

    for (i = 0; i < n; i++)
    {
        soma = soma + *v;
        v++;
    }
    return soma;
}

//EX5 - g
float mediaVetor(int *v, int n) {
    return (somaVetor(v,n)*1.0)/n;
}

//EX5 - h
int infMedVetor(int *v, int n, float ref) {
    int i, contador;
    contador = 0;
    for (i = 0; i < n; i++)
    {
        if (*v < ref)
        {
            contador++;
        }
        v++;
    }
    return contador;
}

//EX5 - i
void duplicarVetor(int *v, int *z, int n) {
    int i;
    for (i = 0; i < n; i++)
    {
        *z = *v;
        z++;
        v++;
    } 
}

//EX5 - main
int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int v[MAX], n, maximo, minimo;

    printf("Quantos valores tem o vetor? (Max: 20) -> ");
    scanf("%d", &n);

    lervetor(v, n);
    printf("Vetor completo: \t");
    escreverVetor(v, n);

    printf("Vetor invertido: \t");
    inversoVetor(v, n);

    printf("Máximo do vetor: \t%d", maxVetor(v, n));
    printf("\nMínimo do vetor: \t%d", minVetor(v, n));
	printf("\nA soma dos valores: \t%d", somaVetor(v, n));
	printf("\nA média dos valores: \t%.2f", mediaVetor(v, n));
    return 0;
}

/*
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int v[MAX], n, maximo, minimo, contReferSup;
	int z[MAX];
	int infMedia;
	float media;
	printf("Quantos valores tem o vetor?(MAX 20)): ");
	scanf("%d", &n);
	lerVetor(v,n);
	printf("Vetor v completo: \t");
	escreverVetor(v, n);
	printf("\nVetor invertido: \t");
	inverterVetor(v, n);
	printf("Máximo do vetor: \t%d", maxVetor(v, n));
	printf("\nMínimo do vetor: \t%d", minVetor(v, n));
	printf("\nA soma dos valores: \t%d", somaVetor(v, n));
	media = mediaVetor(v, n);
	infMedia = infMedVetor(v, n, media);
	printf("\nA média dos valores: \t%.2f", media);
	printf("\nNº valores superiores à média: \t%d", infMedia);
	printf("\nNº valores inferiores à média: \t%d", n - infMedia);
	printf("\nVetor z completo: ");
	escreverVetor(z, n);
    return 0;
}
*/