/* Programa que lê o tempo de duração de um evento
em uma fábrica, expressa em segundos, e mostra-o expresso
em horas, minutos e segundos. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	int t, hora, minuto, segundo, resto;
	
	// Título do programa
	printf("..........EVENTO NA FÁBRICA..........\n\n");
	
	// Pede o tempo de duração do evento em segundos
	printf("Digite o tempo de duraçãoo do evento, em segundos: ");
	scanf("%d", &t);
	
	// Cálculo da conversão do tempo de segundos para hora, minuto e segundo
	hora = t / 3600;
	resto = t % 3600;
	minuto = resto / 60;
	segundo = resto % 60;
	
	// Imprime o resultado da conversão
	printf("\n\nO tempo de duração do evento na fábrica foi de %d horas, %d minutos e %d segundos.", hora, minuto, segundo);
	
	getche();
}