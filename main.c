#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x, i, fact;
	
	fact = 1;
	
	printf ("Introduce Un numero Para Calcular su Factorial: ");
	scanf  ("%i",&x);
	
	for (i = 1 ; i <= x ; i++){
		fact = fact * i;
	}
	
	printf ("El Factorial de %i es %i.\n",x,fact);
	
	return 0;

}
