#include<stdio.h>
void main()
{
    int a,abs;
    printf("donner un entier :\n");
    scanf("%d",&a);
    if(a<0){
        abs=a*(-1);
    }
    printf("le valeur absolut de a est %d",abs);
}