/*
Exercício 1

➢Faça um programa que use uma estrutura do tipo
CD e faça a leitura de 10 cds (use um vetor de
estrutura do tipo cd). A estrutura CD deve conter
os seguintes campos:
Nome da banda

Data do lançamento do cd: dia, mês e ano
Data da contratação da empresa: dia, mês e ano
Valor do cd
Número de membros da banda
!!!!!!!!!!!!!!Produtora do cd
*/

#include <stdi.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char nome[10];
    struct Data Lancamento;
    struct Data Contratacao;
    float valor;
    int membros;
    char produtora[15];
} Banda;

int main(){
    int i;
    struct Banda Bandas[10];
    for (i=0; i<10; i++){
        scanf(“%d”,&Bandas[i].membros);
    scanf(“%f”,&Bandas[i].valor);
    scanf(“%s”,&Bandas[i].nome);
    scanf(“%s”,&Bandas[i].produtora);
    scanf(“%d”,&Bandas[i].Lançamento.dia);
    scanf(“%d”,&Bandas[i].Lançamento.mes);
    scanf(“%d”,&Bandas[i].Lançamento.ano);
    scanf(“%d”,&Bandas[i].Contratacao.dia);
    scanf(“%d”,&Bandas[i].Contratacao.mes);
    scanf(“%d”,&Bandas[i].Contratacao.ano); }
}