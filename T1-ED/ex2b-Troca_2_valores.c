//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que troque e imprima 2 valores digitados pelo usuário. Para isso, utilize PONTEIROS.
- utilize 2 ponteiros para acessar os 2 valores digitados pelo usuário
	-- dica: utilize uma variável auxiliar para trocar os valores
- imprimir os valores digitados
- imprimir os valores após a troca*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int a,b,temp;
	int *ptr1, *ptr2; //utilize 2 ponteiros para acessar os 2 valores digitados pelo usuário
	
	printf("Digite um valor para a: ");
	scanf("%d", &a);
	ptr1=&a;
	printf("Digite um valor para b: ");
	scanf("%d", &b);
	ptr2=&b;
	
	//imprimir os valores digitados
	printf("Valor digitado de a = %d", *ptr1);
	printf("\nValor digitado de b = %d", *ptr2);
	
	//PROCESSAMENTO (troca)
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	//imprimir os valores após a troca
	printf("\nNovo valor a = %d", *ptr1);
	printf("\nNovo valor b = %d", *ptr2);
	
	printf("\n\n");
	system("pause");
}
