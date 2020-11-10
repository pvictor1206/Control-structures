#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 

Faça um programa em C, usando o comando do-while, que calcule a média e o desvio padrão 
de uma sequência de números inteiros. No processo de leitura, 
se um número primo for informado o laço deve ser interrompido. 
Inclua o número primo nos cálculos de média e desvio padrão. 

by: Paulo victor Santos Magalhaes
Curso: Engenharia de computação

*/


int main(void) {
	
	int numeroPrimo(int num[], int aux);
	
	int num[100];
	int i,parar;
	float media;
	int n = 1;
	int soma = 0;
	float dp = 0;
	int somaDP = 0;
	int aux = 0;
	
	
	do{
		
		printf("Digite um numero: ");
		scanf("%d",&num[aux]);
		soma = soma + num[aux];
			
		parar = numeroPrimo(num[aux],aux);
		
		++aux;
		
	}while(parar != 2);
	
	media = (float) soma/aux;
	
	for(i = aux; i >= 0; --i){
		somaDP = somaDP + ((num[i] - media) * (num[i] - media));  
	}
	dp = (float) somaDP/aux;
	dp = (float) sqrt(somaDP);
	
	printf("\nMedia: %.2f",media);
	printf("\nDesvio Padrao: %.2f",dp);
	
	
	return 0;
}

int numeroPrimo(int num[], int aux){
	
	int i;
	int stop = 0;
	
	for(i = num[aux]; i >= 1; --i){
		if(!(num[aux]%i)){
			++stop;
		}
	}
	
	if (stop != 2){
			stop = 0;
		}
	
	return stop;
}
