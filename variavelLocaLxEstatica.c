#include <stdio.h>

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;
    printf("Local automatica  = %d \n", variavelLocalAutomatica);

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