//Uma loja de m�veis de inform�tica est� necessitando de um sistema que identifique quais m�veis de 
//inform�tica est�o sendo solicitados pelos seus clientes. Os m�veis disponibilizados por esta empresa s�o: 
//1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando 
//se tratar de um m�vel que n�o exista na empresa informe ao cliente que ainda n�o est� dispon�vel.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int opcao;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("-- Loja de m�veis de informatica --\n");
    printf("\nSelecione um m�vel:\n");
    printf("1. Cadeira\n2. Mesa de computador\n3. Estande de livros\4. Mesa de impressora\n5. Estande de CD\n");
    printf("Op��o: ");
    scanf("%d", &opcao);
//Sa�da:
    if (opcao == 1){
    	printf("Voc� selecionou o m�vel Cadeira!");
	      }else if (opcao == 2){
		     printf("Voc� selecionou o m�vel Mesa de computador!");
	          }else if (opcao == 3){
	          	printf("Voc� selecionou o m�vel Estande de livros!");
			      }else if (opcao == 4){
			      	printf("Voc� selecionou o m�vel Mesa de impressoras!");
				      }else if (opcao == 5){
				      	printf("Voc� selecionou o m�vel Estande de CD!");
					      }else{
					      	printf("Esse m�vel ainda n�o est� dispon�vel em nossas lojas");}
	
return 0;	
}
