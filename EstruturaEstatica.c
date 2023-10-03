#include <stdio.h>

typedef struct{
    int peso; //Peso em Kg
    int altura; //Altura em cm
} PesoAltura;

#define alturaMaxima 225

int main() {
    PesoAltura pessoa1;
    pessoa1.peso = 80;
    pessoa1.altura = 185;
    printf("Peso: %i, Altura %i.", pessoa1.peso, pessoa1.altura);
    if (pessoa1.altura>alturaMaxima){
        printf("Altura acima da maxima. \n");
    } else{
        printf("Altura abaixo da maxima. \n");
    }
    return 0; 
}