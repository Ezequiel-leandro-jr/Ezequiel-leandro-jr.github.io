/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 25 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 2.Pablo tem 1,50 m e cresce 2 centímetros por ano, enquanto
Edson tem 1,10 m e cresce 3 centímetros por ano. Construa
um programa que calcule e imprima quantos anos serão
necessários para que Edson seja maior que Pablo. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>

  int main(void) 
 {  
 //comando que permite o uso de acentuação
    setlocale(LC_ALL, "Portuguese");
    
//declaração das variáveis
    int anos;
    float pablo, edson;
    
//atribuição do valor nas variáveis (contador)
    anos = 0;
    pablo = 1.50;
    edson= 1.10;
    
//impressão da altura de Pablo e seu crescimento por ano
      printf("Atualmente, Pablo tem %.2fM de altura, e cresce 2CM por ano...", pablo);
      getche();
      
      //impressão da altura de Edson e seu crescimento por ano
      printf("\n\n...enquanto Edson possui %.2fM de altura, e cresce 3CM por ano...", edson);
      getche();
    
//título do programa
      printf("\n\nQuantos anos serão necessários para Edson superar Pablo, em altura?\n\nVejamos...");
      getche();
    
//estrutura de repetição while   
	while(pablo>=edson) 
	{
	  system("cls");
      
      //acréscimo de uma unidade ao contador
      anos++;
      
      //atribuição do valor da variável soma
      pablo = pablo + 0.02;
      edson = edson + 0.03;
      
      
	}
	
	//apresentação dos resultados
	printf("\n\n\n\APÓS %d ANOS, EDSON ESTARÁ COM %.2fM ANTE AO %.2fM DE PABLO, SUPERANDO-O.\n\n", anos, edson, pablo);
	
    system("pause");
	  
    
}