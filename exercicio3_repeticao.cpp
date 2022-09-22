#include <stdio.h>

int main () {
	
	int val1, val2, soma;
	
	printf ("Digite um valor: ");
	scanf ("%d", &val1);
	
	printf ("Digite um valor maior que o primeiro valor: ");
	scanf ("%d", &val2);
	
	if (val1 > val2) {
		
	printf ("ERRO!");
	printf ("\nVoce digitou um valor menor que o primeiro!");
		
	}
	  	
	else {
		
		while (val1 <= val2) {
		soma = soma + val1; //pode ser utilizada a atribuição soma += val1 
		val1++;
		}
			
	printf ("%d", soma);
	  	
	}		
}
		
	  
	
