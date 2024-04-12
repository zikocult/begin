#include <stdio.h>

int main(){
    int a = 6;
    int *pa;
    pa = &a;

    printf("%p %d %p %d", pa, *pa, &a, a);

    return 0;
}