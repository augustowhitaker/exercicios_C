#include <stdio.h>


main(void){

    printf("\t\t**********Tabuada*************\n\n");
     for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
           int res = i * j;
           printf("%d x %d = %d \n", i,j,res);
        }
           printf("\n");
        
     }
}