/* Programa que l� a hora de in�cio e hora de t�rmino
de um jogo, ambas subdivididas em dois valores distintos: horas
e minutos. Calcular e escrever a dura��o do jogo, tamb�m em
horas e minutos, considerando que o tempo m�ximo de dura��o
de um jogo � de 24 horas e que o jogo pode iniciar em um dia e
terminar no dia seguinte. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int hI, hF, hT, mI, mF, mT;
	
	// T�tulo do programa
	printf("...............TEMPO DE DURA��O DE UM JOGO...............\n\n\n\n");
	
	// Subt�tulo
	printf("Voc� ir� informar a hora e o minuto de in�cio e fim do jogo,\n");
	printf(" e o programa ir� mostrar a dura��o da partida.\n\n\n");
	
	// Pede a hora inicial do jogo
	printf("Informe a hora inicial do jogo: ");
	scanf("%d", &hI);
	
	// Pede o minuto inicial do jogo
	printf("Informe o minuto inicial do jogo: ");
	scanf("%d", &mI);
	
	// Pede a hora final do jogo
	printf("Informe a hora final do jogo: ");
	scanf("%d", &hF);
	
	// Pede o minuto final do jogo
	printf("Informe o minuto final do jogo: ");
	scanf("%d", &mF);
	
	// Sequ�ncia de if else aninhado que calcula a dura��o da partida e imprime o resultado
	if (hI>23) 
	   printf("\n\n\nERRO HORA INICIAL: DADO INCORRETO!");
	 else 
		{ if (mI>59) 
		     printf("\n\nERRO MINUTO INICIAL: DADO INCORRETO!");
		    else 
		        { if (hF>23) 
		         printf("\n\nERRO HORA FINAL: DADO INCORRETO!");
	                else 
			           { if (mF>59) 
					      printf("\n\nERRO MINUTO FINAL: DADO INCORRETO!");
		                    else 
				               { if (hI<hF) 
		                          hT=hF-hI;
					                else
					                   { if (hI>hF)
					                      hT=(hF+24)-hI;
						            }
						    }
					}
			}
	}
		        	    
	if (mI>mF)
	   hT=hT-1;
	  
    if (mI<mF)
       mT=mF-mI;
	   else
	      { if (mI>mF)
	         mT=(mF+60)-mI;
	     }
		 
	if (((hI<=23) || (hF<=23)) || ((mI<59) || (mF<59)))
	  printf("\n\nO tempo de dura��o do jogo foi de %d horas e %d minutos.", hT, mT);
	  
		    
    getche();
}