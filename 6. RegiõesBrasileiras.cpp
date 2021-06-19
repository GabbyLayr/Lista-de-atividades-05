//Desenvolva um programa em C que apresente um menu de op��es numa janela �bem� amig�vel ao 
//usu�rio, onde este dever� escolher qual a regi�o do Brasil que ele gostaria de conhecer. Ap�s o usu�rio 
//informar esta regi�o, limpe toda a janela e escreva no meio dela qual foi a op��o do usu�rio. Lembrando 
//que as regi�es dever�o ser apresentadas conforme o seguinte menu de op��es:
//Menu de Op��es
//============
//1 � Norte
//2 � Nordeste
//3 � Centro-Oeste
//4 � Sudeste
//5 � Sul
//0 � Sair do programa


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
    printf("Seja Bem-Vindo(a)\n");
    printf("Queremos que voc~e respoda uma pesquisa dizendo para n�s:\n");
    printf("  'Qual regi�o do Brasil voc� gostaria de conhecer?'  \n");
    printf("\n1. Norte\n2. Nordeste\n3. Centro-Oeste\n4. Sudeste\n5. Sul\n0. Sair do programa\n");
    printf("\nOp��o: ");
    scanf("%d", &opcao);
//Sa�da:
	if(opcao == 1){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegi�o Norte:	");
		    printf("\n\t\tSeus estados s�o: Tocantins, Par�, Amap�, Roraima, Amazonas, Acre, e Rond�nia.");	
	}else if(opcao == 2){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegi�o Nordeste:	");
		    printf("\nSeus estados s�o: Alagoas, Bahia, Cear�, Maranh�o, Piau�, Pernambuco, Para�ba, Rio Grande do Norte e Sergipe.");
    }else if(opcao == 3){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegi�o Centro-Oeste:	");
		    printf("\n\t\t\t\tSeus estados s�o: Goi�s, Mato Grosso, Mato Grosso do Sul e o Distrito Federal.");
    }else if(opcao == 4){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegi�o Sudeste:	");
		    printf("\n\t\t\t\tSeus estados s�o: S�o Paulo, Rio de Janeiro, Minas Gerais e Esp�rito Santo.");
    }else if(opcao == 5){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegi�o Sul:	");
		    printf("\n\t\t\t\t\t\t\t\t\tSeus estados s�o: Paran�, Santa Catarina e Rio Grande do Sul.");
    }else{
    	printf("Fim");
	}

return 0;	
}
