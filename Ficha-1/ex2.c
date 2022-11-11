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
	float dinheiro, custo;
	int quantidade;
	float resto;

	
	printf("Quanto dinheiro tem?: ");
	scanf("%f", &dinheiro);
	printf("Quanto custa o produto?: ");
	scanf("%f", &custo);
	
	quantidade = (int) (dinheiro / custo);
	resto = dinheiro - quantidade * custo;
	
	printf("Pode comprar %d produtos", quantidade);
	printf("\nVai sobrar %f", resto);

    return 0;
}