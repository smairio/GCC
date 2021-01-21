#include <stdio.h>

int est_croissante(int n){
    int y=1;
    while ((n/10 != 0) && y == 1 ){
        if(n%10 < (n/10)%10){
            y = 0;
        }
        n=n/10;
    }
    return y;
}

void main(){
    int x;
    printf("donner un entier:\n");
    scanf("%d",&x);
    if(est_croissante(x) == 1){
        printf("les chiffre de X est forme une progression croissante.");
    }else printf("les chiffre de X ne forme pas une progression croissante.");
}