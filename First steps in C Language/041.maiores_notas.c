/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 28 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 10. Ler 20 notas e imprimir as três maiores. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>

  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração das variáveis
 int contador;
 float nota1, nota2, nota3, nota;
 
 //atribuição de valores em algumas variáveis
 nota1 = 0;
 nota2 = 0;
 nota3 = 0;
 
 //estrutura de repetição for. Se o contador for menor ou igual a 20, os comandos abaixo serão executados. Ao fim, o contador aumentará em 1 unidade
 for (contador = 1; contador <= 20; contador++)
 {       
 	 //título
 	     printf("\n\n\tAS TRÊS MAIORES NOTAS\n\n\n");
 	 
 	 //comando que pede a leitura da nota
 	     printf("Digite a %dº nota: ", contador);
 	     scanf("%f", &nota);
 	 
     //estruturas de seleção if e de if-else aninhado para determinar as cidades com maior e menor números de acidentes com vítimas  
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
 
 //impressão dos resultados
 printf("\n\n\tA MAIOR NOTA FOI %.2f", nota1);
 printf("\nA SEGUNDA MAIOR NOTA FOI %.2f", nota2);
 printf("\nA TERCEIRA MAIOR NOTA FOI %.2f", nota3);
 
 getche();
}
 
 