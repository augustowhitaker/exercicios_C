#include <stdio.h>

// Crie um programa que pede que o usuário digite 4 notas de 0 a 10 (tipo float) de 4 alunos e os valores deverão ser armazenados em uma matriz bidimensional. Faça a média das notas de cada aluno em armazene as 4 médias em um vetor. Por ultimo  coloque na tela do usuário uma mensagem informando a média de cada aluno


int main(void){
    
     int bimestresAnuais = 4;
     int numeroDeAlunos = 4;

    float notasAlunos [4][4] = {0} ;//matriz
    float mediaAlunos [4] = {0};//vetor

    float media = 0;


    // Declarando e recebendo as 4 notas dos alunos em 4 bimestres em uma matriz
    for(int aluno = 0; aluno < numeroDeAlunos; aluno++){
         printf("\tInsira as 4 notas do aluno %d: \n", aluno + 1);
        for(int notas = 0; notas < bimestresAnuais; notas++){
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        // Guardando as notas e calculando a media em um vetor
        mediaAlunos [aluno] = media / bimestresAnuais;

        //  resetando a variavel media,pois senao irá ser somado a nota do aluno 1 com o do aluno 2...,para isso não ocorrer e calcular aluno por aluno resetamos a variavel
        media = 0;//como esta dentro do laço for toda vez que mudar de aluno ele limpa a variavel

        
    }

    // Lendo a média de cada aluno que esta em vetor
    for(int aluno = 0; aluno < numeroDeAlunos; aluno++){
        printf("A media do aluno %d eh %.2f \n", aluno + 1, mediaAlunos[aluno]);
    }

    return 0;
}