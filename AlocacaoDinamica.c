#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *c; 

    c = (char *)malloc(1); //Aloca 1 byte de memória

    if (c == NULL) {
        printf("Não conseguiu alocar a memória\n");
        exit(1);
    }

    *c = 'd'; //Carrega o caracter 'd' para o endereço de memória c

    printf("%c\n", *c);
    free(c);
    return 0;
}