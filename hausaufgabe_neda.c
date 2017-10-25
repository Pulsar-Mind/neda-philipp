#include <stdio.h>
#include <stdlib.h>


int main() {
	int breite = 6;
	int hoehe = 3;
	int i, j;

	for (int i = 0; i < breite+2; i++){
		printf("A");	/* code */
	}

	printf("\n");

	for (int j = 0; j < hoehe; j++){
		printf("A");
		for (int i = 0; i < breite; i++){
			printf("B");/* code */				
		}
		printf("A\n");
	}
	
	for (int i = 0; i < breite+2; i++){
		printf("A");	/* code */
	}
	printf("\n"); 
}