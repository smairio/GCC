#include<stdio.h>
int main(){
    int a,b,c;
    printf("donner deux entier a et b;\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("apres le permutation a=%d b=%d",a,b);
    return 0;
}