#include<stdio.h>
int main(){
    int aux,a,b,c;
    printf("donner trois nombre:\n");
    scanf("%d%d",&a,&b);
    if(a<=b){
        aux=a;
    }else {aux=b;}
    scanf("%d",&c);
    if(c<aux){aux=c;}
    printf("la valeur le plus petit est %d",aux);
    return 0;
}