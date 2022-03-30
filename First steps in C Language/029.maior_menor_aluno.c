/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 25 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 3.Escrever um programa que leia 5 pares de valores, o primeiro
valor � a matr�cula do aluno, e o segundo a sua altura em cent�metros. 
Encontre o aluno mais alto e o mais baixo. Mostre a matr�cula do aluno mais alto e do mais baixo, 
junto com suas alturas. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentua��o
    setlocale(LC_ALL, "Portuguese");
	
//declara��o de vari�veis
    int contador, matricula, menor_matricula, maior_matricula;
	float altura, menor_altura, maior_altura;

//Estrutura de Decis�o for
	for(contador=1; contador<=5; contador++)
	{
		system("cls");
		
		//t�tulo
		printf("\tO MAIOR E O MENOR ALUNO\n\n\n");
		
		//leitura da matr�cula do aluno
		printf("Digite a matr�cula do %d aluno: ", contador);
		scanf("%d", &matricula);
		
		//Leitura da altura do aluno
		printf("\n\nDigite a altura do %d aluno, em metros: ", contador);
		scanf("%f", &altura);
		
		//if-else aninhado para designar a maior e menor altura entre os dois primeiros alunos
		if(contador == 1)
	    {
		    maior_altura = altura;
		     maior_matricula = matricula;
		}
		
		if((contador == 2) && (altura>maior_altura))
		   { 
		       menor_altura = maior_altura;
		       maior_altura = altura;
		       menor_matricula = maior_matricula;
		       maior_matricula = matricula;
	        } else
		       {  if((contador == 2) && (altura<maior_altura))
                  {
				    menor_altura = altura;
                    menor_matricula = matricula;
                  }
                }
        
        //if-else para designar a maior e menor altura entre todos os 5 alunos
		if((contador > 2) && (altura>maior_altura))
        {
        	maior_altura = altura;
        	maior_matricula = matricula;
		}else
		{
			if((contador > 2) && (altura<menor_altura))
			{
				menor_altura = altura;
				menor_matricula = matricula;
			}
		}
		    	
    }  
	 system("cls");
	 
	 //resultado do maior e menor aluno, com suas respectivas matr�culas
	 printf("\n\nMAIOR ALUNO\nMatr�cula: %d\nAltura: %.2f metros", maior_matricula, maior_altura);
	 printf("\n\nMENOR ALUNO\nMatr�cula: %d\nAltura: %.2f metros", menor_matricula, menor_altura); 
	 
	 getche();	      
}
