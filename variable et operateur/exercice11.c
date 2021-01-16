#include <stdio.h>
void main(){
    char a;
    printf("donner un caractere :\n");
    a = getchar();
    printf("successeur de %c est %c",a,a+1);
}