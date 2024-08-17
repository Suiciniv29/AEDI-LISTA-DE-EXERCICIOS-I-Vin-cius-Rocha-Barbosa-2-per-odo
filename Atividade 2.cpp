//Questão 2, calculo temp
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale (LC_ALL, "portuguese");
	float celsius, fahr;

	printf("Informe a temperatura em C°:");
	scanf("%f",&celsius);
	fahr = (celsius*9/5)+32;
	printf("Essa temperatura em F° é: %.2f", fahr);

return 0;
}
