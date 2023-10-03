#include <stdio.h>

int main(){
    int x = 25;
    int* y = &x; // y recebe o endereco de memoria de x
    *y = 30; // 30 = endereco de memoria para onde y aponta que eh x
    printf("Valor atual de x: %i\n", x);
    return 0;
}