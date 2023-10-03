#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int peso; //Peso em Kg
    int altura; //Altura em cm
} PesoAltura;

#define alturaMaxima 225

int main() {
    PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura)); //Reservando a memoria
    pessoa1 -> peso = 80; //Salvando dados na memoria
    pessoa1 -> altura = 185;
    printf("Peso: %i, Altura %i.", pessoa1 -> peso, pessoa1 -> altura);
    if (pessoa1 -> altura > alturaMaxima){
        printf("Altura acima da maxima. \n");
    } else{
        printf("Altura abaixo da maxima. \n");
    }
    free(pessoa1); //Libera a memória alocada
    return 0; 
}