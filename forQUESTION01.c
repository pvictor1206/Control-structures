#include <stdio.h>
#include <stdlib.h>

/* Faça um programa em C, usando o comando for, que some todos os números no intervalo fechado [2,5] de forma ponderada. 
No tocante aos pesos, quando o número for ímpar, o peso é 2; quando o número for par, o peso é 1; quando o número for primo, 
o peso é 3; quando o número se enquadrar em mais de um caso (par, ímpar ou primo), é atribuído o maior peso para tal número. 
Marque a opção abaixo que contém a soma ponderada.
Obs: use funções para simplificar seu código e demais elementos necessários da linguagem para resolver o problema. 

2 * 3 = 6
3 * 3 = 9
4 * 1 = 4
5 * 3 = 15
soma = 34

by: Paulo Victor Santos Magalhães
Curso: engenharia de computação

*/

int main(void) {
	
	int verificarNumero(int i,int soma);
	
	int i;
	int soma = 0;
	
	for(i = 2; i <= 5; ++i){ // Laço que verifica se o número é Primo, Par ou Impa no intervelo [2,5].
	
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
