#include <stdio.h>
#include <stdlib.h>


int main(){

    int n;
    printf("Digite um numero maio que zero:\n");
    scanf("%d",&n);

    printf("Fatorial = %d ",fatorial(n));

    return 0;
}

int fatorial(int numeroFatorarial){

    if(numeroFatorarial == 0 || numeroFatorarial == 1){
        return 1;

    }else{

    }return numeroFatorarial * fatorial(numeroFatorarial - 1);

}