#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,i1,j1;
    printf("donner la position de cavalier:\n");
    scanf("%d%d",&i,&j);
    scanf("donner la position de deplacement de cavalier:\n");
    scanf("%d%d",&i1,&j1);
    //determiner si la position est valide ou non
    if (((abs (i - i1)== 1)  && (abs(j -j1) == 2))  || ((abs(i - i1) == 2) && (abs(j -j1) == 1))){
        printf("la deplacemet est valide");
    }else printf("la deplacemet n'est pas valide");
    

}