/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 10. Ler 20 notas e imprimir as tr�s maiores. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>

  int main(void) 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o das vari�veis
 int contador;
 float nota1, nota2, nota3, nota;
 
 //atribui��o de valores em algumas vari�veis
 nota1 = 0;
 nota2 = 0;
 nota3 = 0;
 
 //estrutura de repeti��o for. Se o contador for menor ou igual a 20, os comandos abaixo ser�o executados. Ao fim, o contador aumentar� em 1 unidade
 for (contador = 1; contador <= 20; contador++)
 {       
 	 //t�tulo
 	     printf("\n\n\tAS TR�S MAIORES NOTAS\n\n\n");
 	 
 	 //comando que pede a leitura da nota
 	     printf("Digite a %d� nota: ", contador);
 	     scanf("%f", &nota);
 	 
     //estruturas de sele��o if e de if-else aninhado para determinar as cidades com maior e menor n�meros de acidentes com v�timas  
		if(contador == 1)
			 nota1 = nota;
			 
		if((contador == 2) && (nota>nota1))
		{
			nota2 = nota1;
			nota1 = nota;
		}else
		{
			if((contador == 2) && (nota<nota1))
			 nota2 = nota;
		}
		         
		if((contador == 3) && (nota>nota1))
		{
			 nota3 = nota2;
		     nota2 = nota1;
		     nota1 = nota;
			      
		} else
		    {
		         if((contador == 3) && (nota<nota1) && (nota>nota2))
		         { 
					nota3 = nota2;
					 nota2 = nota;
			
		         }else
		         {
		         	if((contador == 3) && (nota<nota2) && (nota>nota3))
		         	 nota3 = nota;
				 }
						
			}
				
		if((contador > 3) && (nota>nota1))
		 {
		     nota3 = nota2;
		     nota2 = nota1;
		     nota1 = nota;	  
		 }else
		    {
		      if((contador > 3) && (nota<nota1) && (nota>nota2))
		      {
		      	nota3 = nota2;
		      	nota2 = nota;
			  }else
			     if((contador > 3) && (nota<nota2) && (nota>nota3))
			         nota3 = nota;
				 
			}
	system("cls");	
 }
 
 //limpa a tela
 system("cls");
 
 //impress�o dos resultados
 printf("\n\n\tA MAIOR NOTA FOI %.2f", nota1);
 printf("\nA SEGUNDA MAIOR NOTA FOI %.2f", nota2);
 printf("\nA TERCEIRA MAIOR NOTA FOI %.2f", nota3);
 
 getche();
}
 
 