//Fa�a um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal 
//e hexadecimal, sendo um em cada linha.

#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>
#include<locale.h>

int main(void){
//Declara��o de vari�veis:
    char caracter[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite um caracter: ");
    scanf("%c", &caracter[100]);
//Sa�da:
	printf("\n1. %c em Caracter �: %s", caracter[100], caracter);
	printf("\n2. '%s' em Decimal �: %i", caracter[100],caracter); //char = %i -> decimal
	printf("\n3. '%s' em Octal �: %o", caracter[100], caracter); //char = %d -> octal
	printf("\n4. '%s' em Hexadecimal �: %x", caracter[100], caracter); //char = %x -> hexadecimal

return 0;	
}
