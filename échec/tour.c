#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,i1,j1;
    printf("donner la position de tours:\n");
    scanf("%d%d",&i,&j);
    printf("donner la position vous souheter a deplacer:\n");
    scanf("%d%d",&i1,&j1);
    if ((((i - i1) == 0) && (abs(j -j1) > 0)) || ((abs(i -i1) > 0) && ((j - j1) == 0))){
        printf("mouvement est valide");
    }else printf("n est pas valide");
    return 0;

}