//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que permita a inser��o de elementos em qualquer �ndice de um vetor. O programa
deve permitir:
- o usu�rio deve definir o tamanho do vetor
- o usu�rio deve definir os elementos que ser�o inseridos no vetor
- o usu�rio deve escolher o �ndice para inser��o do novo elemento
- o usu�rio deve escolher um novo elemento para inser��o
- ap�s a inser��o do novo elemento, imprimir o vetor resultante*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o das vari�veis
	int tam, *vet, i, novoIndice, novoElemento, temp1, temp2;
	
	//o usu�rio deve definir o tamanho do vetor
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &tam);
	
	vet = malloc(tam*sizeof(int));
	
	if(vet){
		//o usu�rio deve definir os elementos que ser�o inseridos no vetor
		printf("\nDigite os elementos do vetor\n");
		for(i=0;i<tam;i++){
			scanf("%d", vet+i);
		}
		
		//o usu�rio deve escolher o �ndice para inser��o do novo elemento
		while(1){
			printf("\nDigite o �ndice (posi��o) do elemento que deseja inserir - entre 0 e %d\n", tam);
			scanf("%d", &novoIndice);
			if(novoIndice>=0&&novoIndice<=tam) break;
		}
		
		//o usu�rio deve escolher um novo elemento para inser��o
		printf("\nDigite o valor do elemento X que deseja inserir no vetor\n");
		scanf("%d", &novoElemento);
		
		//PROCESSAMENTO
		tam++;
		vet = realloc(vet, tam*sizeof(int));
		temp1 = *(vet+novoIndice);
		*(vet+novoIndice) = novoElemento;
		
		for(i=novoIndice+1;i<tam;i++){
			temp2 = *(vet+i);
			*(vet+i) = temp1;
			temp1 = temp2;
		}
		
		//ap�s a inser��o do novo elemento, imprimir o vetor resultante
		printf("\nImprimir o vetor ap�s inser��o do novo elemento\n");
		for(i=0;i<tam;i++){
			printf("\t%d", *(vet+i));
		}
		printf("\n\n\n");
		system("pause");
	} else {
		printf("Erro ao alocar mem�ria!\n");
	}
	free(vet);
}
