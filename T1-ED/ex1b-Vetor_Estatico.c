//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que permita a inserção de elementos em qualquer índice de um vetor. O programa
deve permitir:
- o usuário deve definir o tamanho do vetor
- o usuário deve definir os elementos que serão inseridos no vetor
- o usuário deve escolher o índice para inserção do novo elemento
- o usuário deve escolher um novo elemento para inserção
- após a inserção do novo elemento, imprimir o vetor resultante*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//Declaração das variáveis
	int tam, *vet, i, novoIndice, novoElemento, temp1, temp2;
	
	//o usuário deve definir o tamanho do vetor
	printf("Digite o tamanho do vetor\n");
	scanf("%d", &tam);
	
	vet = malloc(tam*sizeof(int));
	
	if(vet){
		//o usuário deve definir os elementos que serão inseridos no vetor
		printf("\nDigite os elementos do vetor\n");
		for(i=0;i<tam;i++){
			scanf("%d", vet+i);
		}
		
		//o usuário deve escolher o índice para inserção do novo elemento
		while(1){
			printf("\nDigite o índice (posição) do elemento que deseja inserir - entre 0 e %d\n", tam);
			scanf("%d", &novoIndice);
			if(novoIndice>=0&&novoIndice<=tam) break;
		}
		
		//o usuário deve escolher um novo elemento para inserção
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
		
		//após a inserção do novo elemento, imprimir o vetor resultante
		printf("\nImprimir o vetor após inserção do novo elemento\n");
		for(i=0;i<tam;i++){
			printf("\t%d", *(vet+i));
		}
		printf("\n\n\n");
		system("pause");
	} else {
		printf("Erro ao alocar memória!\n");
	}
	free(vet);
}
