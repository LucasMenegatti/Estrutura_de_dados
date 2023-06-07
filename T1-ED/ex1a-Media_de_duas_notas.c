//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que calcule a média de 2 notas quaisquer. O programa deve imprimir as notas
digitadas pelo usuário, assim como imprimir a média final. Adicione restrições aos valores digitados pelo
usuário (considere que o programa não aceitará 0 > nota > 10).*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
	//Declaração das variáveis
	int i=0;
	float media=0, digitado;
	
	printf("***Digite valores das notas entre 0 e 10***\n");
	while(i<2){
		printf("Digite o valor da nota[%d]", i);
		scanf("%f", &digitado);
		if(digitado>=0&&digitado<=10){ // restrições aos valores digitados pelo usuário
			media+=digitado/2;
			i++;
		} else {
			printf("ATENÇÃO... A nota[%d] deve ser digitada novamente !");
		}
	}
	printf("\nMedia: %.1f\n", media); //imprimir a média final
	system("pause");
}
