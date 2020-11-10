#include <stdio.h>
#include <stdlib.h>

/* Dados dois inteiros positivos calcular o máximo divisor comum entre eles usando o algoritmo de Euclides.

by: Paulo Victor Santos magalhaes
curso: Engemharia de computação

 */

int main(void) {
	
	printf("\nAlgoritmo de Euclides");
	
	int algoritmoDeEuclides(int a,int b);
	
	int res,a,b;
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d",&a);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d",&b);
	
	res = algoritmoDeEuclides(a,b);
	
	printf("\nMaximo divisor comum: %d",res);
	
	return 0;
}


int algoritmoDeEuclides(int a,int b){ // Função que retorna o máximo divisor comum entre eles por meio do algoritmo de Euclides.
	float r;
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
	
}
