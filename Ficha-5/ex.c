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
#include <conio.h>
#define MAX 20

/*
    Legenda:
        - C.C = Caso Contrario,
*/


/*
    Verdade qnd c é um Digito e falso C.C
*/
int isDigit(char c) {
	return c >= '0' && c<='9';
}


/*
    Verdade qnd c é uma letra e falso C.C
*/
int isAlpha(char c) {
	return (c >= 'a' && c <='z') || (c >= 'A' && c <='Z');
}


/*
    Verdade quando c é um digitou ou letra e Falso C.C
*/
int isAlnum(char c) {
	return (isDigit(c) || isAlpha(c));
}


/*
    Devolve c transformado na minuscula correspondente
*/
char toLower(char c) {
	if(c >= 'A' && c <= 'Z') {
		return c+32; // devolve o mesmo caso c seja lower
	}
	else
		return c+32; // devolver +32 (lower de C) caso seja upper
}


/*
    Devolve c quando em Maiscula
*/
char toUpper(char c) {
	if(c >= 'A' && c <= 'Z') {
		return c; // devolve o mesmo caso c seja upper
	}
	else
		return c-32; // devolver -32 (upper de C) caso seja lower
}

int resto(int a, int b) {
	return a%b;
}
		
int impar(int a) {
	return a % 2 != 0; // interpretação do resultado no contexo da função	
}

int perfeito(int n) {
	int i, soma;
	soma = 0;
	for(i = 1; i <= n / 2; i++) {
		if(n % i == 0) {
			soma=soma+i;
		}
	}
	return n == soma;
}

int primo(int n) {
	int i;
	int total_divisores;
	total_divisores=0;
	for(i = 2; i < n; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}

// Func EX 4 - Start

int leitura() {
	int n;
	printf("Inserir valor inteiro: ");
	scanf("%d", &n);
	return n;
}
	
int cubo(int n) {
	return n*n*n;
}
	
int rep() {
	int val, cuboVal;
	val=leitura();
	cuboVal=cubo(val);
	printf("O cubo de %d é %d", val, cuboVal);
}

// Func EX 4 - End


// Func EX 5 - Start
int encMaior(int a, int b) {
    if(a < b)
        return b;
    else
        return a;
}
// Func EX 5 - End

void classifica(int a, int b)
{
	int num, div, nAbundantes, nReduzidos, nPerfeitos, soma, i;
	nAbundantes = 0; nReduzidos = 0; nPerfeitos = 0;
	for(num = a; num <= b; num++)
	{
		soma = 0;
		for(div = 1; div <= num / 2; div++)
		{
			if(num % div == 0)
			{
				soma = soma + div;
			}
		}
		
		if(num > soma)
		{
			nReduzidos++;
			printf("\nReduzido %d\n", num);
		}
		else
		{
			if(num < soma)
			{
				nAbundantes++;
				printf("\nAbundante %d\n", num);
			}
			else
			{
				nPerfeitos++;
				printf("\nPerfeito %d\n", num);
			}
		}
		
	}
	printf("%d são Perfeitos\n%d são Abundantes\n%d são Reduzidos", nPerfeitos, nAbundantes, nReduzidos);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // EX 5 int main
    int num1, num2, maior;

    printf("Insira dois números: ");
    scanf("%d%d", &num1, &num2);

    maior = encMaior(num1, num2);

    printf("Maior num = %d", maior);
    getch();
	
    return(0);
}