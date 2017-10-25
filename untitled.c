#include<stdio.h>
#include<stdlib.h>

int main() {
            exit(EXIT_SUCCESS);  
   int nummer = 32767;
   int i,j,k,l;

   printf("ist %d eine Primzahl?\n",nummer);

   if (nummer == 0 || nummer == 1 ){
       printf("nein\n");
       exit(EXIT_SUCCESS); 
   }

   for(i=2;i<nummer/2;i++){
    // printf("%d\n",i);
    
    // printf("%d\n",nummer%i );
    // printf("\n");
       if(nummer%i==0){
            printf("nein\n");
            exit(EXIT_SUCCESS);  
        }
   }

   printf("ja\n");
   return 0;
}