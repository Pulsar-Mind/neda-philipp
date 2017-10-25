#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int len) {
		printf("Array: ");

	for (int i = 0; i < len; ++i){
		printf("%d",array[i]);
		printf(", ");
	}
	printf("\n");

	printf("Minimum: ");
	int min=0;
	for (int i = 0; i < len; ++i){
  	if (i==0) {
     	min=array[i];
  	}
  	else{
    if (array[i]<min){
     min=array[i];
    }
	}
}
printf("%d",min);
	printf("\n");


	printf("Maximum: ");
	int max=0;
	for (int i = 0; i < len; ++i){
  	
    if (array[i]>max){
     	max=array[i];
    }
	
}
printf("%d",max);
printf("\n");


	printf("Summe: ");
	int summe=0;
	for (int i = 0; i < len; ++i){
		summe +=  array[i];
	}
printf("%d",summe);
printf("\n");
 
}
 // Schreibe die Funktion "sum", "min" und "max" 9
int main() {
	int array[]={9,4,7,8,10,5,1,6,3,2};
	int len = 10;
	print_array(array, len);
// Gebe hier nacheinander das Minimum, Maximum und die Summe // aus. Trenne die Werte durch einen einzelnen Zeilenumbruch.


}
