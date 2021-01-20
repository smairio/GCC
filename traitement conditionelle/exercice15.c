#include<stdio.h>
int main(){
    int heure_depart,minute_depart,heure_arriver,minute_arriver;
    int temp_minute;
    do{
    printf("donner l'heure de depart:\n");
    scanf("%d",&heure_depart);
    printf("donner le minute de depart:\n");
    scanf("%d",&minute_depart);
    printf("donner l'heure d arrive:\n");
    scanf("%d",&heure_arriver);
    printf("donner le minute d arrive:\n");
    scanf("%d",&minute_arriver);}while(heure_depart>heure_arriver);
    temp_minute=(heure_arriver*60 + minute_arriver ) - (heure_depart*60 + minute_depart);
    int n_heure,n_minute;
    n_heure=temp_minute/60;
    n_minute=temp_minute%60;
    printf("le temp passer est %ih%i",n_heure,n_minute);
    return 0;

}