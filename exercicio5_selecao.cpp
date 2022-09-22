#include <stdio.h>

int main() {
    
    int idade;
    
    printf ("Digite a idade do nadador: ");
    scanf ("%d", &idade);

if (idade >= 5 && idade <=7) {
    printf ("O nadador pertence a categoria INFANTIL A");
}
else if (idade >=8 && idade <=10 ){
	printf ("O nadador pertence a categoria INFANTIL B");
}
else if (idade >=11 && idade <=13) {
    printf ("O nadador pertence a categoria JUVENIL A");
}
else if (idade >=14 && idade <=17) {
	printf ("O nadador pertence a categoria JUVENIL B");
}
else if (idade>=18) {
	printf ("O nadador pertence a categoria ADULTO");
}
else {
	printf ("ERRO! Digite uma idade valida...");
}

return 0;

}
