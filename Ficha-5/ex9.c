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

// Ex 9a
void lerMatriz(int M[MAX][MAX], int nL, int nC) {
	int i, j;
	for(i = 0; i < nL; i++) // para cada linha
	{
		// estou na linha i
		for(j = 0; j < nC; i++) // para cada coluna
		{
			// estou na coluna j;
			// logo, estou na posição (i,j)
			printf("M[%d][%d]= ", i, j);
			scanf("%d", &M[i][j]);
		}
	}
}
// Ex 9b
void mostrarMatriz(int M[MAX][MAX], int nL, int nC) {
	int i, j;
	for(i = 0; i < nL; i++) 
	{
		for(j = 0; j < nC; i++) 
		{
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}
// Ex - 9c
int minMatriz(int M[MAX][MAX], int nL, int nC) {
	int i, j, min;
	min=M[0][0];
	for(i = 0; i < nL; i++) 
	{
		for(j = 0; j < nC; i++) 
		{
			if(min > M[i][j])
			{
				min = M[i][j];
			}
		}
	}
	return min;
}
// Ex - 9d
int verSimMatriz(int M[MAX][MAX], int n) {
	int i, j;
	for(i = 0; i < n - 2; i++) 
	{
		for(j = i + 1; j < n; i++) 
		{
			if(M[i][j] != M[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}

// Ex - 9e
void transpMatriz(int M[MAX][MAX], int MT[MAX][MAX], int nL, int nC) {
	int i, j;
	for(i = 0; i < nL; i++) 
	{
		for(j = 0; j < nC; i++) 
		{
			MT[j][i] = M[i][j];
		}
	}
}

void mostrar_array(int itens[], int num_itens) {
	int i;
	for(i = 0; i < num_itens; i++)
	{
		printf("%d ", itens[i]);
	}
	printf("\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int nL, nC, M[MAX][MAX];

	printf("Qual o número de linhas? ");
	scanf("%d", &nL);

	printf("\nQual o número de colunas? ");
	scanf("%d", &nC);

	lerMatriz(M[MAX][MAX], nL, nC);
	mostrarMatriz(M[MAX][MAX], nL, nC);
}