/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 3, VOLUME 2 */

/* 04. Desenvolva uma função que recebe o ano de nascimento do
usuário e retorna a sua idade. Faça o cálculo usando o ano
atual. */

//RESPOSTA:

//declaração das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(void)
{   //comando para escrever com acentuação
	setlocale(LC_ALL, "Portuguese");
	
	//criação do novo tipo de variável (registro): cadastro
	typedef struct
	{
		char codigo[5], nome[20];
		int roteiro, quarto, carro, dias, inserir;
		float total;
	} tipoCadastro;
	
	//declaração de variáveis
	tipoCadastro clientes[50];
	int c = 0;
	int q = 0;
	int i = 0;
	int inserir;
	
	//estrutura do/while para repetir operação de cadastro
	do{
		//limpa-tela
		system("cls");
		
		//acrescimo de q em +1
		q++;
		
		//título
	    printf("\n\n\tVIAGEM LEGAL - TURISMO\n\n\n");
	    printf("Cadastro de Cliente\n\n");
	    
	    //comandos para preenchimento dos dados cadastrais
	    printf("Código: ");
	    fflush(stdin);
	    gets(clientes[c].codigo);
	
	    printf("\nNome: ");
	    fflush(stdin);
	    gets(clientes[c].nome);
	
	    printf("\nRoteiro <1-Brasil, 2-EUA, 3-África>: ");
	    scanf("%d", &clientes[c].roteiro);
	
	    printf("\nTipo de Quarto <1-Standard, 2-Luxo>: ");
	    scanf("%d", &clientes[c].quarto);
	
	    printf("\nAlugar Carro <1-Sim, 2-Não>?: ");
	    scanf("%d", &clientes[c].carro);
	
	    printf("\nQuantidade de dias: ");
	    scanf("%d", &clientes[c].dias);
	    
	    //processamento do valor total
	    switch(clientes[c].roteiro)
	    {
	    	case 1:
	    		if(clientes[c].quarto == 1)
	    		{
	    			clientes[c].total = clientes[c].dias*170;
				}else
				 {
				 	clientes[c].total = clientes[c].dias*(170+30);
				 }
				 
			    if(clientes[c].carro == 1)
			    {
			    	clientes[c].total = clientes[c].total + clientes[c].dias*50;
				}
				break;
				
			case 2:
				if(clientes[c].quarto == 1)
	    		{
	    			clientes[c].total = clientes[c].dias*350;
				}else
				 {
				 	clientes[c].total = clientes[c].dias*(350+30);
				 }
				 
			    if(clientes[c].carro == 1)
			    {
			    	clientes[c].total = clientes[c].total + clientes[c].dias*60;
				}
				break;
				
			case 3:
				if(clientes[c].quarto == 1)
	    		{
	    			clientes[c].total = clientes[c].dias*370;
				}else
				 {
				 	clientes[c].total = clientes[c].dias*(370+30);
				 }
				 
			    if(clientes[c].carro == 1)
			    {
			    	clientes[c].total = clientes[c].total + clientes[c].dias*75;
				}
				break;
				
			default:
				system("cls");
				printf("Algum dado está incorreto. Tente novamente...");
				break;
		}
	    
	    c++;
	    
	    //comando para cadastrar outro cliente
	    printf("\n\nInserir outro <1-Sim, 2-Não>?: ");
	    scanf("%d", &inserir);
	    
	  }while((inserir == 1) && (c < 50));
	  
   //limpa-tela
   system("cls");
   
   //comandos para impressão de tabela
   //título
   printf("\n\n\tVIAGEM LEGAL - TURISMO\n\n\n");
   printf("Relatório Geral\n");
   printf("________________________________________________________________________\n");
   printf("Código   Nome                   Roteiro   Quarto   Carro   Dias   Total  ");
   printf("\n_______________________________________________________________________\n");
   
   for(i = 0; i < q; i++)
   {
   	     printf("%6d   %-20s   %-7d   %-6d   %-6d   %-4d   %-5.2f\n", clientes[i].codigo, clientes[i].nome, clientes[i].roteiro, clientes[i].quarto, clientes[i].carro, clientes[i].dias, clientes[i].total);
   }
   
   printf("\n_______________________________________________________________________\n");
   
   printf("Tecle enter para sair...");
   
   getche();
   	   	
	
}