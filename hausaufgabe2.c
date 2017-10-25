#include <stdio.h>
#include <stdlib.h>


int main() {
	int breite = 6;
	int hoehe = 3;
	for (int i = 0; i < breite+2; ++i){
		printf("A");
	}
	printf("\n");
	for (int j = 0; j < hoehe; ++j){
		printf("A");
		for (int k = 0; k < breite; ++k){
			printf("B");
		}
		printf("A\n");
		}
	for (int i = 0; i < breite+2; ++i){
		printf("A");
	}
	printf("\n");
	}