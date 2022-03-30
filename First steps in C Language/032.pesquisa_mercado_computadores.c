/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 26 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 6.Com o lançamento de notebooks no mercado nacional,
um fabricante deseja obter determinadas informações dos
seus possíveis consumidores. Para cada empresa ou órgão
pesquisado foram digitados os seguintes dados:
» Preferência desejada (fabricante): 1-Toshiba/2-HP/3-Sony
» Possuem computadores de grande porte: 1-Sim/2-Não
» Necessitam de notebooks: 1. Sim/2. Não
Deseja-se saber:
» A quantidade de empresas pesquisadas;
» Quantas empresas possuem computadores de grande porte;
» Percentual de empresa que necessitam de notebooks
» Percentual de empresas que tem preferência pela Toshiba.
A quantidade de dados que serão cadastrados é
desconhecida. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
//declaração das variáveis
     int contador, fabricante, desktop, notebook, grandeporte, necessita_notebook, toshiba, continuar;

//atribuição de valores em algumas variáveis
     grandeporte = 0;
     necessita_notebook = 0;
     toshiba = 0;
     contador = 0;

//estrutura de repetição do/while. Enquanto o valor da variável 'continuar' for igual a 1, os comandos serão repetidos
     do
     {
     
     system("cls");
     
     //título do programa
	 printf("\n\n\n\tPESQUISA DE MERCADO\n\n");
	 
	 //aumento do valor do contador em +1
	 contador++;
	 
	 //comando que pede a preferência para a empresa
	 printf("Qual a fabricante preferida pela empresa %d?\n<1-Toshiba,2-HP,3-Sony>\nResposta: ", contador);
	 scanf("%d", &fabricante);
	 
	 //estrutura de if para selecionar a preferência pela Toshiba
	 if(fabricante == 1)
	     toshiba++;
	     
	 //comando que pede dado referente à posse de computador de grande porte por parte da empresa
	 printf("\nA empresa %d possui computador(es) de grande porte?\n<1-Sim,2-Não>\nResposta: ", contador);
	 scanf("%d", &desktop);
	 
	 //estrutura de if para selecionar empresas que possuem computadores de grande porte
	 if(desktop == 1)
	     grandeporte++;
	
	 //comando que pede dado referente à necessidade de notebook por parte da empresa
	 printf("\nA empresa %d necessita de notebook(s)?\n<1-Sim,2-Não>\nResposta: ", contador);
	 scanf("%d", &notebook);
	 
	 //estrutura de if para selecionar empresas que necessitam de notebook(s)
	 if(notebook ==1)
	     necessita_notebook++;
	 
	 //Comando de leitura e estrutura de repetição if para que o usuário decida continuar o cadastro de empresas
	 printf("\n\nVocê deseja cadastrar outra empresa?\n\t<1-Sim,2-Não>\nResposta: ");
	 scanf("%d", &continuar);
	 
	 }while(continuar==1);
	 
	 system("cls");
	 
	 //título dos resultados
	 printf("\n\n\n\tR E S U L T A D O S\n\n\n");
	 
	 //impressão da quantidade de empresas pesquisadas
	 printf("EMPRESAS PESQUISADAS: %d", contador);
	 
	 //impressão do número de empresas que possuem computadores de grande porte
	 printf("\nNÚMERO DE EMPRESAS QUE POSSUEM COMPUTADOR(ES) DE GRANDE PORTE.......... %d", grandeporte);
	 
	 //impressão do percentual de empresas que necessitam de notebooks
	 printf("\nPERCENTUAL DE EMPRESAS QUE NECESSITAM DE NOTEBOOK(S)................... %d%%", (necessita_notebook*100)/contador);
	 
	 //impressão do percentual de empresas que têm preferência pela toshiba
	 printf("\nPERCENTUAL DE EMPRESAS QUE TÊM PREFERÊNCIA PELA TOSHIBA................ %d%%", (toshiba*100)/contador);
	 
	 getche();

 }