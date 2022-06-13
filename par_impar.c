#include <stdio.h>

int main(){

    int  num = 0, par_impar;
    printf("Digite o numero\n");

    scanf("%d",&num);

    par_impar = num % 2;

    if(par_impar == 0){
        printf("par\n");
    }
    else{
        printf("impar \n");
    }


    return 0;
}