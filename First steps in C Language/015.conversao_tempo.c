/* Programa que l� o tempo de dura��o de um evento
em uma f�brica, expressa em segundos, e mostra-o expresso
em horas, minutos e segundos. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int t, hora, minuto, segundo, resto;
	
	// T�tulo do programa
	printf("..........EVENTO NA F�BRICA..........\n\n");
	
	// Pede o tempo de dura��o do evento em segundos
	printf("Digite o tempo de dura��oo do evento, em segundos: ");
	scanf("%d", &t);
	
	// C�lculo da convers�o do tempo de segundos para hora, minuto e segundo
	hora = t / 3600;
	resto = t % 3600;
	minuto = resto / 60;
	segundo = resto % 60;
	
	// Imprime o resultado da convers�o
	printf("\n\nO tempo de dura��o do evento na f�brica foi de %d horas, %d minutos e %d segundos.", hora, minuto, segundo);
	
	getche();
}