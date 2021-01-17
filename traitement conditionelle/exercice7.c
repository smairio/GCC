#include<stdio.h>
void main(){
    int a,b,c;
    printf("donner 3 entiers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b) || (a==c) || (c==b)){
        printf("il y a un doublon:");
    }else printf("pas de doublon!");
}