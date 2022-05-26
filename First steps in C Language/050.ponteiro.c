#include <stdio.h>

int main(void)
{
	int y = 5;
	int *x;
	x = &y;
	
	printf("Valor armazenado na variavel y: %d\n", y);
	printf("Endereco de y: %d\n", &y);
	printf("Valor do conteudo do ponteiro x: %d\n", *x);
	printf("Valor do endereco armazenado no ponteiro x: %d\n", x);
	printf("Valor do endereco de x: %d\n\n", &x);
	
	printf("Alterando o valor armazenado na variavel x: *x = *x + 1 \n\n");
	*x = *x + 1;
	
	printf("Novo valor do conteudo do ponteiro x: %d\n", *x);
	printf("Valor do endereco armazenado no ponteiro x: %d\n", x);
	printf("Valor de y: %d\n", y);
	
	getche();
}