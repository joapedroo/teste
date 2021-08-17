#include <stdio.h>


int main(void){

	int idade = 15;

	printf("Informe a idade: \n");
	scanf("%d", &idade);

	if(idade >= 18 ){
		printf("Maior de idade\n");
		printf("Pode entrar na balada!\n");
	}else{
		printf("Deu errado\n");
		printf("Voce não pode entrar na balada!\n");
	}
	return 0;
}