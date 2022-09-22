/*Uma loja fornece 10%  de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o valor total a ser pago por uma pessoa. 
O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3)*/ 

#include <stdio.h>

int main() {
    
    int tipo_de_comprador;
    float valor_compra, valor_final;
    
    printf ("Bem vindo a nossa lojinha!\n");
    printf ("Se voce for funcionario da loja digite 1\n");
    printf ("Se voce for cliente ha mais de 10 anos (voce eh cliente vip) digite 2\n");
    printf ("Se voce nao for nenhumas das opces anteriores digite 3\n");
    
    scanf ("%d", &tipo_de_comprador);
    
    printf ("Digite o valor da sua compra: ");
    scanf ("%f", &valor_compra);
    
    if (tipo_de_comprador == 1) {
        valor_final = valor_compra*0.9;
        printf ("Ola funcionario! Voce obteve 10 por cento de desconto e vai pagar %.2f reais no valor final da sua compra!", valor_final);
    }
    
    else if (tipo_de_comprador == 2) {
        valor_final = valor_compra*0.95;
                printf ("Ola cliente vip! Voce obteve 5 por cento de desconto e vai pagar %.2f reais no valor final da sua compra!", valor_final);
    }
    else if (tipo_de_comprador == 3) {
        valor_final = valor_compra;
                printf ("Ola cliente! Voce vai pagar %.2f reais no valor final da sua compra!", valor_final);
        }
    else {
        printf ("ERRO!");
    }
    
    return 0;
}





