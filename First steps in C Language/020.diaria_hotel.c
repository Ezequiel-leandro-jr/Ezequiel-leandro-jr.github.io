/* Programa que l� a quantidade de dias que o h�spede
ficou no hotel e imprime a taxa total a pagar. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese"); 
	
	float total;
	int dias;
	#define DIARIA 50.00 // Constante
	
	// T�tulo do programa
	printf("HOTEL CAIARA\n\n\n\n");
	
	// Subt�tulo
	printf("Taxa total (di�ria + servi�o)\n\n\n");
	
	// Pede os dias de hospedagem no hotel
	printf("Digite os dias de sua hospedagem no hotel: ");
	scanf("%d", &dias);
	
	// Sequ�ncia de if else que aumentam o valor da taxa de acordo com a quantidade de dias de hospedagem, e imprime o resultado
	if (dias > 15)
	 	 printf("\n\nTotal a pagar: %.2f", dias*(DIARIA+8.50));
    else
	 { if (dias < 15)
	 	printf("\n\nTotal a pagar: %.2f", dias*(DIARIA+15.30));
       else
	    { if (dias = 15)
	       printf("\n\nTotal a pagar: %.2f", dias*(DIARIA+8.50));
	      else
	         printf("\n\nVALOR INV�LIDO!");   
		}
     }
    getch();
}           
