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
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <locale.h>

int main (int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
	
	/*
    short int
	unsigned short int
	unsigned int
	int
	long int
	unsigned long int
	long long int
	unsigned long long int
	signed char
	unsigned char
	float
	double
	long double
	*/
	
	printf("short int %d bytes min=%d max=%d\n\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("unsigned short int %d bytes min=0 max=&d\n\n", sizeof(unsigned short int), USHRT_MAX);
	printf("unsigned int %d bytes min=0 max=&u\n\n", sizeof(unsigned int), UINT_MAX); 
	printf("int %d bytes min= max=&d\n\n", sizeof(int), INT_MIN, INT_MAX);
	printf("long int %d bytes min=&d max=&d\n\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("unsigned long int %d bytes min=0 max=&d\n\n", sizeof(unsigned long));
	printf("long long int %d bytes min=&d max=&d\n\n", sizeof(long long int));
	printf("unsigned long long int %d bytes min=0 max=%d\n\n", sizeof(unsigned long long int));
	printf("signed char %d bytes min=%d max=%d\n\n", sizeof(signed char));
	printf("unsigned char %d bytes min=0 max=%d\n\n", sizeof(unsigned char));
	printf("float %d bytes min=%d max=%d\n\n", sizeof(float));
	printf("double %d bytes min=%d max=%d\n\n", sizeof(double));
	printf("long double %d bytes min=%d max=%d\n\n", sizeof(long double));
	
	
	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
}