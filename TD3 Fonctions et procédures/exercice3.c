#include<stdio.h>
#include<stdbool.h>
void saisie1(int *nn,int *nm){
    printf("donner deux entier:\n");
    scanf("%d%d",nn,nm);
}


int verification(int x,int y){
    int v=1;
    int xx,yy;
    int z;
    while (x%10!=0 && v == 1){
        xx=x%10;
        v=0;
        z=y;
        while(z%10!=0){
            yy=z%10;
            if(yy==xx){
                v=1;
            }
            z=z/10;
        }
        x=x/10;

    }
    if(v==1){
        return 1;
    } else {
        return 0;
    }
}


void main(){
    int n1,n2;
    saisie1(&n1,&n2);
    if (verification(n1,n2)==verification(n2,n1)){
        printf("sont des nombres frere");
    }else printf("ne sont pas des nombre frere");
}
