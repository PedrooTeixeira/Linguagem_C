#include <stdio.h>

int main(void){
	
	int n1, n2;
	char operacao;
	
	printf("Digite um numero: ");
	scanf("%d", & n1);
	
	printf("Digite um numero: ");
	scanf("%d", & n2);
	
	printf("Voce deseja? +, - , *, /");
	fflush(stdin);
	scanf("%c", & operacao);
	
	if(operacao == '+'){
		operacao = n1+n2;
		printf("SOMA %d", operacao);
	}else if(operacao == '-'){
		operacao = n1-n2;
		printf("SUBTRACAO %d", operacao);
	}else if(operacao == '*'){
		operacao = n1*n2;
		printf("MULTIPLICACAO %d", operacao);
	}else if(operacao == '/'){
		operacao = n1/n2;
		printf("DIVISAO %d", operacao);
	}else{
		printf("Opcao invalida");
	}
}


