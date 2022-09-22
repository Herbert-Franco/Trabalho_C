#include <stdio.h>


/* Faça  um  algoritmo  para  ler  o  código  e  o  preço  de  15  produtos,  calcular  e escrever (não deve ser usado vetor): 
- o maior preço lido 
- a média aritmética dos preços dos produtos */



main () {
	
	int contador=0;
	float preco, maior, soma;
	char codigo, maior_codigo;
	
	while (contador < 5) {
	

	printf ("Digite o preco do produto: ");
	scanf ("%f", &preco);
	
		
		
		
		if (preco > maior) {
			
			maior = preco;
			
			maior_codigo = codigo;
		}
		
		soma = soma + preco;
		
		contador++;
		
	}
	

	printf ("\nMaior valor digitado = %f", maior);

	printf ("\nMedia aritmetica dos precos = %f", soma/5);
		
	
	
			
}
