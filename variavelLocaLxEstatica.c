#include <stdio.h>

int global = 2;

//variaveis globais são declaradas antes das funções main e funções que criarmos, pode ser usado no programa todo ou seja na funcao main e nas funcoes
//criadas sem necessidade de declarar o  tipo dela novamente, e ela funciona como a estatica, que é acumulando valores se chamada variaves vezes, quando
//colocada em uma funcao por exemplo

void teste(void){
    //variavel automatica é apenas armazenadas dentro do escopo da função, ou seja toda vez que é invocada ela retorna o mesmo resultado pois ela é
    //"destruida" toda vez que roda, sendo assim usada para manter o mesmo retorno sempre, pois ela nao é acumalativa
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;
    printf("Local automatica  = %d \n", variavelLocalAutomatica);
    
    //static é usada para manter a funcao de modo acumalativo como no exemplo abaixo,ou seja ela não é "destruida" toda vez que chamamos, ela vai
    //guardando o resultado e adicionando a cada vez que invocamos ela em uma função pois ela fica guardada na memoria
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;
    printf("Local Estatica = %d \n" , variavelLocalEstatica);
    
    global *= 2;
    printf("Global = %d \n",global);//resutaldo igual como no static
}

int main(){
    
    teste();
    teste();
    teste();

    return 0;
}
