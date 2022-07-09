#include <stdio.h>


int main(){
    float calcularAreaRetangulo(float x, float y);//chamando a funcao no main,porem se a funcao for criada acima da funcao main e 
    //não abaixo não seria necessario invocar  ela aqui, bastaria fazer apenas o codigo abaixo.
    
    float area = calcularAreaRetangulo(10.0, 20.0);//criado a variavel area para armazenar a funcao de calculo areaRetangulo

    printf("A area eh %f " , area);

    return 0;
}

float calcularAreaRetangulo (float base, float altura){
    // float area = base * altura; pode-se fazer esse calculo direto no return

    return base * altura;
}
