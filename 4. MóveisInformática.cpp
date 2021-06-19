//Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de 
//informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são: 
//1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando 
//se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int opcao;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("-- Loja de máveis de informatica --\n");
    printf("\nSelecione um móvel:\n");
    printf("1. Cadeira\n2. Mesa de computador\n3. Estande de livros\4. Mesa de impressora\n5. Estande de CD\n");
    printf("Opção: ");
    scanf("%d", &opcao);
//Saída:
    if (opcao == 1){
    	printf("Você selecionou o móvel Cadeira!");
	      }else if (opcao == 2){
		     printf("Você selecionou o móvel Mesa de computador!");
	          }else if (opcao == 3){
	          	printf("Você selecionou o móvel Estande de livros!");
			      }else if (opcao == 4){
			      	printf("Você selecionou o móvel Mesa de impressoras!");
				      }else if (opcao == 5){
				      	printf("Você selecionou o móvel Estande de CD!");
					      }else{
					      	printf("Esse móvel ainda não está disponível em nossas lojas");}
	
return 0;	
}
