/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 26 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 4.Escrever um programa que leia um conjunto de 10 informações
contendo, cada uma delas, a altura e o sexo(1- mas/2- fem),
calcule e mostre o seguinte:
» a maior e a menor altura da turma
» a média da altura das mulheres
» a média da altura da turma. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
//declaração das variáveis
     int contador, sexo, mulheres, maior_s, menor_s;
     float altura, soma_mulheres, soma_turma, maior_altura, menor_altura, maior_aluno, menor_aluno;
     
//atribuição de valores a algumas variáveis
     soma_mulheres = 0;
     soma_turma = 0;
     mulheres = 0;
     
//estrutura de repetição for
     for(contador = 1; contador<=10; contador++) //se o contador, que vale 1, for menor ou igual ao valor 10, realizará os comandos entre chaves e, ao fim, acrescerá seu valor em 1.
     {
         system("cls");
         
         //título
         printf("\tALTURA E SEXO DOS ALUNOS\n\n\n");
         
		 printf("Qual o sexo da(o) %dº aluna(o)?\n<1-Masc, 2-Fem>\n", contador); //comando que pede o valor do sexo biológico
         scanf("%d", &sexo); //comando que lê o dado requerido
         
         
         printf("\nDigite a altura da(o) %dº aluna(o), em metros: ", contador); //comando que pede o valor da altura
         scanf("%f", &altura); //comando que lê o dado requerido
        
        //estrura de seleção if-else aninhado, para distinguir dados do sexo masculino e feminino
		if(sexo==2)                                             //e realizar a soma das alturas das alunas e a soma das alturas da turma
		{
			soma_mulheres = soma_mulheres + altura;
			soma_turma = soma_turma + altura;
			mulheres++;
		} else
		  {
		  	if(sexo==1)
			 soma_turma = soma_turma + altura;
			else
			 printf("\n\nDADO DE SEXO DA(O) ALUNA(O) NÚMERO %d INVÁLIDO", contador);
		  }
		
		//estrutura de seleção if para processar o dado de altura para o primeiro   
		if(contador == 1)
		     maior_altura = altura;
		     
		     
		
		//estrutura de seleção if-else aninhado para processar o dado de altura entre o primeiro e o segundo     
		if((contador == 2) && (altura>maior_altura))
		{
			 menor_altura = maior_altura;
		     maior_altura = altura;	     
		} else
		    {
		         if((contador == 2) && (altura<maior_altura))
		         {
		         	menor_altura = altura;	
				 }
			}
		
		//estrutura de seleção if-else aninhado para processar o dado de altura entre os 10 alunos
		if((contador > 2) && (altura>maior_altura))
		 {
		     maior_altura = altura;   
		 }else
		    {
		      if((contador > 2) && (altura<menor_altura))
		         menor_altura = altura;     
			}	   
	 }
	 
     system("cls"); //limpa a tela para mostrar novos resultados
     
// Resultado da maior e menor altura da turma
     printf("\n\n\tA(O) MAIOR ALUNA(O) TEM %.2f METROS", maior_altura);
	 printf("\n\tA(O) MENOR ALUNA(O) TEM %.2f METROS", menor_altura);
	 
// Resultado da média da altura entre mulheres e da média da altura da turma
     printf("\n\n\tA MÉDIA DA ALTURA DAS MULHERES É DE %.2f METROS", soma_mulheres/mulheres);
     printf("\n\t\aA MÉDIA DA ALTURA DA TURMA É DE %.2f METROS", soma_turma/10);

     getche();

}