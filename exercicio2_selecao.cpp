/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00  se  forem  compradas  pelo  menos  12.  
Escreva  um  programa  que  leia  o número de maçãs compradas, calcule e escreva o custo total da compra */

#include <stdio.h>

int main() {
    
    float preco_final;
    int macas;
    
    printf ("Quantas macas voce comprou hoje? ");
    scanf ("%d",&macas);
    
    if (macas < 12) {
        preco_final = macas*1.30;
    }
    else {
        preco_final = macas*1;
    }
        
        
    printf ("Voce pagou %f pelas macas compradas!", preco_final);
    
    
}

