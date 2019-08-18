
/*
Verifica se é impar ou par
verifica se é divisiver por 5
*/


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(void){
	
	setlocale(LC_ALL, "Portuguese");

	int a, operacao;
	printf("Digite um número: ");
	system("cls");
	scanf("%d", & a); 
	
	operacao = a%2;
	
	if(operacao == 0){
		printf("O número %d é par", a);
	}else{
		printf("O número %d é impar", a);
	}
	
	operacao = a%5;
	
	if(operacao == 0 ){
		printf("\nÉ divisivel por 5");
	}else{
		printf("\nNão é divisivel por 5");
	}	
}
	


