#include<stdio.h>
int main(){
    int heure_travaille,sal_heure;
    float salaire;
    printf("donner le nombre de travaille:\n");
    scanf("%d",&heure_travaille);
    printf("donner salaire par heure:\n");
    scanf("%d",&sal_heure);
    if(heure_travaille>39){
        salaire= 39 * sal_heure + ((heure_travaille - 39)*1.5)*sal_heure;
    }
    else if(heure_travaille>44){
        salaire= 39 * sal_heure + 5*1.5*sal_heure + ((heure_travaille - 44)*2)*sal_heure;
    }else {
        salaire= 39 * sal_heure;
    }
    printf("salaire = %f",salaire);
    return 0;
}