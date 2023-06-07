// Anluno: Lucas Gentil Menegatti RA: 4201000

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#define MAXTAM 5

struct lista{
	char item[MAXTAM][20];
	int ini, fim;
};
struct lista elemento;

// criando a lista VAZIA
void criar(){
	elemento.ini=0;
	elemento.fim=0;
}

//*******************fun��o INSERIR
void inserir(){
	char nome[20];
	if(elemento.fim == MAXTAM){
		printf("Lista CHEIA!");
		getch();
	}else{
		printf("Entre com o nome do Elemento: ");
		scanf("%s",&nome);
		if(elemento.fim==elemento.ini){
			printf("1� Elemento da LISTA");
			strcpy(elemento.item[elemento.fim],nome);
			elemento.fim++;
			getch();
		}else{
			//posi��o especifica
			int pos, i;
			printf("Digite a posi��o onde ser� inserido o ELEMENTO: ");
			scanf("%d",&pos);
			if(pos > elemento.fim){ //evitar buracos
				printf("Posi��o inv�lida!");
				getch();
			}else{
				for(i = elemento.fim; i > pos; i--)
					strcpy(elemento.item[i],elemento.item[i-1]);
				strcpy(elemento.item[pos],nome);
				elemento.fim++;
			}
		}
	}
}//fim INSERIR

//*******************fun��o MOSTRAR
void mostrar(){
	int i;
	if(elemento.ini == elemento.fim){
		printf("Lista VAZIA!");
		getch();
	}else{
		for(i = 0; i < elemento.fim; i++){
			printf("Lista[%d]: %s\n", i, elemento.item[i]);
		}
	}
	getch();
} //fim MOSTRAR

// ************************************************************* RESPOSTA DO TRABALHO *****************************************************
//*******************fun��o REMOVER
void remover(){
	if(elemento.fim == elemento.ini){
		printf("Lista VAZIA!");
		getch();
	}else{
		if(elemento.ini==elemento.fim-1){
			elemento.fim=elemento.ini;
			printf("1� e �nico elemento removido!");
			getch();
		} else {
			int pos, i;
			printf("Digite a posi��o onde ser� removido o ELEMENTO:");
			scanf("%d",&pos);
			if(pos > elemento.fim||pos < 0){
				printf("Posi��o inv�lida!");
				getch();
			}else{
				for(i = pos; i < elemento.fim; i++)
					strcpy(elemento.item[i],elemento.item[i+1]);
				elemento.fim--;
				printf("Elemento na posi��o %d remov�do com sucesso!", pos);
				getch();
			}
		}
	}
}

//******************* MAIN
int main(){
	//menu de Op��es
	setlocale(LC_ALL,"portuguese");
	int op;
	do{
		system("CLS");
		printf("\n*** MENU ***\n");
		printf("\n 1 - INSERIR elementos na lista");
		printf("\n 2 - MOSTRAR elementos na lista");
		printf("\n 3 - REMOVER elementos na lista");
		printf("\n*************\n");
		scanf("%d",&op);
		switch(op){
			case 1: inserir();
			break;
			case 2: mostrar();
			break;
			case 3: remover();
			break;
		}
	}while(op < 4);
} //fim MAIN
