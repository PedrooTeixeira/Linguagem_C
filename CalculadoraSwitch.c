#include <stdio.h>

int main(void){
	
	float n1, n2, op;
	char operacao;
	
	printf("Digite um numero: ");
	scanf("%f", & n1);
	
	printf("Digite um numero: ");
	scanf("%f", & n2);
	
	printf("Voce deseja? +, - , *, /");
	fflush(stdin);
	scanf("%c", & operacao);
	
	switch(operacao){
		case '+':
		op = n1+n2;
		printf("SOMA %.2f", op);
		break;
		case '-':
		op = n1-n2;
		printf("SUBTRACAO %.2f", op);
		break;
		case '*':
		op = n1*n2;
		printf("MULTIOPLICACAO %.2f", op);
		break;
		case '/':
		op = n1/n2;
		printf("DIVISAO %.2f", op);
		break;
		default:
			printf("Opcao invalida");
	}
	
	
	
}

