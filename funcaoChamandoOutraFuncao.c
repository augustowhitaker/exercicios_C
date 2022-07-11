#include <stdio.h>

float valorAbsoluto (float x){//funcao para deixar positivo os numeros
   
        return x * -1;//retorno contendo o calculo negativo para positivo
}
float somaDeDigitos(float num1, float num2){//fazendo a soma e invocando a outra funcao "valorAbsoluto" quando necessario

    if(num1 < 0){//testando se o valor é negativo
        num1 = valorAbsoluto(num1);//convertando o numero para positivo se necessario
    }
    if(num2 < 0){
        num2 = valorAbsoluto(num2);//perceba que é colocado dentro do parametro da funcao do valorAbsoluto o proprio num2/num1, pois agora os nums 
                                   //passarão a valer o num de dentro do parametro
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
