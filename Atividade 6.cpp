//Quest�o 6, carro
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int velm, temp, dist,gas;
	
	printf("Informe a velocidade media durante a viagem(em km/h):");
	scanf("%d", &velm);
	printf("Agora informe a dura��o (em horas) da viagem:");
	scanf("%d", &temp);
	dist = velm*temp;
	gas = dist/12;
	printf("A dist�ncia percorrida foi de:%dkm\nVoc� gastou %d litros de gasolina nessa viagem.", dist,gas);
	
return 0;
}
