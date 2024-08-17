//Questao 5, custo do carro
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	float valor, imp, pd;
	//pd = porcentagem do distribuidor
	
	printf("Qual é o valor do carro?");
	scanf("%f",&valor);
	imp = valor*0.28;
	pd= valor*0.45;
	printf("O valor final a ser pago será %.2f, dos quais %.2f representam os impostos, e %.2f representam a porcentagem do distribuidor", valor+imp+pd,imp,pd);

return 0;
}
