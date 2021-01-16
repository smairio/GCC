#include<stdio.h>
int main(){
    int a,b,c,d,temp,temp2;
    printf("donner les valeur a,b,ce t d:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    temp=a;
    temp2=b;
    a=c;
    c=temp;
    b=d;
    d=temp2;
    printf("les valeurs : a=%d b=%d c=%d d=%d",a,b,c,d);
    return 0;


}