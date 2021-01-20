#include<stdio.h>
int main(){
    int n,i,premier=1;
    printf("donner un entier:\n");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++){
        if ((n%i) == 0 ){
            premier=0;
        }
    }
    if (premier==1){
        printf("%d est premier",n);
    } else printf("%d n est pas premier",n);

}