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

int main (int argc, char *argv[]) {
    float valor1, valor2;
	char operacao;
	float resultado;
	
	printf("Escreva a sua operacao: ");
	scanf("%f%c%f", &valor1, &operacao, &valor2);
	
	switch(operacao) {
		case '+': {
			resultado = valor1+valor2;
			break;
		}
		case '*': {
			resultado = valor1*valor2;
			break;
		}
			
		case '/': {
			resultado = valor1/valor2;
			break;
		}
			
		case '-': {
			resultado = valor1-valor2;
			break;
		}
			
	}
/*	
	}
	if(operacao=='+'){
		resultado = valor1+valor2;
	}
	if(operacao=='/'){
		resultado = valor1/valor2;
	}
	if(operacao=='*' || operacao=='x'){
		resultado = valor1*valor2;
	}
	if(operacao=='-'){
		resultado = valor1-valor2;
	}
	
	*/
	printf("O resultado e %f", resultado);
    
    return 0;
}