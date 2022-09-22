#include <stdio.h>

/*Ler as notas da 1a. e 2a. avaliações de um aluno. 
Calcular a média aritmética simples  e  escrever  uma  mensagem  que  diga  se  o  aluno  foi  ou  não  aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). 
Escrever também a média calculada.*/

int main() {
    
    float nota1, nota2, media;
    
    printf ("Digite a primeira nota: ");
    scanf ("%f", &nota1);

    printf ("Digite a segunda nota: ");
    scanf ("%f", &nota2);
    
    media = (nota1+nota2)/2;
    printf ("\nO aluno aluno ficou com %.2f de media", media);
    
    if (media >= 6) {
        printf ("\nO aluno esta aprovado!");
    }
    else {
        printf ("\nO aluno esta reprovado!");
    }
}
