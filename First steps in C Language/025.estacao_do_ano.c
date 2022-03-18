/* Programa que l� uma data (dia e m�s) e informa se �
primavera, ver�o, outono ou inverno. */

#include <stdio.h>
#include <locale.h>

main() {
	
  // Permite o uso de acentua��o dos caracteres	
  setlocale(LC_ALL,"Portuguese"); 
	
  // Declara��o das vari�veis	
  int dia,mes,hemisferio;
  
  // Imprime o t�tulo do programa
  printf(".                         AS QUATRO ESTACOES\n\n\n\n");
  
  // Subt�tulo
  printf("Atraves de dados como o dia, o mes e o hemisferio, iremos informar a estacao do ano correspondente a cada regiao.\n\n\n");
  
  // Pede que o usu�rio diga qual o hemisf�rio
  printf("Se quiser escolher o Hemisferio Norte, tecle 1. Se for o Hemisferio Sul, tecle 2: "); 
  scanf("%d",&hemisferio);
  
  // Pede que se digite um dia
  printf("\n\nDigite um dia: "); 
  scanf("%d",&dia); 
  
  // Pede que se digite um m�s
  printf("\n\nDigite um mes: "); 
  scanf("%d",&mes);
      
      // Sequ�ncia de if else aninhado que determina qual esta��o do ano com base nas vari�veis supracitadas, imprimindo o resultado
      if(hemisferio==1)                                                                         
      {
          if ((mes==4 || mes==5))                           
          {
                     printf("\n\nA estacao correspondente e a PRIMAVERA!");         
          }
          if ((mes==3 && dia>=21))  
          {
          	         printf("\n\nA estacao correspondente e a PRIMAVERA!");   
		  }
		  if ((mes==6 && dia<=20))
		  {
		  	        printf("\n\nA estacao correspondente e a PRIMAVERA!");   
		  }
          if ((mes==7 || mes==8))                           
          {
                     printf("\n\nA estacao correspondente e o VERAO!");
          }
          if ((mes==6 && dia>=21))
          {
          	         printf("\n\nA estacao correspondente e o VERAO!");
		  }
		  if ((mes==9 && dia<=22))  
		  {
		  	         printf("\n\nA estacao correspondente e o VERAO!");
		  }
          if ((mes==10 || mes==11))                        
          {
                      printf("\n\nA estacao correspondente e o OUTONO!");
          }
          if ((mes==9 && dia>=23))
          {
          	          printf("\n\nA estacao correspondente e o OUTONO!");
		  }
		  if ((mes==12 && dia<=20)) 
		  {
		  	          printf("\n\nA estacao correspondente e o OUTONO!");
		  }
          if ((mes==1 || mes==2))                           
          {
                     printf("\n\nA estacao correspondente e o INVERNO!");
          }
          if ((mes==12 && dia>=21))
          {
          	         printf("\n\nA estacao correspondente e o INVERNO!");
		  }
		  if ((mes==3 && dia<=20)) 
		  {
		  	         printf("\n\nA estacao correspondente e o INVERNO!");
		  }
		  
      }

      if(hemisferio==2)                                                               
      {
          if ((mes==4 || mes==5))                            
          {
                     printf("\n\nA estacao correspondente e o OUTONO!");
          }
          if ((mes==3 && dia>=21)) 
          {
          	         printf("\n\nA estacao correspondente e o OUTONO!");
		  }
		  if ((mes==6 && dia<=20))
		  {	
		             printf("\n\nA estacao correspondente e o OUTONO!");
		  }
          if ((mes==7 || mes==8))                           
          {
                     printf("\n\nA estacao correspondente e o INVERNO!");                 
          }
          if ((mes==6 && dia>=21))  
          {
          	         printf("\n\nA estacao correspondente e o INVERNO!"); 
		  }
		  if ((mes==9 && dia<=22))
		  {
		  	         printf("\n\nA estacao correspondente e o INVERNO!"); 
		  }
          if ((mes==10 || mes==11))                       
          {
                      printf("\n\nA estacao correspondente e a PRIMAVERA!");
          }
          if ((mes==9 && dia>=23))   
          {
          	          printf("\n\nA estacao correspondente e a PRIMAVERA!");
		  }
		  if ((mes==12 && dia<=20))
		  {
		  	          printf("\n\nA estacao correspondente e a PRIMAVERA!");
		  }
          if ((mes==1 || mes==2))                            
          {
                     printf("\n\nA estacao correspondente e o VERAO!");
          }
          if ((mes==12 && dia>=21)) 
          {
          	         printf("\n\nA estacao correspondente e o VERAO!");
		  }
		  if ((mes==3 && dia<=20))
		  {
		  	         printf("\n\nA estacao correspondente e o VERAO!");
		  }
      }
getche();

}