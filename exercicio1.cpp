//Fazer um algoritmo que leia um número inteiro e escreva o seu antecessor e o seu sucessor.  

#include <stdio.h>

main () {
	
	int numero, antecessor, sucessor;
	
	printf ("Digite um valor: ");
	scanf ("%d", &numero);
	
	antecessor = numero-1;
	sucessor = numero+1;
	
	printf ("O antecessor do numero escolhido eh %d e o sucessor do numero escolhido eh %d", antecessor, sucessor);
}
