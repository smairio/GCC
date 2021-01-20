#include<stdio.h>
int main(){
    float n;
    int x,i;
    printf("donner le nombre n :\n");
    scanf("%f",&n);
    printf("donner x:\n");
    scanf("%d",&x);
    for(i=1;i<x;i++){
        n=n*n;
    }
    printf("n = %f",n);
}