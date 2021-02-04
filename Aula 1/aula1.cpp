#include <stdio.h>

int main () {
	//Imprime cabeçalho do nosso jogo
	printf("========================\n");
	printf("Bem vindo ao nosso jogo!\n");
	printf("========================\n");
	
	int numerosecreto = 42, chute;
	
	printf("Qual o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);
}
