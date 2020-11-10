#include <stdio.h>
#include <stdlib.h>

/* 

Calcule o fatorial de um número usando o comando while. Imprima o valor do fatorial ao final. 

CURSO: Engenharia de computação
by: Paulo Victor Santos Magalhaes

*/

int main(void) {
	
	void fatorial(int num);
	
	int num;
	
	printf("\nDigite um numero inteiro para fatorar: ");
	scanf("%d",&num);
	
	fatorial(num); // função que ira calcular o fatorial do número
	
	return 0;
}

void fatorial(int num){
	int aux = num;
	int fatorial = 1;
	while(aux > 1){
		fatorial = (aux) * fatorial;
		--aux;	
	}
	printf("\nFatorial de %d:  %d",num,fatorial);
}
