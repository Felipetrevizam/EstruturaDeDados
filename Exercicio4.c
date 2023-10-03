/*
➢Considerando a estrutura Aluno definida
anteriormente, escreva um programa que
contenha uma função para inicializar uma tabela
de alunos, uma função que armazena os dados
de um novo aluno numa dada posição do vetor,
uma que mostre as informações do aluno numa
dada posição do vetor (esta função deve prever o
caso de tentar mostrar os dados em uma posição
sem dados) e o programa principal. Utilize
ponteiro para estrutura para este programa.
*/

#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[81];
    int mat;
    char end[121];
    char tel[21];
};

//Funcao para inicializar a tabela de alunos
void inicializarAlunos(struct Aluno *tabela, int tamanho){
    int i;
    for(i = 0;i < tamanho; i++){
        tabela[i].mat = -1; // -1 pois a posição está vazia
    }
}

//Função para armazenar os dados de um novo aluno em uma posição do vetor
void adicionarAluno(struct Aluno *tabela, int tamanho, int posicao){
    if (posicao >= 0 && posicao < tamanho){
        scanf("%80s", tabela[posicao].nome); 
        scanf("%d", &tabela[posicao].mat);
        scanf("%120s", tabela[posicao].end);
        scanf("%20s", tabela[posicao].tel);
    } else{
        printf("Posição invalida");
    }
}

void mostrarAluno(struct Aluno *tabela, int tamanho, int posicao){
    if (posicao >= 0 && posicao < tamanho && tabela[posicao].mat != -1){
        printf("%s\n", tabela[posicao].nome);
        printf("%d\n", tabela[posicao].mat);
        printf("%s\n", tabela[posicao].end);
        printf("%s\n", tabela[posicao].tel);
    }   else{
        printf("Posição invalida ou sem dados\n");
    }
}

int main(){
    int tamanhoTabela;

    printf("Tamanho da tabela: ");
    scanf("%d", &tamanhoTabela);

    struct Aluno *tabelaAluno = (struct Aluno *)malloc(sizeof(struct Aluno) * tamanhoTabela);
    if (tabelaAluno == NULL){
        printf("Erro na alocação de memória. \n");
        return 1;
    }
    
    int opcao, posicao;

    inicializarAlunos(tabelaAluno, tamanhoTabela);

    do{
        printf("\nMenu:\n");
        printf("1- Adicionar aluno\n");
        printf("2- Mostrar aluno\n");
        printf("0- Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Posição do aluno de (0 a %d): ", tamanhoTabela);
            scanf("%d", &posicao);
            adicionarAluno(tabelaAluno, tamanhoTabela, posicao);
            break;
        
        case 2:
            printf("Posição do aluno de (0 a %d): ", tamanhoTabela);
            mostrarAluno(tabelaAluno, tamanhoTabela, posicao);
            break;

        case 0:
            printf("Saindo do programa\n");
            break;

        default:
            printf("Opção invalida\n");
        }
    } while (opcao != 0);

    free(tabelaAluno);

    return 0;
}

