/*
Elabore um programa em C para calcular a média das
4 notas bimestrais de cada aluno (usando registros),
para um professor que tenha 3 turmas de 5 alunos.
Inclua no programa a possibilidade de procurar um
registro (dentre os digitados) pelo nome da pessoa, e
apresentar seus dados na tela. Inclua também a
possibilidade de excluir um registro que possua o
campo nome igual ao valor passado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char nome[50];
    float notas[4];
} Aluno;

Aluno turmas[3][5];

// Função para calcular a média das notas de um aluno
void calcularMedia(Aluno* aluno){
    float soma = 0;
    int i;
    for (i = 0;i < 4; i++){
        soma += aluno->notas[i];
    }
    printf("A média do aluno %s é %.2f\n", aluno->nome, soma / 4);
}

//Função para procurar o aluno pelo nome
void procurarAluno(char* nome){
    int i, j;
    
    for (i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            if(strcmp(turmas[i][j].nome, nome) == 0){
                calcularMedia(&turmas[i][j]);
                return;
            }
        }
    }

    printf("Aluno não encontrado.\n");

}

//Função para excluir um aluno
void excluirAluno(char* nome){
    int i,j;
    for(i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            if(strcmp(turmas[i][j].nome, nome) == 0) {
                strcpy(turmas[i][j].nome, "");
                printf("Aluno excluido\n");
                return;
            }
        }
    }
    printf("Aluno não encontrado \n");

}

int main(){

    return 0;
}