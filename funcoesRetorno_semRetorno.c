#include <stdio.h>

int main(void){
    float v1, v2, media;
    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    media = fmedia(v1,v2);//chama a função e recebe o retorno

    printf("Media = %5.2f\n", media);

    return 0;
}

   float fmedia(float n1, float n2){//função recebe n1,n2 e retorna float
    float resultado;
    resultado = (n1 + n2)/2;
    return(resultado);//retornando o valor para main
    }
