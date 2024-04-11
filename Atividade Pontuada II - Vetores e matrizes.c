#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define DISCIPLINAS 3
#define NOTAS 3

int main () {
	setlocale(LC_ALL, "");
	
	char disciplinas[DISCIPLINAS][200];
	float notas[DISCIPLINAS][NOTAS], peso[DISCIPLINAS][NOTAS], media[DISCIPLINAS], multiplicacao = 0, soma = 0;
	int i, j;
	
	for(i = 0; i < DISCIPLINAS; i++){
		system("cls || clear");
		printf("Digite o nome da %i� disciplina: ", i + 1);		
		scanf("%s",&disciplinas[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %i� nota: ", j + 1);		
			scanf("%f",&notas[i][j]);
			
			if (notas[i][j] < 0 || notas[i][j] > 10){
				do {
					printf("Nota inv�lida, informe um valor entre 0 e 10. \n");
					printf("Digite a %i� nota: ", j + 1);
					scanf("%f",&notas[i][j]);
				} while (notas[i][j] < 0 || notas[i][j] > 10);
			}
			
			printf("Digite o %i� peso: ",j + 1, peso[i][j]);
			scanf("%f",&peso[i][j]);
			
			if (peso[i][j] < 0 || peso[i][j] > 10) {
				do {
					printf("Peso inv�lido, informe um valor entre 0 e 10. \n");
					printf("Digite o %i� peso: ",j + 1, peso[i][j]);
					scanf("%f",&peso[i][j]);
				} while (peso[i][j] < 0 || peso[i][j] > 10);
			}
			
			multiplicacao = notas[i][j] * peso[i][j];
			soma += multiplicacao;
		}
		
		media[i] = soma / 10;
		multiplicacao = 0;
		soma = 0;
		
		printf("\n");
	}
	
	system("cls || clear");
	printf("========================= \n");
	for(i = 0; i < DISCIPLINAS; i++){
		printf("Disciplina: %s \n", disciplinas[i]);
		for(j = 0; j < NOTAS; j++){
			printf("%i� nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("M�dia: %.1f \n", media[i]);
		printf("=========================");
		printf("\n");
	}

	return 0;
}
