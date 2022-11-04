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

// Ex 8a
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

void permCircDir(int vetor[], int n)
{
	int i, tmp;
	tmp = vetor[n - 1];
	for(i = n - 1; i > 0; i--)
	{
		vetor[i] = vetor[i-1];
	}
	vetor[0] = tmp;
}

int permCircDir2(int vetor[], int vetor2[], int n)
{
	int i, tmp;
	tmp = vetor[n - 1];
	for(i = n - 1; i > 0; i--)
	{
		vetor2[i] = vetor[i-1];
	}
	vetor2[0] = tmp;
	return vetor2[MAX];
}

// Ex 8b
int trocar_posicao(int vetor[], int n, int p, int q)
{
	int tmp;
	int posicao_max = n -1;
	if((p < 0 || p > posicao_max) || (q < 0 || q > posicao_max) || (p == q))
	{
		return 0;
	}
	tmp = vetor[q];
	vetor[q] = vetor[p];
	vetor[p] = tmp;
	return 1;
}


int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vetor[MAX], permvetor[MAX];
	int n, p, q;
	do{
		printf("Tamanho vetor, máximo %d: ", MAX);
		scanf("%d", &n);
	} while (n <= 0 || n > 20);
	
	lerVetor(vetor, n);
	printValores(vetor, n);

	printf("A permutação do vetor fica:\n");
	permvetor[MAX] = permCircDir2(vetor, permvetor, n);

	printValores(permvetor, n);
	printf("\nQuais as posições a trocar? ");
	scanf("%d%d", &p, &q);
    
	trocar_posicao(vetor, n, p, q);
	printf("\nVetor depois da troca: \n");
	printValores(vetor, n);
}