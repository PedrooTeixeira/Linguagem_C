/******************************************************************************

Projete um programa para calcular a área de um triângulo. O usuário informará 
os dados necessários para o cálculo, ou seja, a base e a altura do triângulo. 
onde: área = base * altura /2

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

int main(void)
{

  float base, altura, area;
    printf("Digite a base: ");
    scanf("%f", & base );
    
    printf("digite a altura: ");
    scanf("%f" ,& altura);
    
    area = (base * altura)/2;
    
    printf("%.2f",  area);

}


