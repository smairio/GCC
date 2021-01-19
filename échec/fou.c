#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,i1,j1;
    printf("donner la position de fou:\n");
    scanf("%d%d",&i,&j);
    printf("donner la positionn vous souhetez a deplacer:\n");
    scanf("%d%d",&i1,&j1);
    if ( ((abs(i-i1)) == (abs(j-j1))) && ((abs(i-i1))!=0 && (abs(j-j1))!=0 ) ){
        printf("deplacement est valide");
    }
    else printf("deplacemet non valide");
    return 0;
}