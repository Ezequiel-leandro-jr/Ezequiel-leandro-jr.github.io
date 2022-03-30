/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 26 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 5.Foi feita uma pesquisa entre os 50 habitantes de uma regi�o.
Foram coletados os dados de idade, sexo (1-mas/2-fem) e
sal�rio. Fa�a um programa que informe:
� a m�dia de sal�rio do grupo;
� maior e menor idade do grupo;
� quantidade de mulheres com sal�rio at� R$ 200. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
//declara��o das vari�veis
     int contador, sexo, idade, maior_idade, menor_idade, mulheres;
     float salario, soma_salario;

//atribui��o de valores � algumas vari�veis
     mulheres = 0;
     soma_salario = 0;
     
//estrutura de repeti��o for
     for(contador = 1; contador<=50; contador++) //se o contador, que vale 1 no in�cio, for menor ou igual ao valor 10, realizar� os comandos
     {                                          //entre as chaves e, ao fim, acrescer� seu valor em 1, at� que seja > 50.
     	system("cls");
     	
     	//t�tulo
     	printf("\n\n\n\tPESQUISA DE SAL�RIO\nPesquisa entre os 50 habitantes de uma regi�o\n\n");
     	
     	//comandos que pedem os dados de sexo, idade e sal�rio dos habitantes entrevistados
     	printf("Qual o sexo do %d� habitante entrevistado?\n<1-Masc, 2-Fem>\nResposta: ", contador);
     	scanf("%d", &sexo);
     	
     	printf("\nQual a idade do %d� habitante entrevistado?\nResposta: ", contador);
     	scanf("%d", &idade);
     	
     	printf("\nQual o sal�rio (R$) do %d� habitante entrevistado?\nResposta: ", contador);
     	scanf("%f", &salario);
     	
     	//estrutura de sele��o if para somar o n�mero de mulheres que recebem um sal�rio menor que R$200,00 e somar os sal�rios de geral
     	if((sexo == 2) && (salario < 200))
     	    mulheres++;	
			else
			{
				if((sexo==1) || (sexo==2))
				     soma_salario = soma_salario + salario;
			}
			
	    //estrutura de sele��o if para processar o dado de maior e menor idade para o primeiro habitante  
		if(contador == 1)
		     maior_idade = idade;
		
		//estrutura de sele��o if-else aninhado para processar o dado de maior e menor idade entre o primeiro e o segundo habitantes    
		if((contador == 2) && (idade>maior_idade))
		{
			 menor_idade = maior_idade;
		     maior_idade = idade;	     
		} else
		    {
		         if((contador == 2) && (idade<maior_idade))
		         {
		         	menor_idade = idade;	
				 }
			}
			
		//estrutura de sele��o if-else aninhado para processar o dado de maior e menor idade entre os 50 habitantes
		if((contador > 2) && (idade>maior_idade))
		 {
		     menor_idade = maior_idade;
		     maior_idade = idade;   
		 }else
		    {
		      if((contador > 2) && (idade<menor_idade))
		         menor_idade = idade;     
			}	
	 }
	 
	 system("cls"); //limpa a tela para mostrar novos resultados
     
// Resultado da maior e menor altura da turma
     printf("\n\n\tA MAIOR IDADE DA REGI�O � DE TEM %d ANOS", maior_idade);
	 printf("\n\tA MENOR IDADE DA REGI�O � DE TEM %d ANOS", menor_idade);
	 
// Resultado da m�dia da altura entre mulheres e da m�dia da altura da turma
     printf("\n\n\tA M�DIA SALARIAL DA REGI�O � DE R$%.2f", soma_salario/contador);
     printf("\n\t\aA QUANTIDADE DE MULHERES QUE RECEBEM MENOS DE R$200,00 � DE %d INDIV�DUO(S)", mulheres);

     getche();
	 
}

