#include<stdio.h>
void main()
{
    int i,j;
    int coleur;
    do{
        printf("donner i:\n");
        scanf("%d",&i);
    }while ((i<1)||(i>8));
    do{
        printf("donner j:\n");
        scanf("%d",&j);
    }while ((j<1)||(j>8));
    if(i%2==1){
        if(j%2==0){
            coleur=0;
        } else {
            coleur=1;
        }
    } else {
        if (j%2==0){
            coleur=1;
        } else {
            coleur=0;
        }
    }
    if (coleur == 1){
        printf("coleur est noir;");
    } else printf("coleur est blanc");

}