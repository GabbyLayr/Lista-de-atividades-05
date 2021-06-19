//Faça um programa que pergunte ao usuário qual a letra inicial do seu sexo (masculino/feminino) e 
//escreva por extenso o sexo informado, usando o operador condicional ternário


#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declaração de variáveis:
    char sexo;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("\nDiga o sexo sendo F. para feminino e M. para masculino:\n >");
	scanf("%c", &sexo);
	fflush(stdin);
	sexo = toupper(sexo); 
//Saída: operador ternário
	sexo == 'F' ? printf("(F) Você selecionou o sexo feminino") : printf("(M) Você selecionou o sexo masculino");
	
return 0;	
}
