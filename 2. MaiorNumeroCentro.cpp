//Desenvolva um programa em C que leia tr�s valores num�ricos e apresente o maior valor informado no 
//meio de uma janela limpa.

#include<stdio.h> //biblioteca de entrada e sa�da: printf e scanf
#include <stdlib.h>
int main(){
//declarar vari�veis:
    double N1, N2, N3, N4;
//receber e processar dados:
	printf("Digite o primeiro numero: ");
	scanf("%lf", &N1);
	
	printf("Digite o segundo numero: ");
	scanf("%lf", &N2);
	
	printf("Digite o terceiro numero: ");
	scanf("%lf", &N3);
//processamento:
    if (N1 > N2 && N1 > N3){
    system("cls");
      printf("           %1.lf e o maior numero!           ", N1);
        }else if (N2 > N1 && N2 > N3){
		system("cls");		
          printf("         %1.lf e o maior numero!           ", N2);
            }else {(N3 > N2 && N3 > N1);
            system("cls");
              printf("       %1.lf e o maior numero!           ", N3);}
			  		
}
