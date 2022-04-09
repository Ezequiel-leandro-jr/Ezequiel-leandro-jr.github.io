/* ETE GIN�SIO PERNAMBUCANO
   RECIFE, 28 DE MAR�O DE 2022
   DESENVOLVIMENTO DE SISTEMAS
   ALUNO: EZEQUIEL LEANDRO DA SILVA J�NIOR
   ATIVIDADES DO CAP�TULO 2, VOLUME 2 */

/* 9. Fa�a um programa para realizar a totaliza��o dos votos da 
elei��o para a prefeitura concorrida entre 3 candidatos. 
Para cada se��o s�o informados o n�mero de votos do candidato A, 
o n�mero de votos do candidato B, o n�mero de votos do 
candidato C, o n�mero de votos brancos e o n�mero de votos 
nulos. A quantidade de se��es que ser�o cadastradas � 
desconhecida. Determine e imprima:
� O n�mero de votantes;
� O total de votos de cada candidato;
� O total de votos brancos e total de votos nulos;
� O total de votos v�lidos;
� O candidato com maior n�mero de votos;
� Se a elei��o foi v�lida e para isso o total de votos brancos 
mais votos nulos deve ser menor que o total de votos v�lidos;
� Se haver� segundo turno, para n�o haver segundo turno 
basta que o total de votos do candidato vencedor seja maior 
que 50% dos votos v�lidos
� Percentual de votos nulos. */

//RESPOSTA:

#include <stdio.h>
#include <locale.h>
#include <string.h>


  int main(void) 
 {  
 //comando que permite o uso de acentua��o
     setlocale(LC_ALL, "Portuguese");
    
 //declara��o das vari�veis
     int continuar, contador, candidatoA, candidatoB, candidatoC, branco, nulo;
     int totalA, totalB, totalC, totalBranco, totalNulo;
     char maior_candidato[20];
     
     continuar = 0;
     contador = 0;
     candidatoA = 0;
     candidatoB = 0;
     candidatoC = 0;
     branco = 0;
     nulo = 0;
     totalA = 0;
     totalB = 0;
     totalC = 0;
     totalBranco = 0;
     totalNulo = 0;

 //in�cio da estrutura de repeti��o do/while para processar os dados
     do
     {  
        //comando para limpar a tela a cada se��o
        system("cls");
        
        //t�tulo do programa
        printf("\tELEI��ES PREFEITURA DE ABRAVAL�NDIA\n\n\n");
      
        //acr�scimo unit�rio do contador
     	contador = contador + 1;
     	
     	//comandos que pedem a leitura dos votos dos 3 candidatos, brancos e nulos
     	printf("Digite o n�mero de votos para o CANDIDATO A durante a se��o %d.\nResposta: ", contador);
     	scanf("%d", &candidatoA);
     	
     	printf("\nDigite o n�mero de votos para o CANDIDATO B durante a se��o %d.\nResposta: ", contador);
     	scanf("%d", &candidatoB);
     	
     	printf("\nDigite o n�mero de votos para o CANDIDATO C durante a se��o %d.\nResposta: ", contador);
     	scanf("%d", &candidatoC);
     	
     	printf("\nDigite o n�mero de votos BRANCOS durante a se��o %d.\nResposta: ", contador);
     	scanf("%d", &branco);
     	
     	printf("\nDigite o n�mero de votos NULOS durante a se��o %d.\nResposta: ", contador);
     	scanf("%d", &nulo);
     	
     	//c�lculo do n�mero total de votantes(total de votos v�lidos), e total de voto dos 3 candidatos, brancos e nulos
     	 totalA = totalA + candidatoA;
     	 totalB = totalB + candidatoB;
     	 totalC = totalC + candidatoC;
     	 totalBranco = totalBranco + branco;
     	 totalNulo = totalNulo + nulo;
		 
		 
		//comando para limpar a tela a cada se��o
         system("cls");
     	
     	//t�tulo do programa
         printf("\n\n\tELEI��ES PREFEITURA DE ABRAVAL�NDIA\n\n\n");
        
     	//impress�o dos resultados da se��o
     	 printf("\tVOTOS SE��O %d\n\n", contador);
     	 printf("CANDIDATO A.... %d VOTOS", candidatoA);
     	 printf("\nCANDIDATO B.... %d VOTOS", candidatoB);
     	 printf("\nCANDIDATO C.... %d VOTOS", candidatoC);
     	 printf("\nBRANCOS........ %d VOTOS", branco);
     	 printf("\nNULOS.......... %d VOTOS", nulo);
     	 
     	//estrutura de decis�o if/else aninhado para determinar o candidato mais votado
         if((totalA>totalB) && (totalA>totalC))
             strcpy(maior_candidato, "CANDIDATO A");
         else
         {  
	     if((totalB>totalA) && (totalB>totalC))
            strcpy(maior_candidato, "CANDIDATO B");
         else
         {
             if((totalC>totalA) && (totalC>totalB))
                 strcpy(maior_candidato, "CANDIDATO C");
         }
         }
         
        //comando para continuar ou n�o com as se��es
     	 printf("\n\nDeseja cadastrar nova se��o <1-Sim, 2-N�o>?\nResposta: ");
     	 scanf("%d", &continuar);
     	
	 } while(continuar == 1);
  
 //os comandos abaixo trar�o os resultados da elei��o
     system("cls");
     
 //t�tulo do programa
     printf("\n\n\tELEI��ES PREFEITURA DE ABRAVAL�NDIA\n\tRESULTADO FINAL\n\n\n");
     
 //impress�o do n�mero de votantes, votos dos tr�s candidatos, brancos e nulos e candidato com maior n�mero
     printf("N�MERO DE VOTANTES......... %d ELEITORES", totalA + totalB + totalC + totalBranco + totalNulo);
     printf("\nCANDIDATO A................ %d VOTOS", totalA);
     printf("\nCANDIDATO B................ %d VOTOS", totalB);
     printf("\nCANDIDATO C................ %d VOTOS", totalC);
     printf("\nBRANCOS.................... %d VOTOS", totalBranco);
     printf("\nNULOS...................... %d VOTOS", totalNulo);
     printf("\nV�LIDOS.................... %d VOTOS", totalA + totalB + totalC);
     printf("\n\nCANDIDATO COM MAIOR N�MERO DE VOTOS: %s", maior_candidato);
          
 //estrutura de decis�o if/else para determinar se as elei��es foram ou n�o v�lidas
     if(totalA + totalB + totalC > totalBranco + totalNulo)
         printf("\n\n\tELEI��ES V�LIDAS!!");
     else
         printf("\n\n\tELEI��ES INV�LIDAS! TOTAL DE V�TOS V�LIDOS INFEROR � SOMA DE NULOS + BRANCOS!");
         
 //estrutura de decis�o if/else para determinar se as elei��es ter�o segundo turno
     if(maior_candidato > ((totalA + totalB + totalC)*50)/100)
         printf("\nN�O HAVER� SEGUNDO TURNO!");
     else
         printf("\nHAVER� SEGUNDO TURNO!");
         
     getche();   
     
  }
