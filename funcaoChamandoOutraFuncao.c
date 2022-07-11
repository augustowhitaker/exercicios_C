#include <stdio.h>

float valorAbsoluto (float x){//funcao para deixar positivo os numeros
   
        return x * -1;//retorno contendo o calculo negativo para positivo
}
float somaDeDigitos(float num1, float num2){//Função de soma  

    if(num1 < 0){//testando se o valor é negativo
        num1 = valorAbsoluto(num1);//invocando a outra funcao "valorAbsoluto" quando necessario e passando o valor para positivo
    }
    if(num2 < 0){//testando se o valor é negativo
        num2 = valorAbsoluto(num2);//invocando a outra funcao "valorAbsoluto" quando necessario perceba que é colocado dentro do parametro da funcao do 
                                   //valorAbsoluto o proprio num2/num1, pois agora os nums passarão a valer o num de dentro do parametro
                                   
    }
    return num1 + num2;//retornando a soma
}
int main(){

    float a, b, soma;
    printf("Digite 2 numeros: ");
    scanf("%f", &a);
    scanf("%f", &b);

    soma = somaDeDigitos(a, b);
    printf("A soma eh %f\n" ,soma);
    
    return 0;
}
