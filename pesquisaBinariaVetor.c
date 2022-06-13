#include <stdio.h>

// <img src="https://raw.githubusercontent.com/kaueMarques/kaueMarques/master/hi.gif" width="30px">
int main(){
    int v[6] = {0,1,2,3,4,5};
    int i = 0, j = 5, elemento = 4;
    int meio;

    while(i <= j){
        meio = (i + j) / 2; //Localiza o elemnto central do vetor

        if(elemento == v[meio]){
            printf("Elemento %d encontrado com indice %d\n",elemento,meio);
            break;
        }
        else if (elemento < v[meio]){
            j = meio - 1;
        }
            else{
                i = meio + 1;
            }
    }


    return 0;
}