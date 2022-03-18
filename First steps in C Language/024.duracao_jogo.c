/* Programa que lê a hora de início e hora de término
de um jogo, ambas subdivididas em dois valores distintos: horas
e minutos. Calcular e escrever a duração do jogo, também em
horas e minutos, considerando que o tempo máximo de duração
de um jogo é de 24 horas e que o jogo pode iniciar em um dia e
terminar no dia seguinte. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	 
	int hI, hF, hT, mI, mF, mT;
	
	// Título do programa
	printf("...............TEMPO DE DURAÇÃO DE UM JOGO...............\n\n\n\n");
	
	// Subtítulo
	printf("Você irá informar a hora e o minuto de início e fim do jogo,\n");
	printf(" e o programa irá mostrar a duração da partida.\n\n\n");
	
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
	
	// Sequência de if else aninhado que calcula a duração da partida e imprime o resultado
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
	  printf("\n\nO tempo de duração do jogo foi de %d horas e %d minutos.", hT, mT);
	  
		    
    getche();
}