#include<stdio.h>
int main(){
int a,b,c,dis=0;
printf("donner 3 nombre entier:\n");
scanf("%d%d%d",&a,&b,&c);
if((a==b)&&(a==c)){
    dis=3;
} else if ((a==b)||(a==c)||(c==b)){
dis=2;
}
printf("les valeur distincts est %d",dis);
return 0;

}