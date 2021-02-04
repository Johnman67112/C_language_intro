#include <stdio.h>

int main() {
	int multi = 1, entrada;
	
	printf("Digite um numero: ");
	scanf("%d", &entrada);
	while (multi <= 10) {
		printf("%d X %d = %d\n", entrada, multi, multi * entrada);
		multi ++;
	}
}
