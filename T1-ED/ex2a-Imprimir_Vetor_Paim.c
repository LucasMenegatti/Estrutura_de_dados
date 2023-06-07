//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que imprima:
- TODAS as posições (índices) de um vetor com seus respectivos elementos utilizando PONTEIRO.
	-- Em resumo, você deve utilizar um ponteiro para percorrer os índices do vetor.
	-- (defina o tamanho do vetor de acordo com seu número de RA (exemplo: RA 123456 ? vetor[ ] = { 1, 2, 3, 4, 5, 6} )
- as posições (índices) pares
- as posições (índices) impares*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração das variáveis
	int i, vetor[] = {4, 2, 0, 1, 0, 0, 0};
	int *ponteiro = vetor;
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	
	//TODAS as posições (índices) de um vetor com seus respectivos elementos utilizando PONTEIRO	
	printf("Imprime todas as posições\n============\n");
	for(i=0; i<tamanho; i++){
		printf("Vet[%d]=%d\n", i, *(ponteiro+i));
	}
	
	//as posições (índices) pares
	printf("\nImprime todas as posições pares\n============\n");
	for(i=0; i<tamanho; i++){
		if(i%2==0)printf("Vet[%d]=%d\n", i, *(ponteiro+i));
	}
	
	//as posições (índices) impares
	printf("\nImprime todas as posições ímpares\n============\n");
	for(i=0; i<tamanho; i++){
		if(i%2!=0)printf("Vet[%d]=%d\n", i, *(ponteiro+i));
	}
	
	printf("\n");
	system("pause");
}
