#include <stdio.h>
#include <stdlib.h>

int main(){
    float imc (float x, float y);

    float a,p;

    printf("Digite a sua altura e seu peso \n");
    scanf("%f %f",&a,&p);

    float indiceMassaCorporea = imc(a,p);

    printf("seu IMC eh = %.2f ",indiceMassaCorporea);


    return 0;
}

float imc (float altura , float peso){
    float indice = peso / (altura * altura) ;
    if(indice > 33){
        printf("Obesidade Morbida ");
    }else if(indice < 19){
        printf("Subnutrido ");
    }
    else{
        printf("Peso normal ");
    }
    return indice;
}

