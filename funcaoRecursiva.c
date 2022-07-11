#include <stdio.h>


int main(){
    int numero,resultado;

    printf("Digite um numero inteiro ");
    scanf("%d",&numero);

    resultado = fatorial(numero);

    printf("O fatorial eh %d \n", resultado);

    return 0;
}
//inicio funcao
int fatorial(int x){
    int resultado;

    if(x == 0){
        resultado = 1;
    }else{
        resultado = x * fatorial (x-1);//a funcao chama a si mesma,ela abre outra instancia da funcao fatorial e assim sucessivamente vai abrindo 
        //outras instancias até obter o resultado e retornar o valor obtido, ou seja é rodada uma funcao nova em um outro espaço da memoria e as 
        //outras funcoes abertas ficam em standby até que a ultima funcao retorne o 0 e quando elas voltam ela ja vai calculando pois o resultado fica 
        //guardado na ultima função .
    }
    return resultado;
}

//  explicando usando a funcao acima:

// int fatorial(int x){
//      int resultado;

//     if( x == 0) {
//        resultado = 1;
//    } else {
//         resultado = x * fatorial (x - 1);  
//    }
// }

// O que vai acontecer:

// Vamos supor que em main eu chamei a função fatorial desta forma:

// fatorial(3);

// então ele entra na função fatorial() e faz literalmente assim:


// fatorial(x = 3)
// {
//      int resultado;

//     x é igual a 0 ? : Não. 

//     Então:
 
//     (4) resultado = 3 *  fatorial (3 - 1); 

//    // Como ele não resolveu ainda, ele chama denovo a função fatorial(), ainda em else:

//       fatorial( x = 2 )
//      {
//          int resultado;

//          x é igual a 0 ?: Não.

//          Então:

//          (3) resultado = 2 * fatorial ( 2 - 1);

//          // Como ele não resolveu ainda, ele chama denovo a função fatorial, ainda em else:

//          fatorial( x = 1 )
//          {
//              int resultado;

//              x é igual a 0? : Não.

//             Então:

//             (2) resultado = 1 * fatorial( 1 - 1 );

//              //Como ele não resolveu ainda, ele chama denovo a função fatorial:

//              fatorial( x = 0)
//             {
//                  int resultado;

//                  x é igual a 0? : Sim.
       
//                   Então:

//                  (1) resultado =  1; 

//                  return resultado; (retornou 1)
//              }

             //Finalmente, ele finalizou e definiu resultado como 1... agora, e compilador
             // faz o caminho INVERSO, e calcula todas as variáveis anteriores, pois só
            // agora conseguiu um resultado (por isso o nome função RECURSIVA, pois
             //  ela faz o CURSO CONTRÁRIO quando resolve um problema deste tipo):


             // Se ligou nos números entre parênteses nas variáveis "resultado" acima?
             // agora siga elas para você entender o que está sendo feito logo abaixo:


            //   (1) resultado = 1;                     // voltando com o valor 1
    //           (2) resultado = 1 * (1) = 1;     // voltando com o valor 1
    //          (3) resultado =  2 * (1) = 2;        // voltando com o valor 2
    //          (4) resultado = 3 * (2) = 6;        // finalmente resolvido
    //         }
    //      }
    //  }

// Depois de tudo isso, ele finalmente chega ao fim desta função, e o return retorna
// o resultado da variável "resultado" que, neste caso, é 6:

//  return resultado (6);
// }
