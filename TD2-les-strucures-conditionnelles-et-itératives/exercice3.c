#include<stdio.h>
int main(){
    float a,b,result;
    char operateur;
    printf("donner deux nombres:\n");
    scanf("%f%f",&a,&b);
    fflush(stdin);
    printf("donner un operateur:\n");
    scanf("%c",&operateur);
    switch(operateur){
        case '+':
        result = a+b;
        printf("%f + %f = %f",a,b,result);
        break;
        case '-':
        result = a-b;
        printf("%f - %f = %f",a,b,result);
        break;
        case '*':
        result = a*b;
        printf("%f * %f = %f",a,b,result);
        break;
        case '/':
        if(b==0){
            printf("on ne peux pas effecter la devision.\n");
        }else{
            result= a/b;
            printf("%f / %f = %f",a,b,result);
        }
        break;
    }

}