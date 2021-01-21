#include<stdio.h>
#include<stdbool.h>
void saisie1(int *nn,int *nm){
    printf("donner deux entier:\n");
    scanf("%d%d",nn,nm);
}


bool verification(int xx,int yy){
    bool valid =true;
    int p,g;
    while (xx/10!=0 && valid == false ){
        p=xx%10;
        valid=false;
        while (yy/10 !=0 ){
            g=yy%10;
            if(g==p){
                valid=true;
                }
            yy=yy/10;
        }
        xx=xx/10;
    }
    if (valid == true){
        return true;
    }else {
        return false;
    }
}


void main(){
    int n1,n2;
    saisie1(&n1,&n2);

    if(verification(n1,n2)==true){
        printf("les deux nombres sont frere.");
    }else printf("ne sont pas frere");
}
