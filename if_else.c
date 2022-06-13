#include<stdio.h>

int main(){
    int A,B,Soma;

    printf("Digite um numero \n");
    scanf("%d",&A);

    printf("Digite um numero\n");
    scanf("%d",&B);

    Soma= A + B;
    printf("O valor da soma = %d\n",Soma);

    if(Soma < 10){
        printf("O valor da soma e menor que 10");
    }
    else{
        printf("O valor e maior que 10");
    }


    return 0;
}