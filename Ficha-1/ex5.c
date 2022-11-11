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

int validar_letra_minuscula(char letra){
	// Verifica se é mínuscula
	return letra>='a' && letra<='z';
}
int validar_letra_maiuscula(char letra){
	// Verifica se é maiuscula
	return letra>='A' && letra<='Z';
}
int validar_digito(char letra){
	// Verifica se é dígito
	return letra>='0' && letra<='9';
}
int validar_pontuacao(char letra){
	// Verifica pontuação
	return (letra==',')||
		(letra==';')||
		(letra=='.')||
		(letra==':')||
		(letra=='!')||
		(letra=='?')||
		(letra=='-');
	}


int main (int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	char letra;

	
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	if (validar_letra_minuscula(letra)){
		printf("A letra e minuscula");
	}
		else if (validar_letra_maiuscula(letra)) {
			printf("A letra e maiuscula");
		}
		else if (validar_letra_maiuscula(letra)) {
			printf("A letra e maiuscula");
		}
		else if (validar_digito(letra)) {
			printf("A letra e um digito");
		}
		else if (validar_pontuacao(letra)) {
			printf("A letra e um sinal pontuacao");
		}
	
	/*
	char letMai, letMin, charPont, charInser;
	int digito;
	
	printf("Insira um caracter: ");
	scanf("%c", &charInser);
	
	if((charInser<='z')&&(charInser>='a'))
		printf("Minúscula!\n");
	else
	{ 
		if((charInser<='Z')&&(charInser>='A'))
			printf("Maiúscula!\n");
		else
		{ 
			if((charInser<='9')&&(charInser>='0'))
				printf("Dígito!\n");
			else
			{ 
				if((charInser==',')||(charInser==';')||(charInser=='.')||(charInser==':')||(charInser=='!')||(charInser=='?')||(letra=='-'))
					printf("Pontuação!\n");
				else
				{
					printf("Outro caracter!\n");
				}
			}
		}
	}
	*/

    return 0;
}