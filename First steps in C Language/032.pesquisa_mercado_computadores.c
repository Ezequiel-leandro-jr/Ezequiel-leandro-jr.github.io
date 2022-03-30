/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 26 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 6.Com o lan�amento de notebooks no mercado nacional,
um fabricante deseja obter determinadas informa��es dos
seus poss�veis consumidores. Para cada empresa ou �rg�o
pesquisado foram digitados os seguintes dados:
� Prefer�ncia desejada (fabricante): 1-Toshiba/2-HP/3-Sony
� Possuem computadores de grande porte: 1-Sim/2-N�o
� Necessitam de notebooks: 1. Sim/2. N�o
Deseja-se saber:
� A quantidade de empresas pesquisadas;
� Quantas empresas possuem computadores de grande porte;
� Percentual de empresa que necessitam de notebooks
� Percentual de empresas que tem prefer�ncia pela Toshiba.
A quantidade de dados que ser�o cadastrados �
desconhecida. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
//declara��o das vari�veis
     int contador, fabricante, desktop, notebook, grandeporte, necessita_notebook, toshiba, continuar;

//atribui��o de valores em algumas vari�veis
     grandeporte = 0;
     necessita_notebook = 0;
     toshiba = 0;
     contador = 0;

//estrutura de repeti��o do/while. Enquanto o valor da vari�vel 'continuar' for igual a 1, os comandos ser�o repetidos
     do
     {
     
     system("cls");
     
     //t�tulo do programa
	 printf("\n\n\n\tPESQUISA DE MERCADO\n\n");
	 
	 //aumento do valor do contador em +1
	 contador++;
	 
	 //comando que pede a prefer�ncia para a empresa
	 printf("Qual a fabricante preferida pela empresa %d?\n<1-Toshiba,2-HP,3-Sony>\nResposta: ", contador);
	 scanf("%d", &fabricante);
	 
	 //estrutura de if para selecionar a prefer�ncia pela Toshiba
	 if(fabricante == 1)
	     toshiba++;
	     
	 //comando que pede dado referente � posse de computador de grande porte por parte da empresa
	 printf("\nA empresa %d possui computador(es) de grande porte?\n<1-Sim,2-N�o>\nResposta: ", contador);
	 scanf("%d", &desktop);
	 
	 //estrutura de if para selecionar empresas que possuem computadores de grande porte
	 if(desktop == 1)
	     grandeporte++;
	
	 //comando que pede dado referente � necessidade de notebook por parte da empresa
	 printf("\nA empresa %d necessita de notebook(s)?\n<1-Sim,2-N�o>\nResposta: ", contador);
	 scanf("%d", &notebook);
	 
	 //estrutura de if para selecionar empresas que necessitam de notebook(s)
	 if(notebook ==1)
	     necessita_notebook++;
	 
	 //Comando de leitura e estrutura de repeti��o if para que o usu�rio decida continuar o cadastro de empresas
	 printf("\n\nVoc� deseja cadastrar outra empresa?\n\t<1-Sim,2-N�o>\nResposta: ");
	 scanf("%d", &continuar);
	 
	 }while(continuar==1);
	 
	 system("cls");
	 
	 //t�tulo dos resultados
	 printf("\n\n\n\tR E S U L T A D O S\n\n\n");
	 
	 //impress�o da quantidade de empresas pesquisadas
	 printf("EMPRESAS PESQUISADAS: %d", contador);
	 
	 //impress�o do n�mero de empresas que possuem computadores de grande porte
	 printf("\nN�MERO DE EMPRESAS QUE POSSUEM COMPUTADOR(ES) DE GRANDE PORTE.......... %d", grandeporte);
	 
	 //impress�o do percentual de empresas que necessitam de notebooks
	 printf("\nPERCENTUAL DE EMPRESAS QUE NECESSITAM DE NOTEBOOK(S)................... %d%%", (necessita_notebook*100)/contador);
	 
	 //impress�o do percentual de empresas que t�m prefer�ncia pela toshiba
	 printf("\nPERCENTUAL DE EMPRESAS QUE T�M PREFER�NCIA PELA TOSHIBA................ %d%%", (toshiba*100)/contador);
	 
	 getche();

 }