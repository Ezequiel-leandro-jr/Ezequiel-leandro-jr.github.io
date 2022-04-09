/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 26 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 8.A Empresa Legal decidiu fazer um levantamento dos candidatos
que se inscreveram para preenchimento de vaga no seu quadro
de funcion�rios, utilizando processamento eletr�nico e voc� foi
contratado, ent�o fa�a um programa que:
Leia um conjunto de informa��es para cada candidato,
contendo: n�mero de inscri��o do candidato, idade, sexo(1-
fem/2-mas), experi�ncia anterior(1-sim/2-nao)
Calcule:
� Quantidade de candidatos
� Quantidade de candidatas
� M�dia de idade dos homens com experi�ncia
� Percentagem dos homens com mais de 45 anos, entre os
homens
� Quantidade de mulheres com idade inferior a 35 anos e com
experi�ncia
� Menor idade entre as mulheres que j� tem experi�ncia no
servi�o
A quantidade de dados que ser�o cadastrados �
desconhecida. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o das vari�veis
     int contador, homem, mulher, idade, genero, experiencia, continuar, mulher_35menos, menor_mulher_exp, maior_mulher_exp;
     float homem_exp, idade_homem_exp, homem_45mais;
     char inscricao[20];
     
//atribui��o de valores a algumas var�veis
     homem_exp = 0;
     homem_45mais = 0;
     mulher_35menos = 0;
     menor_mulher_exp = 0;
     maior_mulher_exp = 0;
     idade_homem_exp = 0;
     contador = 0;
     homem = 0;
     mulher = 0;
     idade = 0;
     genero = 0;
     experiencia = 0;

//estrutura de repeti��o do\while. Executa os comandos abaixo do do e repete posteriormente se continuar = 1
     do
     {
        system("cls");
     	
     	//t�tulo
     	printf("\n\n\n\tEMPRESA LEGAL\n       Levantamento dos candidatos\n\n");
     	
     	//acr�scimo do valor do contador
     	contador++;
     	
     	//comandos que pedem o n�mero de inscri��o do candidato, idade, sexo e experi�ncia anterior
     	printf("Digite o n�mero de inscri��o do candidato %d\nResposta: ", contador);
     	fflush(stdin);
     	gets(inscricao);
        
        printf("\nQual a idade do candidato %d?\nResposta: ", contador);
     	scanf("%d", &idade);
     	
     	printf("\nCom qual g�nero se identifica o candidato %d?\n<1-Masc,2-Fem>\nResposta: ", contador);
     	scanf("%d", &genero);
     	
     	printf("\nO candidato %d possui experi�ncia anterior?\n<1-Sim,2-N�o>\nResposta: ", contador);
     	scanf("%d", &experiencia);
     	
     	//estrutura de decis�o para acrescentar o valor de 1 � vari�vel homem ou mulher
     	/*if(genero == 1)
     		homem++;
     		
     		else
     		    mulher++;
        */
       
	   
	   //estrutura switch case com if para processar os dados requisitados
	    switch(genero)
        {
        	case 1:
				homem++; 
				if(experiencia==1){
					homem_exp++;
					idade_homem_exp+=idade;
				} 
				if (idade>45)
				{
					homem_45mais++;
				}break;
        	case 2:
				mulher++;
				if (idade<35 && experiencia==1)
				{
					mulher_35menos++;
				} 
				if ((menor_mulher_exp==0 && experiencia==1) || (idade<menor_mulher_exp && experiencia==1))
				{
					menor_mulher_exp = idade;
				}break;
		
		}
			
	    printf("\n\nVoc� deseja cadastrar mais um candidata(o)?\n<1-Sim,2-N�o>\nResposta: ");
	    scanf("%d", &continuar);
		
	 }while(continuar == 1);
	 
	 system("cls"); //limpa a tela para mostrar novos resultados
     
     // Resultado dos n�meros de candidatos e candidatas
     printf("\n\n\tO N�MERO DE HOMENS � = %d.", homem);
	 printf("\n\tO N�MERO DE MULHERES � = %d.", mulher);
	 
     // Resultado da m�dia de idade dos homens com experi�ncia e da
     // percentagem dos homens com mais de 45 anos, entre os homens
     printf("\n\n\tA M�DIA DE IDADE ENTRE OS HOMENS COM EXPERI�NCIA � = %.2f", idade_homem_exp/homem_exp);
     printf("\n\tA PERCENTAGEM DE HOMENS COM MAIS DE 45 ANOS � = %.2f%%", (homem_45mais*100)/homem);
     
     // Resultado da quantidade de mulheres com idade inferior a 35 anos com experi�ncia e 
	 // da menor idade entre as mulheres que j� tem experi�ncia no servi�o
     printf("\n\n\tA QUANTIDADE DE MULHERES COM MENOS DE 35 ANOS E COM EXPERI�NCIA � = %d.", mulher_35menos);
	 printf("\n\tA MENOR IDADE ENTRE AS MULHERES COM EXPERI�NCIA � = %d ANOS, ", menor_mulher_exp);
     
  getche();	
            
	 }
     
