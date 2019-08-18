
/*
Saber peso ideal para homens e mulheres
*/

#include <locale.h>
#include <stdio.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura, operacao;
	char sexo;
	
	printf("Digite sua altura: ");
	scanf("%f", & altura);
	
	printf("Qual seu sexo? [m] ou [f]: ");
	fflush(stdin);
	scanf("%c", & sexo);
	
	if(sexo == 'm' || sexo == 'M'){
		operacao = (72.7 * altura) - 58;
		printf("O ideal é que seu peso seja %.2f",operacao);
	}else if(sexo == 'f' || sexo == 'F') {
		operacao = (62.1 * altura) - 44.7;
		printf("O ideal é que seu peso seja %.2f",operacao);
	}else{
		printf("opção inválida");
	}

	
}

