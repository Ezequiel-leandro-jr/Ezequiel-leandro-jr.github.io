/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 25 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 2.Pablo tem 1,50 m e cresce 2 cent�metros por ano, enquanto
Edson tem 1,10 m e cresce 3 cent�metros por ano. Construa
um programa que calcule e imprima quantos anos ser�o
necess�rios para que Edson seja maior que Pablo. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>

  int main(void) 
 {  
 //comando que permite o uso de acentua��o
    setlocale(LC_ALL, "Portuguese");
    
//declara��o das vari�veis
    int anos;
    float pablo, edson;
    
//atribui��o do valor nas vari�veis (contador)
    anos = 0;
    pablo = 1.50;
    edson= 1.10;
    
//impress�o da altura de Pablo e seu crescimento por ano
      printf("Atualmente, Pablo tem %.2fM de altura, e cresce 2CM por ano...", pablo);
      getche();
      
      //impress�o da altura de Edson e seu crescimento por ano
      printf("\n\n...enquanto Edson possui %.2fM de altura, e cresce 3CM por ano...", edson);
      getche();
    
//t�tulo do programa
      printf("\n\nQuantos anos ser�o necess�rios para Edson superar Pablo, em altura?\n\nVejamos...");
      getche();
    
//estrutura de repeti��o while   
	while(pablo>=edson) 
	{
	  system("cls");
      
      //acr�scimo de uma unidade ao contador
      anos++;
      
      //atribui��o do valor da vari�vel soma
      pablo = pablo + 0.02;
      edson = edson + 0.03;
      
      
	}
	
	//apresenta��o dos resultados
	printf("\n\n\n\AP�S %d ANOS, EDSON ESTAR� COM %.2fM ANTE AO %.2fM DE PABLO, SUPERANDO-O.\n\n", anos, edson, pablo);
	
    system("pause");
	  
    
}