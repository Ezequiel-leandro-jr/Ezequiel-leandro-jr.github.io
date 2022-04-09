/* ETE GINÁSIO PERNAMBUCANO
   RECIFE, 26 DE MARÇO DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA JÚNIOR
   ATIVIDADES DO CAPÍTULO 2, VOLUME 2 */

/* 8.A Empresa Legal decidiu fazer um levantamento dos candidatos
que se inscreveram para preenchimento de vaga no seu quadro
de funcionários, utilizando processamento eletrônico e você foi
contratado, então faça um programa que:
Leia um conjunto de informações para cada candidato,
contendo: número de inscrição do candidato, idade, sexo(1-
fem/2-mas), experiência anterior(1-sim/2-nao)
Calcule:
» Quantidade de candidatos
» Quantidade de candidatas
» Média de idade dos homens com experiência
» Percentagem dos homens com mais de 45 anos, entre os
homens
» Quantidade de mulheres com idade inferior a 35 anos e com
experiência
» Menor idade entre as mulheres que já tem experiência no
serviço
A quantidade de dados que serão cadastrados é
desconhecida. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>


  int main(void) 
 {  
 //comando que permite o uso de acentuação
     setlocale(LC_ALL, "Portuguese");
    
 //declaração das variáveis
     int contador, homem, mulher, idade, genero, experiencia, continuar, mulher_35menos, menor_mulher_exp, maior_mulher_exp;
     float homem_exp, idade_homem_exp, homem_45mais;
     char inscricao[20];
     
//atribuição de valores a algumas varáveis
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

//estrutura de repetição do\while. Executa os comandos abaixo do do e repete posteriormente se continuar = 1
     do
     {
        system("cls");
     	
     	//título
     	printf("\n\n\n\tEMPRESA LEGAL\n       Levantamento dos candidatos\n\n");
     	
     	//acréscimo do valor do contador
     	contador++;
     	
     	//comandos que pedem o número de inscrição do candidato, idade, sexo e experiência anterior
     	printf("Digite o número de inscrição do candidato %d\nResposta: ", contador);
     	fflush(stdin);
     	gets(inscricao);
        
        printf("\nQual a idade do candidato %d?\nResposta: ", contador);
     	scanf("%d", &idade);
     	
     	printf("\nCom qual gênero se identifica o candidato %d?\n<1-Masc,2-Fem>\nResposta: ", contador);
     	scanf("%d", &genero);
     	
     	printf("\nO candidato %d possui experiência anterior?\n<1-Sim,2-Não>\nResposta: ", contador);
     	scanf("%d", &experiencia);
     	
     	//estrutura de decisão para acrescentar o valor de 1 à variável homem ou mulher
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
			
	    printf("\n\nVocê deseja cadastrar mais um candidata(o)?\n<1-Sim,2-Não>\nResposta: ");
	    scanf("%d", &continuar);
		
	 }while(continuar == 1);
	 
	 system("cls"); //limpa a tela para mostrar novos resultados
     
     // Resultado dos números de candidatos e candidatas
     printf("\n\n\tO NÚMERO DE HOMENS É = %d.", homem);
	 printf("\n\tO NÚMERO DE MULHERES É = %d.", mulher);
	 
     // Resultado da média de idade dos homens com experiência e da
     // percentagem dos homens com mais de 45 anos, entre os homens
     printf("\n\n\tA MÉDIA DE IDADE ENTRE OS HOMENS COM EXPERIÊNCIA É = %.2f", idade_homem_exp/homem_exp);
     printf("\n\tA PERCENTAGEM DE HOMENS COM MAIS DE 45 ANOS É = %.2f%%", (homem_45mais*100)/homem);
     
     // Resultado da quantidade de mulheres com idade inferior a 35 anos com experiência e 
	 // da menor idade entre as mulheres que já tem experiência no serviço
     printf("\n\n\tA QUANTIDADE DE MULHERES COM MENOS DE 35 ANOS E COM EXPERIÊNCIA É = %d.", mulher_35menos);
	 printf("\n\tA MENOR IDADE ENTRE AS MULHERES COM EXPERIÊNCIA É = %d ANOS, ", menor_mulher_exp);
     
  getche();	
            
	 }
     
