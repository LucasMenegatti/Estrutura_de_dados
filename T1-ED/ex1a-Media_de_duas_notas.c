//Aluno: Lucas Gentil Menegatti RA: 4201000

/*Desenvolva um algoritmo que calcule a m�dia de 2 notas quaisquer. O programa deve imprimir as notas
digitadas pelo usu�rio, assim como imprimir a m�dia final. Adicione restri��es aos valores digitados pelo
usu�rio (considere que o programa n�o aceitar� 0 > nota > 10).*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
	//Declara��o das vari�veis
	int i=0;
	float media=0, digitado;
	
	printf("***Digite valores das notas entre 0 e 10***\n");
	while(i<2){
		printf("Digite o valor da nota[%d]", i);
		scanf("%f", &digitado);
		if(digitado>=0&&digitado<=10){ // restri��es aos valores digitados pelo usu�rio
			media+=digitado/2;
			i++;
		} else {
			printf("ATEN��O... A nota[%d] deve ser digitada novamente !");
		}
	}
	printf("\nMedia: %.1f\n", media); //imprimir a m�dia final
	system("pause");
}
