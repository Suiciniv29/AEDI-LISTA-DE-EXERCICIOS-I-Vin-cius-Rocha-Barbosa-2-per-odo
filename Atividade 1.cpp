//Quest�o 1, calculo area quadrado
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int lado, area, dobro;
	lado = 0;
	printf("Informe o lado do quadrado:\n");
	scanf("%d", &lado);
	area = (lado*lado);
	dobro = (area*2);
	printf("A �rea do quadrado �:%d\nE o dobro dessa �rea �:%d",area,dobro);
	
	return 0;
}
