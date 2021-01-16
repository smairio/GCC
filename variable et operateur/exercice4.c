#include<stdio.h>
void main(){
    int a,b,c,d,e;
    int temp1,temp2;
    printf("donner a,b,c,d et e :\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    temp1=b;
    b=c;
    c=e;
    e=temp1;
    temp2=d;
    d=a;
    a=temp2;

     


    printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
}