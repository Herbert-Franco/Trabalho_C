#include <stdio.h>
#include <stdlib.h>

main () {
	
	int contador, numero, fatorial;
	
	printf ("Digite um numero inteiro e positivo: ");
	scanf ("%d", &numero);
	
	if (numero == 0) {
			
		printf ("O fatorial do numero escolhido e igual a 1");
	}
	
	else {
	
	
	fatorial = 1;
	contador = numero;
				
	
	do {
		
		fatorial = fatorial*contador;
		
		contador = contador-1;
		
	}	while (contador>=1);
	
	printf ("O fatorial do numero escolhido e igual a %d", fatorial);
	
	}
	
}
