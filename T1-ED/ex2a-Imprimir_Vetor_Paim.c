//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que imprima:
- TODAS as posi��es (�ndices) de um vetor com seus respectivos elementos utilizando PONTEIRO.
	-- Em resumo, voc� deve utilizar um ponteiro para percorrer os �ndices do vetor.
	-- (defina o tamanho do vetor de acordo com seu n�mero de RA (exemplo: RA 123456 ? vetor[ ] = { 1, 2, 3, 4, 5, 6} )
- as posi��es (�ndices) pares
- as posi��es (�ndices) impares*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o das vari�veis
	int i, vetor[] = {4, 2, 0, 1, 0, 0, 0};
	int *ponteiro = vetor;
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	
	//TODAS as posi��es (�ndices) de um vetor com seus respectivos elementos utilizando PONTEIRO	
	printf("Imprime todas as posi��es\n============\n");
	for(i=0; i<tamanho; i++){
		printf("Vet[%d]=%d\n", i, *(ponteiro+i));
	}
	
	//as posi��es (�ndices) pares
	printf("\nImprime todas as posi��es pares\n============\n");
	for(i=0; i<tamanho; i++){
		if(i%2==0)printf("Vet[%d]=%d\n", i, *(ponteiro+i));
	}
	
	//as posi��es (�ndices) impares
	printf("\nImprime todas as posi��es �mpares\n============\n");
	for(i=0; i<tamanho; i++){
		if(i%2!=0)printf("Vet[%d]=%d\n", i, *(ponteiro+i));
	}
	
	printf("\n");
	system("pause");
}
