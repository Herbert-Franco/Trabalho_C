#include <stdio.h>

//ler dois n�meros inteiros e informar se estes s�o iguais ou diferentes. 

int main() {
    
    int num1, num2;
    
    printf ("Digite o primeiro numero: ");
    scanf ("%d",&num1);
    printf ("Digite o segundo numero: ");
    scanf ("%d",&num2);
    
    if (num1 == num2) {
        printf ("Os numeros digitados sao iguais!");
    }
    else {
        printf ("Os numeros digitados sao diferentes!");
    }
    
    return 0;
}

