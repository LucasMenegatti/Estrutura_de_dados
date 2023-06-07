// Anluno: Lucas Gentil Menegatti RA: 4201000

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// ***** Tipagem
typedef struct NO{
	int dado;
	struct NO *prox;
}NO;

typedef struct FILA{
	NO *inicio;
	NO *fim;
}FILA;

// ***** Funções
void inicializar(FILA *fi){
	fi->inicio = NULL;
	fi->fim = NULL;
}

void inserir(FILA *fi){
	NO *ptr = (NO*) malloc(sizeof(NO));
	if(ptr == NULL){
		printf("Erro de alocação.\n");
	} else {
		printf("\nDigite o elemento a ser inserido na fila: ");
		scanf("%d", &ptr->dado);
		ptr->prox = NULL;
		if(fi->inicio == NULL){
			fi->inicio = ptr;
		} else {
			fi->fim->prox = ptr;
		}
		fi->fim=ptr;
	}
	return;
}

void mostrar(FILA *fi){
	NO *ptr = fi->inicio;
	if(ptr != NULL){
		while(ptr != NULL){
			printf("%d ", ptr->dado);
			ptr = ptr->prox;
		}
		printf("\n");
	} else {
		printf("Fila vazia.\n");
	}
	return;
}

void remover(FILA *fi){
	NO *ptr = fi->inicio;
	if(ptr != NULL){
		fi->inicio = ptr->prox;
		ptr->prox = NULL;
		printf("\nElemento removido: %d\n", ptr->dado);
		free(ptr);
		if(fi->inicio==NULL){
			fi->fim = NULL;
		}
	} else {
		printf("\nFila vazia.\n");
	}
	return;
}

// ***** Main
int main(){
	setlocale(LC_ALL, "Portuguese");
	FILA *minhaFila = (FILA*) malloc(sizeof(FILA));
	if(minhaFila==NULL){
		printf("Erro de alocação.\n");
	} else {
		inicializar(minhaFila);
		int op;
		do{
			system("CLS");
			printf("\n*** MENU - FILA DINÂMICA ***\n");
			printf(" 1 - INSERIR");
			printf("\n 2 - MOSTRAR");
			printf("\n 3 - REMOVER");
			printf("\n 4 - SAIR");
			printf("\n****************************\n");
			scanf("%d",&op);
			switch(op){
				case 1: 
					inserir(minhaFila);
					break;
				case 2:
					printf("\n");
					mostrar(minhaFila);
					printf("\n");
					system("pause");
					break;
				case 3:
					remover(minhaFila);
					printf("\n");
					system("pause");
					break;
			}
		}while(op < 4);
	}
}
