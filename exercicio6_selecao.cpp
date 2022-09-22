#include <stdio.h>

int main() {
	
	int combustivel;

	float preco_final, litros;
	
	printf ("Digite 1 para gasolina e 2 para alcool!\n");
	printf ("Digite o combustivel desejado: ");
	scanf ("%d", &combustivel);
	
	printf ("Digite a quantidade de litros desejada: ");
	scanf ("%f", &litros);

	if (combustivel == 1 && litros <= 20) {
		preco_final = (litros*2.9)*0.97;
		printf ("O valor a ser pago pelo cliente sera %.2f", preco_final);
	}
	else if (combustivel == 1 && litros >20) {
		preco_final = (litros*2.9)*0.95;
		printf ("O valor a ser pago pelo cliente sera %.2f", preco_final);
	}
	else if (combustivel == 2 && litros <=20) {
		preco_final = (litros*3.3)*0.96;
		printf ("O valor a ser pago pelo cliente sera %.2f", preco_final);
	}
	else if (combustivel == 2 && litros <=20) {
		preco_final = (litros*3.3)*0.94;
		printf ("O valor a ser pago pelo cliente sera %.2f", preco_final);	
	}

return 0;

}
