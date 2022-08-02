#include <stdio.h>
#include <stdlib.h>


int main (){
    int x,n;
    printf("Digite o valor para X e para N \n");
    scanf("%d %d",&x,&n);

    printf("Resultado de %d elevado a %d: %d\n",x,n,potencia(x,n));


    return 0;
}

int potencia(int x, int n){
    if(n == 0){
        return 1;
    }else{
        return x * potencia(x, n - 1);
    }

}