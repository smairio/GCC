#include<stdio.h>
void sommeproduit(int n, int *som,int *prod){
    int p;
    int sm=0;
    int pr=1;
    while (n/10 != 0){
        p=n%10;
        if(p%2==1){
            pr=pr*p;
        }else{
            sm=sm+p;
        }
        n/10;
    }
    *som=sm;
    *prod=pr;
}
int main(){
    int x,somme,produit;
    printf("donner un entier :\n");
    scanf("%d",&x);
    sommeproduit(x,&somme,&produit);
    printf("%d %d",somme,produit);
}