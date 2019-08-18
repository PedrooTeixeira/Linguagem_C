/*
Calcular Média Aritmética
*/

#include <stdio.h>
#include <locale.h>
int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3;
	
	printf("Digite a primeira nota: ");
	scanf("%f", & n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", & n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", & n3);
	
	printf("\nA nota 1 é: %.1f \n", n1);
	printf("A nota 2 é: %.1f \n", n2);
	printf("A nota 3 é: %.1f \n\n\n", n3);
	
	
	
	printf("A média é: %.2f", (n1+n2+n3)/3 ); 
	
}

