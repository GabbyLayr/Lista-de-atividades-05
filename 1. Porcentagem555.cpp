//Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá 
//ocorrer sobre um valor constante igual a 555. O programa deverá calcular o percentual desejado e 
//apresentar o resultado calculado deste percentual.

#include<stdio.h> 
#include<locale.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    float numero, porcentagem;
    setlocale(LC_ALL, "portuguese");
//Entrada:
	printf("Digite um numero: ");
	scanf("%f", &numero);
	//Calculo e reposta do sistema
	porcentagem = numero*100 / 555;
	
	printf("O resultado do percentual de %2.f sobre 555 é: %2.f", numero, porcentagem);

//Saída:
	
	
	
	
	
return 0;	
}
