#include<stdio.h>
void sommeproduit(int n, int *som,int *prod){
    int p;
    *som=0;
    *prod=1;
    while (n/10 != 0){
        p=n%10;
        if(p%2==1){
            *prod*=p;
        }else{
            *som+=p;
        }
        n=n/10;
    }

}
int main(){
    int x,somme,produit;
    printf("donner un entier :\n");
    scanf("%d",&x);
    sommeproduit(x,&somme,&produit);
    printf("%d %d",somme,produit);
}