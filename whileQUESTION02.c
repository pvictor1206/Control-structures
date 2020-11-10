#include <stdio.h>
#include <stdlib.h>

/* 

Dados números inteiros n, i e j, todos maiores do que zero,
imprimir em ordem crescente os n primeiros naturais que são múltiplos
de i ou de j e ou de ambos. 

By: Paulo Victor Santos Magalhaes
Curso: Engenharia de computação

 */

int main(void) {
	
	void imprimirNumeros(int n, int i,int j);
	
	int n,i,j;
	
	printf("\nDigite um valor de (n): ");
	scanf("%d",&n);
	
	printf("\nDigite um valor de (i): ");
	scanf("%d",&i);
	
	printf("\nDigite um valor de (j): ");
	scanf("%d",&j);
	
	
	if (n<=0 || i<=0 || j<=0){ // Se digitar um numero menor que zero 
		printf("\nUm dos valores digitados tem que ser maior que zero");
		return -1;	
	}
	
	
	imprimirNumeros(n,i,j);
	
	return 0;
}


void imprimirNumeros(int n, int i, int j){ // Função que imprime os valores dos primeiros n multiplos de i e j.
	
	int aux = 1;
	int cont = 1;
	
	printf("\n%d primeiros multiplos de %d e %d: ",n,i,j);
	while(n >= cont){
	  if( !(aux%i) || !(aux%j)){
	    printf(" %d ",aux);
	    ++aux;
	    ++cont;
	  }else{
	    ++aux;
	  }
	}
	
}
