
#include <stdio.h>
#include <stdlib.h>



// void print_prim(int *array, int laenge){
// ////// einser array wird an start gebracht (deko) name = array2
    

// // for loop um primzahlen zu printen,  
// for (int i = 0; i < laenge; ++i){
//     //wenn in array 2 eine 1 ist dann printe
//         if (array2[i]==1){
//             printf("%d, ",array[i] );
//         }
//     }
//      // free(array2);
         
// }

void print_prim(int *array, int laenge) {
    for (int i=0; i<laenge; i++) {
        if (array[i] == 1) {
            printf("%d, ", i+2);
        }
    }
    printf("\n");
}




int main() {
    //hier muss eigentlich lese int
    int n = 10; //lese_int();
    int laenge = n-1;
    //int array[laenge];

    int *array2;
    // Speicher reservieren
    array2 = (int *) malloc(laenge * sizeof(int));
    int k = 0;

    printf("Bitte gebe eine Zahl ein: %d\n",n);
    // liste alle zahlen zwischen 2 und n 
    for (int i = 2; i < n+1; ++i){
        array2[k] = i;
        k++;
    }


    int laenge1 = laenge+1;
    int laenge2 = laenge+2;
    int halblang = (laenge)/2;

    
    int *array;

    array = (int *) malloc(laenge1 * sizeof(int));


    for (int i = 0; i < laenge1; ++i){
        array[i] = 1;
    }
    for (int i = 2; i < halblang; ++i){
        for (int r = i+i; r < laenge2; r+=i){
                        array[r-2] = 0;
                    }
    }



    print_prim(array, laenge);
    free(array); 
}
