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
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define MAX 20
#define F 10
#define C 15

typedef struct ponto
{
	float x;
	float y;
} PONTO;

typedef struct fracao
{
	int num;
	int den;
}FRACAO;

typedef struct aluno
{
	char nome[50];
	int numero;
	float nota;
} ALUNO;

typedef struct livro
{
	char titulo[30];
	char autor[30];
	char area[20];
	int ano;
	int ocupado;
}LIVRO;

typedef struct reserva{
	char nome[50];
	int ocupado;
	int pago;
} RESERVA;

void lerTurma(ALUNO *v, int n)//(ALUNO v[],int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("\nNome do aluno: ");
		fseek(stdin,0,2);
		gets(v[i].nome);
		printf("\nNúmero do aluno: ");
		scanf("%d", &v[i].numero);
		printf("\nNota do aluno: ");
		scanf("%f", &v[i].nota);
	}

}

void pesquisarAluno(ALUNO *v, int n, int nA)//(ALUNO v[],int n)
{
	int i;
	i = 0;
	while ((v[i].numero != nA) && (i < n))
	{
		i++;
	}
	if (i < n)//encontrou
		printf("\nNome: %s, Nota:%f\n",v[i].nome, v[i].nota);
	else//i=n, passou o vetor todo e nao encontrou
		printf("\nNão há aluno com esse número\n");
}

void iniciarLivro(LIVRO *p, int n)
{
	//p aponta para 1º livro, à referência do 1º livro
	int i;
	for (i = 0; i < n; i++)//repetir n vezes
	{
		(*p).ocupado = 0;//p->ocupado=0; 
		p++;//avançar no vetor; p=p+1;
	}
}

void removerLivro(LIVRO *p, int n)
{
	int i;
	do
	{
		printf("\nQual o índice a remover? ");
		scanf("%d", &i);
	} while ((i < 0) || (i >= n));
	//p aponta para 1º elemento, índice 0
	//p+i aponta para i casas à frente, para índice i
	(p + i)->ocupado = 0;
    //(*(p + i)).ocupado = 0;
	//p[i].ocupado=0;
	//p=p+i; (*p).ocupado=0; ou p->ocupado=0;
}

void inserirLivro(LIVRO *p, int n)
{
	//p aponta para 1ª posição
	int i;
	i = 0;
    //controlar o tamanho do vetor
	while ((p->ocupado != 0) && (i < n))
	{
		p++; i++;
	}
	if (i < n)//não percorri o vetor todo; encontrei ocup=0
	{
		//p aponta p posicao com ocup=0
		p->ocupado = 1;
		fseek(stdin, 0, 2); // fflush(stdin);
		printf("\nTítulo: ");
		gets(p->titulo); //(*p).titulo
		printf("\nAutor: ");
		gets(p->autor); //(*p).autor
		printf("\nArea: ");
		gets(p->area); //(*p).area
		printf("\nAno: ");
		scanf("%d", &(p->ano)); //scanf("%d",&(*p).ano);
	}
	else//não encontrou oc=0; percorreu todo o vetor e i=n
		printf("\nVetor cheio!!\n");
}


void listarLivros(LIVRO *p, int n)
{
	int i, temLivro;
	temLivro=0;
	for (i = 0; i < n; i++)
	{
		if (p->ocupado != 0)
		{
			printf("\nTitulo: %s", p->titulo);
			printf("\nAutor: %s", p->autor);
			printf("\nArea: %s", p->area);
			printf("\nAno: %d\n\n", p->ano);
			temLivro=1;
		}
		p++;
	}
	if(temLivro==0)
	printf("\nNão há livros para mostrar!\n");
}

void iniciarSala(RESERVA* m[])
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			m[i][j].ocupado=0;
		}
	}
}

void fazerReserva(RESERVA m[F][C])
{
	int i,j,aux=0;
	char p;
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			if(m[i][j].ocupado==0)
			{
				aux=1;
				break;
			}
		}
		if(aux==1)
			break;
	}
	if(aux==1)
	{
		m[i][j].ocupado=1;
		printf("\nNome: ");
		fseek(stdin,0,2);
		gets(m[i][j].nome);
		printf("\nEstá pago? (s/n): ");
		scanf(" %c",&p);
		if(p=='s'||p=='S')
			m[i][j].pago=1;
		else
			m[i][j].pago=0;
	}
	else
		printf("\nSala Cheia!");
}

void mapaOcupa(RESERVA m[F][C])
{
	int i,j;
	char p;
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			if(m[i][j].ocupado==0)
				printf("O\t");
			else
				printf("X\t");
		}
		printf("\n");
	}
}

void listar(RESERVA m[F][C])
{
	int i,j;
	char p;
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			if(m[i][j].ocupado==1)
			{
				printf("\nNome: %s\n",m[i][j].nome);
				printf("Fila %d; cadeira %d",i+1,j+1);
				if(m[i][j].pago==1)
					printf("\nPago\n\n");
				else
					printf("\nNão pago\n\n");
			}				
		}
	}
}

void eliminarReserva(RESERVA m[F][C])
{
	int i,j;
	do{
		printf("\nLugar a eliminar (i,j): \n");
		scanf("%d%d",&i,&j);
	}while((i<0||i>=F)&&(j<0||j>=C));
	
	m[i][j].ocupado=0;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	/*
    //exercício 1
	PONTO pt1, pt2;
	float area, diagonal,lado1,lado2;
	printf("\nCoordenadas do ponto 1: ");
	scanf("%f%f", &pt1.x,&pt1.y);
	printf("\nCoordenadas do ponto 1: ");
	scanf("%f%f", &pt2.x,&pt2.y);
	lado1 = fabs(pt2.x - pt1.x);
	lado2 = fabs(pt2.y - pt1.y);
	//diagonal = sqrt(lado1*lado1 + lado2*lado2);
	diagonal = sqrt(pow(lado1, 2) + pow(lado2, 2));
	area = lado1*lado2;
	printf("\nA area vale %.3f", area);
	printf("\nA diagonal vale %.3f\n", diagonal);*/


    /*
	//exercício 2
	FRACAO fr1, fr2, res;
	int erro;
	erro = 0;
	char op;
	printf("Fração 1 (Num/Den): ");
	scanf("%d%d", &fr1.num,&fr1.den);
	printf("\nFração 2 (Num/Den): ");
	scanf("%d%d", &fr2.num,&fr2.den);
	printf("\nQual a operação: +,-,*,/ ");
	scanf(" %c", &op);
	switch (op)
	{
		case '+':
			res.num = fr1.num*fr2.den + fr2.num*fr1.den;
			res.den = fr1.den*fr2.den;
			break;
		case '-':
			res.num = fr1.num*fr2.den - fr2.num*fr1.den;
			res.den = fr1.den*fr2.den;
			break;
		case '*':
			res.num = fr1.num*fr2.num;
			res.den = fr1.den*fr2.den;
			break;
		case'/':
			if (fr2.num != 0)
			{
				res.num = fr1.num*fr2.den;
				res.den = fr1.den*fr2.num;
			}
			else//numerador da fr2 = 0
			{
				erro = 1;
				printf("Não se divide por 0!\n");
			}
			break;
		default:
			printf("\nOperação inválida!!\n");
			erro = 1;
			break;
	}
	if (erro==0)//!erro; construa a fração res
		printf("\nResultado=%d/%d=%.3f\n", res.num, res.den, res.num*1.0/ res.den);	*/


    /*
	//Exercício 3
	ALUNO turma[MAX];
	int tam, nAl;
	do{
		printf("\nTamanho da turma, máximo %d: ", MAX);
		scanf("%d", &tam);
	} while ((tam <= 0) || (tam > MAX));
	lerTurma(turma, tam);
	printf("\nQual o número a pesquisar: ");
	scanf("%d", &nAl);
	pesquisarAluno(turma, tam, nAl);*/


    /*
	//exercício 4
	LIVRO biblio[MAX];
	int op;
	iniciarLivro(biblio, MAX);
	do
	{
		system("CLS");
		printf("\n\n\tMENU****\n");
		printf("1 - Inserir novo livro\n");
		printf("2 - Remover livro\n");
		printf("3 - Listar livros\n");
		printf("4 - Sair\n");
		printf("\nDigite opção: ");
		scanf("%d", &op);
		switch (op)
		{
		case 1:inserirLivro(biblio, MAX); break;
		case 2:removerLivro(biblio, MAX); break;
		case 3:listarLivros(biblio, MAX); system("pause"); break;
		case 4: break;
		default:printf("\nOpção inválida!\n\n"); break;
		}
	} while (op != 4);*/
	
	//exercício 5
	RESERVA sala [MAX][F][C];
	int op;
	iniciarSala(sala);
	do
	{
		system("CLS");
		printf("\n\n\tMENU****\n");
		printf("1 - Fazer reserva\n");
		printf("2 - Remover reserva\n");
		printf("3 - Listar reservas\n");
		printf("4 - Mapa ocupação\n");
		printf("5 - Sair\n");
		printf("\nDigite opção: ");
		scanf("%d", &op);
		switch (op)
		{
		case 1:printf("Veja o mapa ocupação: \n\n");
		mapaOcupa(sala);printf("\n\n");
		fazerReserva(sala); break;
		case 2:eliminarReserva(sala); break;
		case 3:listar(sala); system("pause"); break;
		case 4: mapaOcupa(sala);break;
		case 5: break;
		default:printf("\nOpção inválida!\n\n"); break;
		}
	} while (op != 5);
	return 0;

}