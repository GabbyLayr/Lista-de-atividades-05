//Faça um programa que leia três valores numéricos e os mostre em ordem crescente

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int N1, N2, N3;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite o 1° número: ");
    scanf("%d", &N1);
    printf("Digite o 2° número: ");
    scanf("%d", &N2);
    printf("Digite o 3° número: ");
    scanf("%d", &N3);
//Saída:
	if(N1 > N2 && N1 > N3 && N2 > N3){
	  printf("\nOrdem crescente: %d . %d . %d", N3, N2, N1);
	    }else if(N1 > N2 && N1 > N3 && N3 > N2){
		   printf("\nOrdem crescente: %d . %d . %d", N2, N3, N1);
	         }else if(N2 > N1 && N2 > N3 && N1 > N3){
		        printf("\nOrdem crescente: %d .  %d . %d", N3, N1, N2);
	              }else if(N2 > N1 && N2 > N3 && N3 > N1){
	            	printf("\nOrdem crescente: %d . %d . %d",N1, N3, N2); 
	                  }else if(N3 > N1 && N3 > N2 && N1 > N2){
		                printf("\nOrdem crescente: %d . %d . %d", N2, N1, N3);
	                     }else{(N3 > N1 && N3 > N2 && N2 > N1);
			                printf("\nOrdem crescente: %d . %d . %d", N1, N2, N3);}

return 0;	
}
