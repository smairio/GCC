#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,delta;
    float x,x1,x2;
    printf("donner a , b et c:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        x=(-c)/b;
        printf("x=%f",x);
    }else {
       delta = pow(b,2) - 4*a*c;
       if (delta<0){
           printf("il n a pas de solution:\n");
       }else if (delta == 0){
           x=(-b)/2*a;
           printf("il y a une seule solution x=%f",x);
       }else {
           x1=((-b)+sqrt(delta))/2*a;
           x2=((-b)-sqrt(delta))/2*a;
           printf("x1=%f et x2=%f",x1,x2);
       }
    }
}