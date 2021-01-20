#include<stdio.h>
int main(){
    int i,n,f2,f0=1,f1=1;
    
    printf("donner N:\n");
    scanf("%d",&n);
    for (i=2;i<=n;i++){
        f2=f0+f1;
        f0=f1;
        f1=f2;
    }
    printf("f(%d)=%d",n,f2);
}