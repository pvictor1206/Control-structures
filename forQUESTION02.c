#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C, usando o comando for, que some todos os números no intervalo fechado [5,15] de forma ponderada. 
No tocante aos pesos, quando o número for ímpar, o peso é 2; quando o número for par, o peso é 1; quando o 
número for primo, o peso é 3; quando o número se enquadrar em mais de um caso (par, ímpar ou primo), 
é atribuído o maior peso para tal número. Marque a opção abaixo que contém a soma ponderada. 

5 * 3 = 15
6 * 1 = 6
7 * 3 = 21
8 * 1 = 8
9 * 2 = 18
10 * 1 = 10
11 * 3 = 33
12 * 1 = 12
13 * 3 = 39
14 * 1 = 14
15 * 2 = 30

total = 206

by: Paulo Victor Santos Magalhaes
curso: Engenharia de computação


*/

int main(void) {
	
	int verificarNumero(int i,int soma);
	
	int i;
	int soma = 0;
	
	for(i = 5; i <= 15; ++i){ // Laço que verifica se o número é Primo, Par ou Impa no intervelo [5,15].
	
	soma = soma + verificarNumero(i,soma);
		
	}
	
	printf("\nA soma com pesos vale: %d",soma);
	
	return 0;
}


int verificarNumero(int i,int soma){  // Função para verificar se o número é primo, Par ou Impa.
	
	int numeroPar(int i,int soma);
	int numeroImpa(int i,int soma);
	int j;
	
	for(j = i - 1; j > 1; --j){  // Laço que verifica se o número não é primo.
		if(!(i%j)){
			return numeroParOuImpa(i,soma);
		}
	}
	
	return soma = i * 3; // Se o número for primo será retornado o valor com o peso.
}


int numeroParOuImpa(int i,int soma){ // Função que verifica se o numéro é par ou impa.
	if(!(i%2)){
			return soma = i * 1;
	}else{
		return soma = i * 2;
	}
}
