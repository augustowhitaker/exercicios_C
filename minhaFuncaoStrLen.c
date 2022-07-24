#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 
int main (){
    char vet [20] = {"Ola Buenos dias"};


    printf("strlen: %d\n", strlen(vet));
    printf("MinhaStrLen: %d\n",minhaStrLen(vet));
 

    return 0;
}

int minhaStrLen(char str[]){
    int tam = 0;

    while(str[tam] != '\0'){
        tam ++;

    }
        return tam;
}
