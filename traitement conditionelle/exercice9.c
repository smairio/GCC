#include<stdio.h>
void main(){
    float a,b;
    float x;
    printf("donner a et b :\n");
    scanf("%f%f",&a,&b);
    printf("la solution pour %fx + %f = 0 est :\n",a,b);
    if(a!=0){
        x=((-b)/a) ;
        printf("x= %f",x);
    } else {
        printf("F.I");
    }
}