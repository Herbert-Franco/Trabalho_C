#include <stdio.h>

main () {
	
	
	float cm, pol;
	
	printf ("Digite a medida em polegadas: ");
	scanf ("%f", &pol);
	
	cm = pol*2.54;
		
	printf ("O resultado corresponde a %.2f em centimetros", cm);
	
	
}
