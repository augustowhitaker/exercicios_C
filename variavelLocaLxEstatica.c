#include <stdio.h>

//variaveis globais são declaradas antes das funções main e funções que criarmos, pode ser usado no programa todo sem necessidade de declarar o
// tipo dela novamente

void teste(void){
    //variavel automatica é apenas armazenadas dentro do escopo da função, ou seja toda vez que é invocada ela retorna o mesmo resultado pois ela
    //"destruida" toda vez que roda, sendo assim usada para manter o mesmo retorno
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;
    printf("Local automatica  = %d \n", variavelLocalAutomatica);
    
    //static é usada para manter a funcao de modo acumalativo como no exemplo abaixo,ou seja ela não é "destruida" toda vez que chamamos, ela vai
    //guardando o resultado e adicionando a cada vez que invocamos ela em uma função
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;
    printf("Local Estatica = %d \n" , variavelLocalEstatica);
}

int main(){
    
    teste();
    teste();
    teste();

    return 0;
}
