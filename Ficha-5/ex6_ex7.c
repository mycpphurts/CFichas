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

void lerVetor(int v[], int n) {
	//preencher n casas vetor
	int i;
		
	for(i = 0; i < n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", &v[i]);
	}
}

int printValores(int v[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

int prodInterno(int v[], int u[], int n) {
	int i, soma;
	soma = 0;
	for(i = 0; i < n; i++)
	{
		soma = soma + v[i] * u[i];
	}
	return soma;
}

int posMaior(int v[], int n) {
		
	int i;
	int maior;
	maior = 0;
	for(i = 0; i < n; i++) {
		if (v[i] > v[maior]) {
			maior = i;
		}
	}
	return maior;
}

int main() {	
	setlocale(LC_ALL, "Portuguese");

	int vetor[MAX], vetor2[MAX];
	int n, maior, prodInt;

	do {
		printf("Tamanho vetor, máximo %d: ", MAX);
		scanf("%d", &n);
	} while (n <= 0 || n > 20);
	
	lerVetor(vetor, n);
	maior = posMaior(vetor, n);

	printf("O valor maior do vetor é %d e está na posição %d\n", vetor[maior], maior);
	printValores(vetor, n);

	printf("Próximo vetor\n");
	lerVetor(vetor2, n);

	prodInt = prodInterno(vetor, vetor2, n);
	printf("O produto interno é %d", prodInt);
}