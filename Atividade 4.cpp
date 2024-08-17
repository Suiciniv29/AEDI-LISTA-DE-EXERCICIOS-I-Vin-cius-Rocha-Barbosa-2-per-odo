//Questao 4, peixes
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "portuguese");
	int peixe, multa;
	
	printf ("Quantos quilos de peixe foram pescados?\n");
	scanf("%d", &peixe);
	multa = (peixe-50)*4; 
	
	if (peixe<= 50) {
		printf("OK");
	} else {
		printf ("O seu excedente foi de %d, e sua multa será de R$%d.", peixe-50, multa);
	}
	return 0;
}
