/* programa para ler o salário do funcionário
e o percentual de reajuste. Calcular e escrever o valor do novo
salário. */

#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL,"Portuguese"); 
	
	 int cargo;
	 float sal, nsal;
	 
	 printf("DEV HOUSE\n\n\n");
	 
	 printf("Digite o número do seu cargo (1-Júnior/2-Pleno/3-Sênior): ");
	 scanf("%d",&cargo);
	 
	 printf("\nSalário atual: ");
	 scanf("%f",&sal);
	 
	 switch (cargo)
	 {	 case 1: nsal=sal*1.3; break;
	 	 case 2: nsal=sal*1.5; break;
	 	 case 3: nsal=sal*1.7; break;
	 	 default: printf("\n\nCargo Inválido!\n"); break;
}
	 if ((cargo>=1) && (cargo<=3))
	 {	 printf("\n\n_________________________\n");
	 	 printf("\n\nResultados\n\n");
	 	 printf("\nSalário Antigo..............: R$ %.2f\n",sal);
	 	 printf("\nSalário Novo................: R$ %.2f\n",nsal);
	 	 printf("\nAumento de R$ %.2f\n",nsal - sal);
}
    if (cargo == 1) {
    	printf("\nReajuste de 30%%\n");
	}
	if (cargo == 2) {
		printf("\nReajuste de 50%%\n");
	}
	if (cargo == 3) {
		printf("\nReajuste de 70%%\n");
	}
	 getche();
}