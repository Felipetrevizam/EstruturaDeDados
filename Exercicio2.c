/*
➢Escreva um trecho de código para fazer a
criação de novos tipos de dados conforme
solicitado a seguir:
✓ Horário: composto de hora, minutos e segundos ;
✓ Data: composto de dia, mês e ano;
✓ Compromisso: composto de uma data, horário e
texto que descreve o compromisso.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Data Date;
    Horario Hora;
    char texto[100];
}Compromisso;

int main(){
   int i;
    Compromisso Compromissos[1];
    for (i=0; i<1; i++){
        scanf("%s",Compromissos[i].texto);
        scanf("%d",&Compromissos[i].Date.dia);
        scanf("%d",&Compromissos[i].Date.mes);
        scanf("%d",&Compromissos[i].Date.ano);
        scanf("%d",&Compromissos[i].Hora.hora);
        scanf("%d",&Compromissos[i].Hora.minuto);
        scanf("%d",&Compromissos[i].Hora.segundo);}
        printf("FIM");

    for (i=0; i<1; i++){
        printf("%s",Compromissos[i].texto);
        printf("%d",Compromissos[i].Date.dia);
        printf("%d",Compromissos[i].Date.mes);
        printf("%d",Compromissos[i].Date.ano);
        printf("%d",Compromissos[i].Hora.hora);
        printf("%d",Compromissos[i].Hora.minuto);
        printf("%d",Compromissos[i].Hora.segundo);
        printf("FIM");}    
    return 0;
}