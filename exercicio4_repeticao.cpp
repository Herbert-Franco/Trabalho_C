#include <stdio.h>


/* Fa�a  um  algoritmo  para  ler  o  c�digo  e  o  pre�o  de  15  produtos,  calcular  e escrever (n�o deve ser usado vetor): 
- o maior pre�o lido 
- a m�dia aritm�tica dos pre�os dos produtos */



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
