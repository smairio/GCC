#include <stdio.h>
void main(){
    float k,m;
    int nombre_carton;
    printf("donner la capacity du camion en kilo:\n");
    scanf("%f",&m);
    printf("donner le poid d'une carton en kilo:\n");
    scanf("%f",&k);
    nombre_carton=m/k;
    printf("le nombre de cartons est %d",nombre_carton);
}