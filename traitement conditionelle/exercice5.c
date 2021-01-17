#include<stdio.h>
int main(){
    int a,b;
    printf("donner deux valeur:\n");
    scanf("%d%d",&a,&b);
    if (a==b){
        printf("les deux valeurs sont distincs");
    }else printf("ne sont pas distincs");
}