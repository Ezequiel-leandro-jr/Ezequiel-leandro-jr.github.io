/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 25 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 3.Escrever um programa que leia 5 pares de valores, o primeiro
valor é a matrícula do aluno, e o segundo a sua altura em centímetros. 
Encontre o aluno mais alto e o mais baixo. Mostre a matrícula do aluno mais alto e do mais baixo, 
junto com suas alturas. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
    setlocale(LC_ALL, "Portuguese");
	
//declaração de variáveis
    int contador, matricula, menor_matricula, maior_matricula;
	float altura, menor_altura, maior_altura;

//Estrutura de Decisão for
	for(contador=1; contador<=5; contador++)
	{
		system("cls");
		
		//título
		printf("\tO MAIOR E O MENOR ALUNO\n\n\n");
		
		//leitura da matrícula do aluno
		printf("Digite a matrícula do %d aluno: ", contador);
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
	 
	 //resultado do maior e menor aluno, com suas respectivas matrículas
	 printf("\n\nMAIOR ALUNO\nMatrícula: %d\nAltura: %.2f metros", maior_matricula, maior_altura);
	 printf("\n\nMENOR ALUNO\nMatrícula: %d\nAltura: %.2f metros", menor_matricula, menor_altura); 
	 
	 getche();	      
}
