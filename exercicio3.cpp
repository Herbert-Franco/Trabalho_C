#include <stdio.h>

/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem  do  distribuidor  e  dos  impostos  (aplicados  ao  custo  de  fábrica). 
Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever  um  algoritmo  para  ler  o  custo  de  fábrica  de  um  carro,  calcular  e escrever o custo final ao consumidor*/

int main() {
    
    float preco_custo, encargos, preco_final;
    
    printf ("Digite o preco de custo do veiculo: ");
    scanf ("%f", &preco_custo);
    
    encargos = preco_custo*0.28 + preco_custo*0.45;
    preco_final = preco_custo + encargos;
    
    printf
    ("O preco final do veiculo sera: %.2f", preco_final);
    
    return 0;
}

