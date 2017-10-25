#include <stdio.h>
#include <stdlib.h>




void print_array(int array[], int len) {

	printf("Array: ");
	for (int i = 0; i < len; ++i){
		printf("%d",array[i]);
		if (i!=len-1){
			printf(", ");
		}
	}
	printf("\n");
	return;
}
int print_min(int array[], int len) {
	int min=0;

	printf("Minimum: ");
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
	return 0;
}






int print_max(int array[], int len) {
	int max=0;
	printf("Maximum: ");
	for (int i = 0; i < len; ++i){
  	
    if (array[i]>max){
     	max=array[i];
    }
	
}
	printf("%d",max);
	printf("\n");
	return 0;

}


int print_sum(int array[], int len) {
	int summe=0;

	printf("Summe: ");
	for (int i = 0; i < len; ++i){
		summe +=  array[i];
	}
	printf("%d",summe);
	printf("\n");
	return 0;

 
}

 // Schreibe die Funktion "sum", "min" und "max" 
int main() {
	int array[]={9,4,7,8,10,5,1,6,3,2};
	int len = 10;
	print_array(array, len);
	print_min(array, len);
	print_max(array, len);
	print_sum(array, len);
// Gebe hier nacheinander das Minimum, Maximum und die Summe // aus. Trenne die Werte durch einen einzelnen Zeilenumbruch.


}
