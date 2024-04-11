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
		printf("Digite o nome da %iª disciplina: ", i + 1);		
		scanf("%s",&disciplinas[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %iª nota: ", j + 1);		
			scanf("%f",&notas[i][j]);
			
			while (notas[i][j] < 0 || notas[i][j] > 10){
				printf("Nota inválida, informe um valor entre 0 e 10. \n");
				printf("Digite a %iª nota: ", j + 1);
				scanf("%f",&notas[i][j]);
			}
			
			printf("Digite o %iº peso: ",j + 1, peso[i][j]);
			scanf("%f",&peso[i][j]);
			
			while (peso[i][j] < 0 || peso[i][j] > 10) {
					printf("Peso inválido, informe um valor entre 0 e 10. \n");
					printf("Digite o %iº peso: ",j + 1, peso[i][j]);
					scanf("%f",&peso[i][j]);
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
			printf("%iª nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("Média: %.1f \n", media[i]);
		printf("=========================");
		printf("\n");
	}

	return 0;
}
