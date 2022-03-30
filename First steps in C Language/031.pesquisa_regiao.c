/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 26 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 5.Foi feita uma pesquisa entre os 50 habitantes de uma região.
Foram coletados os dados de idade, sexo (1-mas/2-fem) e
salário. Faça um programa que informe:
» a média de salário do grupo;
» maior e menor idade do grupo;
» quantidade de mulheres com salário até R$ 200. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
//declaração das variáveis
     int contador, sexo, idade, maior_idade, menor_idade, mulheres;
     float salario, soma_salario;

//atribuição de valores à algumas variáveis
     mulheres = 0;
     soma_salario = 0;
     
//estrutura de repetição for
     for(contador = 1; contador<=50; contador++) //se o contador, que vale 1 no início, for menor ou igual ao valor 10, realizará os comandos
     {                                          //entre as chaves e, ao fim, acrescerá seu valor em 1, até que seja > 50.
     	system("cls");
     	
     	//título
     	printf("\n\n\n\tPESQUISA DE SALÁRIO\nPesquisa entre os 50 habitantes de uma região\n\n");
     	
     	//comandos que pedem os dados de sexo, idade e salário dos habitantes entrevistados
     	printf("Qual o sexo do %dº habitante entrevistado?\n<1-Masc, 2-Fem>\nResposta: ", contador);
     	scanf("%d", &sexo);
     	
     	printf("\nQual a idade do %dº habitante entrevistado?\nResposta: ", contador);
     	scanf("%d", &idade);
     	
     	printf("\nQual o salário (R$) do %dº habitante entrevistado?\nResposta: ", contador);
     	scanf("%f", &salario);
     	
     	//estrutura de seleção if para somar o número de mulheres que recebem um salário menor que R$200,00 e somar os salários de geral
     	if((sexo == 2) && (salario < 200))
     	    mulheres++;	
			else
			{
				if((sexo==1) || (sexo==2))
				     soma_salario = soma_salario + salario;
			}
			
	    //estrutura de seleção if para processar o dado de maior e menor idade para o primeiro habitante  
		if(contador == 1)
		     maior_idade = idade;
		
		//estrutura de seleção if-else aninhado para processar o dado de maior e menor idade entre o primeiro e o segundo habitantes    
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
			
		//estrutura de seleção if-else aninhado para processar o dado de maior e menor idade entre os 50 habitantes
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
     printf("\n\n\tA MAIOR IDADE DA REGIÃO É DE TEM %d ANOS", maior_idade);
	 printf("\n\tA MENOR IDADE DA REGIÃO É DE TEM %d ANOS", menor_idade);
	 
// Resultado da média da altura entre mulheres e da média da altura da turma
     printf("\n\n\tA MÉDIA SALARIAL DA REGIÃO É DE R$%.2f", soma_salario/contador);
     printf("\n\t\aA QUANTIDADE DE MULHERES QUE RECEBEM MENOS DE R$200,00 É DE %d INDIVÍDUO(S)", mulheres);

     getche();
	 
}

