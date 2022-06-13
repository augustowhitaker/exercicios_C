#include<stdio.h>

int main(){

    float nota1=0, nota2=0, media=0;

    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);

    printf("Digite a segunda nota \n");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("A media e %.2f = ",media);



    return 0;
}