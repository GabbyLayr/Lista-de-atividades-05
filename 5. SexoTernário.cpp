//Fa�a um programa que pergunte ao usu�rio qual a letra inicial do seu sexo (masculino/feminino) e 
//escreva por extenso o sexo informado, usando o operador condicional tern�rio


#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    char sexo;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("\nDiga o sexo sendo F. para feminino e M. para masculino:\n >");
	scanf("%c", &sexo);
	fflush(stdin);
	sexo = toupper(sexo); 
//Sa�da: operador tern�rio
	sexo == 'F' ? printf("(F) Voc� selecionou o sexo feminino") : printf("(M) Voc� selecionou o sexo masculino");
	
return 0;	
}
