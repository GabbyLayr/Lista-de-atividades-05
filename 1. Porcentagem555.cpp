//Elabore um programa que solicite ao usu�rio um valor percentual a ser calculado. Este c�lculo dever� 
//ocorrer sobre um valor constante igual a 555. O programa dever� calcular o percentual desejado e 
//apresentar o resultado calculado deste percentual.

#include<stdio.h> 
#include<locale.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    float numero, porcentagem;
    setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Digite um numero: ");
	scanf("%f", &numero);
	//Calculo e reposta do sistema
	porcentagem = numero*100 / 555;
	
	printf("O resultado do percentual de %2.f sobre 555 �: %2.f", numero, porcentagem);

//Sa�da:
	
	
	
	
	
return 0;	
}
