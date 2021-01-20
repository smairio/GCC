#include <stdio.h>
#include <math.h>

void main(){
    float a,b,c,x1,x2,x,delta;
    printf("donner les a,b et c:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        x=(-c)/b;
        printf("f admet une seule solution x = %f\n",x);
    }else{
        delta=b*b - 4*a*c;
        if(delta<0){
            printf("pas de solution");
        }else if (delta == 0){
            x=(-b)/2*a;
            printf("f admet une seule solution x = %f\n",x);
        }else{
            x1=((-b) - sqrt(delta))/2*a;
            x2=((-b) + sqrt(delta))/2*a;
            printf("f admet deux solutions x1= %f et x2=%f",x1,x2);
        }
    }
}