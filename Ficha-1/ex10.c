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

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes, ano;
	printf("Introduza data (dia mês ano): ");
	scanf("%d%d%d", &dia, &mes, &ano);
	if((ano<1582 || (ano>2100)))
		printf("Ano inválido!\n");
	else
	{	
		switch(mes)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if((dia<1 || (dia>31)))
				printf("Dia inválido");
			else
			{
				printf("Faltam %d dias para o fim do mês!\n", 31-dia);
			break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			if((dia<1) || (dia>30))
				printf("Dia inválido!\n");
			else
			{
				printf("Faltam %d dias para o fim do mês!\n", 30-dia);
			break;
			}
		case 2:
			if((ano%400==0) || ((ano%4==0) && (ano%100!=0)))
			{
				if((dia<1 || (dia>29)))
					printf("Dia inválido!\n");
				else
					printf("Faltam %d dias para o fim do mês!\n", 29-dia);
			}
			else
			{
				if((dia<1) || (dia>28))
					printf("Dia inválido!\n");
				else
				{
					printf("Faltam %d dias para o fim do mês!\n", 28-dia);
				break;
				}
				
			}
		}
	
	
	}

    return 0;
}