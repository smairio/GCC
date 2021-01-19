#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,i1,j1,choix;
    printf("Quelle piece souhaitez-vous deplacer ?\n0 = cavalier\n1 = tour\n2 = fou\n3 = dame\n4 = roi\n");
scanf("%d",&choix);
switch(choix){
    case 0:
    printf("Saisissez les coordonnees de la case de depart :\n");
    scanf("%d%d",&i,&j);
    printf("Saisissez les coordonnees de la case d'arrivee :\n");
    scanf("%d%d",&i1,&j1);
    if (((abs (i - i1)== 1)  && (abs(j -j1) == 2))  || ((abs(i - i1) == 2) && (abs(j -j1) == 1))){
        printf("la deplacemet est valide");
    }else printf("la deplacemet n'est pas valide");
    break;
    case 1:
    printf("Saisissez les coordonnees de la case de depart :\n");
    scanf("%d%d",&i,&j);
    printf("Saisissez les coordonnees de la case d'arrivee :\n");
    scanf("%d%d",&i1,&j1);
    if ((((i - i1) == 0) && (abs(j -j1) > 0)) || ((abs(i -i1) > 0) && ((j - j1) == 0))){
        printf("mouvement est valide");
    }else printf("n est pas valide");
    case 2:
    printf("Saisissez les coordonnees de la case de depart :\n");
    scanf("%d%d",&i,&j);
    printf("Saisissez les coordonnees de la case d'arrivee :\n");
    scanf("%d%d",&i1,&j1);
        if ( ((abs(i-i1)) == (abs(j-j1))) && ((abs(i-i1))!=0 && (abs(j-j1))!=0 ) ){
        printf("deplacement est valide");
    }else printf("position invalide");
    case 3:
    printf("Saisissez les coordonnees de la case de depart :\n");
    scanf("%d%d",&i,&j);
    printf("Saisissez les coordonnees de la case d'arrivee :\n");
    scanf("%d%d",&i1,&j1);
    if (( ( (abs(i-i1)) == (abs(j-j1)) ) && ( (abs(i-i1))!=0 && (abs(j-j1))!=0 ) ) ||
     ((((i - i1) == 0) && (abs(j -j1) > 0)) || ((abs(i -i1) > 0) && ((j - j1) == 0)))) {
         printf("position valide");
     }
     else printf("position invalide");
    case 4:
    printf("Saisissez les coordonnees de la case de depart :\n");
    scanf("%d%d",&i,&j);
    printf("Saisissez les coordonnees de la case d'arrivee :\n");
    scanf("%d%d",&i1,&j1);
        if (( ((abs(i-i1)== 1) && (abs(j-j1)== 1)) && ( (abs(i-i1))!=0 && (abs(j-j1))!=0 ) ) ||
     ((((i - i1) == 0) && (abs(j -j1) == 1)) || ((abs(i -i1) == 1 ) && ((j - j1) == 0)))) {
         printf("position valide");
     }
     else printf("position invalide");
}
}