/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 26 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 7.Foi feita uma pesquisa estat�stica nas 50 principais cidades de
quatro Estados para coletar dados sobre acidentes de tr�nsito.
Foram obtidos os seguintes dados:
� C�digo da cidade
� Estado (1-PE, 2-PB, 3-RN, 4-CE)
� N�mero de ve�culos de passeio (em 2008)
� N�mero de acidentes de tr�nsito com v�timas (em 2008)
Deseja-se saber:
� qual o maior e o menor �ndice de acidentes de tr�nsito e a
que cidades pertencem;
� qual a m�dia de ve�culos nas cidades;
� qual a m�dia de acidentes com v�timas entre as cidades do
Estado de Pernambuco. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>
#include <string.h>


  int main(void) 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o das vari�veis
     int contador, estado, num_veiculo, num_acidente; 
     int maior_acidente, menor_acidente, acidente;
     float soma_veiculo, soma_acidente;
     char codigo[20], maior_cidade[20], menor_cidade[20];
     
     soma_acidente = 0;
     acidente = 0;
     
 //estrutura de repeti��o for
     for (contador = 1; contador<=50; contador++) //enquanto o contador for menor ou igual ao valor 50, realizar� os comandos
	 {                                            
	 	system("cls");
     	
     	//t�tulo
     	printf("\n\n\n\tPESQUISA DE TRANSITO\nPesquisa entre as 50 principais cidades de 4 estados do nordeste\n\n");
     	
     	/*comandos que pedem o c�digo da cidade, o estado, o n�mero de ve�culos de passeio na cidade
		  e o n�mero de acidentes de tr�nsito com v�tima na cidade*/
     	printf("Digite o c�digo da cidade %d\nResposta: ", contador);
     	fflush(stdin);
     	gets(codigo);
     	
     	printf("\nQual o estado da cidade?\n<1-PE,2-PB,3-RN,4-CE>\nResposta: ");
     	scanf("%d", &estado);
     	
     	printf("\nQual o n�mero de ve�culos de passeio da cidade?\nResposta: ");
     	scanf("%d", &num_veiculo);
     	
     	printf("\nQual o n�mero de acidentes de tr�nsito com v�tima na cidade?\nResposta: ");
     	scanf("%d", &num_acidente);
     	
     	//estrutura de sele��o if para somar os n�meros de acidentes com v�timas do estado de pernambuco
     	if(estado == 1)
     	{
		     soma_acidente = soma_acidente + num_acidente;
     	     acidente++;
        }
     	
     	//soma dos n�meros de ve�culos de todas as cidades
		soma_veiculo = soma_veiculo + num_veiculo;
     	
     	//estruturas de sele��o if e de if-else aninhado para determinar as cidades com maior e menor n�meros de acidentes com v�timas  
		if(contador == 1)
		{
			 maior_acidente = num_acidente;
		     strcpy(maior_cidade, codigo);
		}
		         
		if((contador == 2) && (num_acidente>maior_acidente))
		{
			 menor_acidente = maior_acidente;
		     maior_acidente = num_acidente;
			 strcpy (menor_cidade, maior_cidade);
			 strcpy (maior_cidade, codigo);	     
		} else
		    {
		         if((contador == 2) && (num_acidente<maior_acidente))
		         {
		         	menor_acidente = num_acidente;
					strcpy (menor_cidade, codigo);	
				 }
			}
				
		if((contador > 2) && (num_acidente>maior_acidente))
		 {
		     maior_acidente = num_acidente;
			 strcpy (maior_cidade, codigo);	   
		 }else
		    {
		      if((contador > 2) && (num_acidente<menor_acidente))
		         menor_acidente = num_acidente;
				 strcpy (menor_cidade, codigo);     
			}
		
	 }
	 system("cls"); //limpa a tela para mostrar novos resultados
     
     // Resultado da maior e menor n�mero de acidentes e as respectivas cidades
     printf("\n\n\tO MAIOR N�MERO DE ACIDENTES COM V�TIMAS � %d, DA CIDADE %s.", maior_acidente, maior_cidade);
	 printf("\n\tO MENOR N�MERO DE ACIDENTES COM V�TIMAS � %d, DA CIDADE %s.", menor_acidente, menor_cidade);
	 
     // Resultado da m�dia de ve�culos nas cidades e da m�dia de acidentes no estado de Pernambuco
     printf("\n\n\tA M�DIA DE VE�CULOS NAS CIDADES � DE %.2f", soma_veiculo/(contador-1));
     printf("\n\tA M�DIA DE ACIDENTES FATAIS ENTRE AS CIDADES DE PERNAMBUCO � DE %.2f", soma_acidente/acidente);
     
    getche(); 
 }