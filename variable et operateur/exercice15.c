#include<stdio.h>
int main(){
    unsigned short s,firstBit;
    printf("Saisir une valeur:\n");
    scanf("%hu",&s);
    firstBit= s & 1;
    s >>= 1;
    firstBit <<=7;
    s |= firstBit;
    printf("%hu",s);
}