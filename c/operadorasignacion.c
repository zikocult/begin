#include <stdio.h>

int main(){

    int a, b, c;
    a=b=c=10;
    
    a = a +3;
    b += 4;
    
    c = c - 4; 
    c -= 2;
    
    a = a * 2;
    b *= 2;

    c = c /2;
    c /= 2;

    printf("El valor de a %i %i %i\n",a, b, c);


    return 0;
}
