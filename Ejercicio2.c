#include <stdio.h>
int main() {
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr;
    char *ptr2 = &vocales[3];
    *ptr2 = 'x';

    ptr = &vocales[0];
    for (int i = 0; i < 5; i++) {
        printf("vocales[%d] = %c\t", i, vocales[i]);
        printf("%c\n ", *(ptr++));
    }
    return 0;
}