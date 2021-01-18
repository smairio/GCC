#include<stdio.h>
void main(){
    float x,a,b;
    char operateur;
    printf("donner deux nombre:\n");
    scanf("%f%f",&a,&b);
    printf("donner un operateur:\n");
    fflush(stdin);
    scanf("%c",&operateur);
    if((operateur=='+')||(operateur=='-')||(operateur=='*')||(operateur=='/')){
    switch(operateur){
        case '+':
        x=a+b;
        printf("%f",x);
        break;
        case '-':
        x=a-b;
        printf("%f",x);
        break;
        case '*':
        x=a*b;
        printf("%f",x);
        break;
        case '/':
        x=a/b;
        printf("%f",x);
        break;

    }
    }
}