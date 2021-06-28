#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float IMC(float peso, float altura)
{
	float resultado;
	resultado= peso/(pow(altura,2));
	printf("\nSeu IMC e igual a:%f", resultado);
	return resultado;
}

void situacaoIMC(char situacao)
{
	float resultado; 
	
	if(resultado>30)
	{
		printf("\nAcima do peso\n");
	}
	else
	{
		if(resultado<20)
		{
			printf("\nAbaixo do peso\n");
		}
		else
		{
			printf("\nPeso Normal\n");
		}
	}
}


int main(int argc, char *argv[]) {
	float p;
	float a;
	float r;
	float status;
	
	
	printf("Digite seu peso:");
	scanf("%f", &p);
	printf("Digite sua altura:");
	scanf("%f", &a);
	
	r=IMC(p,a);

	situacaoIMC(status);
	
	system("pause");
	
	return 0;
}
