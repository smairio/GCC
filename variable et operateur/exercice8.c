#include<stdio.h>
#include<math.h>
void main(){
    float a,b,moy_arith,moy_geo;
    printf("donner a et b:\n");
    scanf("%f%f",&a,&b);
    moy_arith=(a+b)/2;
    moy_geo  = sqrt(a*b);
    printf("moyenne arithmétique = %f et moyenne geometrique = %f",moy_arith,moy_geo);

}