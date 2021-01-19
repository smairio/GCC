#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j,i1,j1;
    printf("donner la position de dame:\n");
    scanf("%d%d",&i,&j);
    printf("donner la position que vous souhetez a deplacer:\n");
    scanf("%d%d",&i1,&j1);
    if (( ((abs(i-i1)== 1) && (abs(j-j1)== 1)) && ( (abs(i-i1))!=0 && (abs(j-j1))!=0 ) ) ||
     ((((i - i1) == 0) && (abs(j -j1) == 1)) || ((abs(i -i1) == 1 ) && ((j - j1) == 0)))) {
         printf("position valide");
     }
     else printf("position invalide");
     return 0;
}