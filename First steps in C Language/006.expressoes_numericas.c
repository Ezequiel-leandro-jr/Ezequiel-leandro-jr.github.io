/* Programa que testa diferentes valores para as variáveis
   de acordo com as expressões numéricas */

main() {
	int MEDIA, NOTA, TOTAL, Z, K, X, I, J, A;

	
	MEDIA = 0;
	NOTA = 2;
	TOTAL = 10;
	Z = 0;
	K = 7;
	X = 4; 
	I = 80;
	J = -1;
	A = -4;
	
	//1)
	X = TOTAL / NOTA;
	printf("1) O valor de X = %d\n\n", X);
	
	X = 4;
	
	//2)
	X = X + 1;
	printf("2) O valor de X = %d\n\n", X);
	
	X = 4;
	
	//3)
	NOTA = X;
	printf("3) O valor de NOTA = %d\n\n", NOTA);
	
	X = 4;
	NOTA = 2;
	
	//4) 
	TOTAL = NOTA + X + TOTAL;
	printf("4) O valor de TOTAL = %d\n\n", TOTAL);
	
	TOTAL = 10;
	
	//5)
	MEDIA = 3;
	printf("5) O valor de MEDIA = %d\n\n", MEDIA);
	
	MEDIA = 0;
	
	//6)
	K += 9;
	printf("6) O valor de K = %d\n\n", K);
	
	K = 7;
		float z;
	

    //7)
	z = (float)J / 5;
	printf("7) O valor de Z = %.2f\n\n", z);
	
	                           
	//8)
	K = I % 5;
	printf("8) O valor de K = %d\n\n", K);
	
	K = 7;
	
	//9)
	I ++;
	printf("9) O valor de I = %d\n\n", I);
	
	I = 80;
	
	//10)
	I = I + 2 * A;
	printf("10) O valor de I = %d\n\n", I);
	
	I = 80;
	
	system("pause");
}