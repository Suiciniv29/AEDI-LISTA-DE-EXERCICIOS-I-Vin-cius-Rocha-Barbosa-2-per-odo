//Questão 3, diversas operações
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	float n1, n2, res1, res2, res3;
	
	printf ("Informe 2 números reais:\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	
	// aqui iremos calcular as 3 operações
	res1 = n1*2;
	res2 = n1*3 + n2/2;
	res3 = sqrt(n1+n2);
	
	printf ("O dobro do primeiro número é:%.2f\n", res1);
	printf("A soma do triplo do primeiro número com a metade do segundo número é:%.2f\n", res2);
	printf("A raiz quadrada da soma do primeiro número com o segundo número é:%.2f\n", res3);
	
return 0;
}
