#include <stdio.h>
int main() {
    int arreglo[] = {2, 4, 6, 8, 10};
    int *ptr;

//segunda opcion de impresion de arreglo con punteros
    ptr = &arreglo[0];
    for (int i = 0; i < 5; i++) {
        printf("arreglo[%d] = %d\t", i, arreglo[i]);
        printf("%d\n ", *(ptr));
    }
    return 0;
}