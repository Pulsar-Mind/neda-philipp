
#include <stdio.h>
#include <stdlib.h>



void print_prim(int *array, int laenge){
////// einser array wird an start gebracht (deko) name = array2
 	int array2[laenge+1];
	for (int i = 0; i < laenge+1; ++i){
		array2[i] = 1;
	}
	// doppelter for loop um ueber alle einträge zu gehen. i faengt bei 2 an  und laenge durch zwei geteilt weil danach sinnlos...
    for (int i = 2; i < (laenge)/2; ++i){
    	//laufvariable r wird zu beginn zweimal i gesetzt dann immerum i erhoeht. Restwert etc muss nicht gechekt werden. (start bei zweimal i weil sonst i sich selbst elemenieren wuerde)
    	for (int r = i+i; r < laenge+2; r+=i){
    		//aktivier print statment um alle nicht primzahlen sichtbar zu machen
    				// printf("%d\n",r);

    		// in array 2 werden alle nicht primzahlen mit 0 besetzt 
	     	   		array2[r-2] = 0;
	     	   	}
    }

// for loop um primzahlen zu printen,  
for (int i = 0; i < laenge; ++i){
	//wenn in array 2 eine 1 ist dann printe
    	if (array2[i]==1){
    		printf("%d, ",array[i] );
    	}
    }
}

int main() {
	//hier muss eigentlich lese int
	int n = 100; //lese_int();
	int laenge = n-1;
	int array[n-1];
	int k = 0;

	printf("Bitte gebe eine Zahl ein: %d\n",n);
	// liste alle zahlen zwischen 2 und n 
	for (int i = 2; i < n+1; ++i){
		array[k] = i;
		k++;
	}

	print_prim(array, laenge);
}
