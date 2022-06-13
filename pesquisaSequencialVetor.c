#include <stdio.h>


int main(){
    int v[6] = {0,3,2,5,1,4};
    int elemento = 4;
    int encontrei = 0;

    for(int i = 0; i <= 5; i++){
        if(v[i] == elemento){
            printf("Elemento %d encontrado com indice %d\n",elemento,i);
            encontrei = 1;
            break;
        }
    }
    if(encontrei == 0){
        printf("O valor buscado não existe dentro do vetor\n");
    }


    return 0;
}