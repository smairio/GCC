#include<stdio.h>
#include<stdbool.h>

bool amis(int x ,int y){
    int i,som1=0,som2=0;
    for(i=2;i<=(x/2);i++){
        if(x%i==0){
            som1+=i;
        }
    }
    for(i=2;i<=(y/2);i++){
        if(y%i==0){
            som2+=i;
        }
    }
    if((som1==y)&&(som2 == x)){
        return true;
    }else {
        return false;
    }
}
int main(){
    int n1,n2;
    printf("donner deux entier:");
    scanf("%d%d",&n1,&n2);
    if(amis(n1,n2)==true){
        printf("les deux nombres sont amis");
    }else printf("ne sont pas amis");
}