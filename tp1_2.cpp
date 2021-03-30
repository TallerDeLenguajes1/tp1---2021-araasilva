#include <stdio.h>

int cuadrado(int *);
void cuadradoVoid(int *);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);

 int main(){
     int numero;
     printf("ingrese un numero: ");
     scanf("%d", &numero);
      printf("contenido de la variable: %d. Direccion: %p\n", numero, &numero);
      cuadradoVoid(&numero);
      getchar();
     return 0;
 }
 int cuadrado(int *num){
     int resultado=0;
     resultado= *num *(*num);
     return resultado;
 }
 void cuadradoVoid(int *num){
     printf("el cuadrado de %d es: %d",*num, *num*(*num));
 }

 void invertir(int *a, int *b){
     int aux;
     aux= *a;
     a = b;
     b = &aux;
 }
 void ordenar(int *a, int *b){
    int aux;
    if (*b<*a){
        aux= *a;
        a = b;
        b = &aux;
    }
 }
