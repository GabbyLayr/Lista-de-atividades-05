//Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal 
//e hexadecimal, sendo um em cada linha.

#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>
#include<locale.h>

int main(void){
//Declaração de variáveis:
    char caracter[100];
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite um caracter: ");
    scanf("%c", &caracter[100]);
//Saída:
	printf("\n1. %c em Caracter é: %s", caracter[100], caracter);
	printf("\n2. '%s' em Decimal é: %i", caracter[100],caracter); //char = %i -> decimal
	printf("\n3. '%s' em Octal é: %o", caracter[100], caracter); //char = %d -> octal
	printf("\n4. '%s' em Hexadecimal é: %x", caracter[100], caracter); //char = %x -> hexadecimal

return 0;	
}
