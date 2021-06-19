//Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao 
//usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário 
//informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando 
//que as regiões deverão ser apresentadas conforme o seguinte menu de opções:
//Menu de Opções
//============
//1 – Norte
//2 – Nordeste
//3 – Centro-Oeste
//4 – Sudeste
//5 – Sul
//0 – Sair do programa


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
    printf("Seja Bem-Vindo(a)\n");
    printf("Queremos que voc~e respoda uma pesquisa dizendo para nós:\n");
    printf("  'Qual região do Brasil você gostaria de conhecer?'  \n");
    printf("\n1. Norte\n2. Nordeste\n3. Centro-Oeste\n4. Sudeste\n5. Sul\n0. Sair do programa\n");
    printf("\nOpção: ");
    scanf("%d", &opcao);
//Saída:
	if(opcao == 1){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegião Norte:	");
		    printf("\n\t\tSeus estados são: Tocantins, Pará, Amapá, Roraima, Amazonas, Acre, e Rondônia.");	
	}else if(opcao == 2){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegião Nordeste:	");
		    printf("\nSeus estados são: Alagoas, Bahia, Ceará, Maranhão, Piauí, Pernambuco, Paraíba, Rio Grande do Norte e Sergipe.");
    }else if(opcao == 3){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegião Centro-Oeste:	");
		    printf("\n\t\t\t\tSeus estados são: Goiás, Mato Grosso, Mato Grosso do Sul e o Distrito Federal.");
    }else if(opcao == 4){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegião Sudeste:	");
		    printf("\n\t\t\t\tSeus estados são: São Paulo, Rio de Janeiro, Minas Gerais e Espírito Santo.");
    }else if(opcao == 5){
	  system("cls");
	    printf("\n\n\n\n");
		  printf("\t\t\t\t\t\tRegião Sul:	");
		    printf("\n\t\t\t\t\t\t\t\t\tSeus estados são: Paraná, Santa Catarina e Rio Grande do Sul.");
    }else{
    	printf("Fim");
	}

return 0;	
}
