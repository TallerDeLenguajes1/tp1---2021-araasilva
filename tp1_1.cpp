#include <stdio.h>

int main(){
    int Numero = 231;
    int *pNum= &Numero;
    printf("el contenido del puntero es: %d\n", *pNum);
    printf("la direccion de memoria almacenada en el puntero %p\n", pNum);
    printf("direccion de memoria de la variable: %p\n", &Numero);
    printf("direccion de memoria del puntero: %p\n", &pNum);
    printf("tamaño de la memoria: %d\n", sizeof(Numero));

    getchar();
    return 0;
}