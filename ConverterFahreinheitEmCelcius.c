
/*
Converter Fahreinheit em Celsius
*/

#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float c, f;
	
	printf("Quantos Graus Fahrenheit?: ");
	scanf("%f", & f);
	
	c = 5 *  (f -32)/9;
	
	printf("Fahrenheit:  %.2f\n", f);
	printf("Celsius:  %.4f", c);
	
	
}

