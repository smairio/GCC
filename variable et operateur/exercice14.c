#include<stdio.h>
int main ()
{
    unsigned long ip = 0, masque = 255;
    unsigned short octet1, octet2, octet3, octet4;
    printf("saisri les 4 chiffre de l'adress ip :\n");
    scanf("%hu",&octet1);
    ip = octet1;
    ip<<=8;
    scanf("%hu",&octet2);
    ip |= octet2;
    ip<<=8;
    scanf("%hu",&octet3);
    ip |= octet3;
    ip<<=8;
    scanf("%hu",&octet4);
    ip |= octet4;
    printf("ce adress ce code en long sou form %lu\n",ip);
    printf("on peut le retrouver les chiffre!\n");
    octet4 = ip & masque;
    ip >>=8;
    octet3 = ip & masque;
    ip >>=8;
    octet2 = ip & masque;
    ip >>=8;
    octet1 = ip & masque;
    printf(" %hu  %hu %hu  %hu",octet1,octet2,octet3,octet4);
}   