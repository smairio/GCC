#include <stdio.h>
int main()
{
    float number,c1=0.5,c2=0.2,c3=0.1,c4=0.05,c5=0.02,c6=0.01;
    int nc1=0,nc2=0,nc3=0,nc4=0,nc5=0,nc6=0;
    printf("donner un nombre entre 0 est 0,99:\n");
    scanf("%f",&number); 
    nc1=number / c1;
    number=number -(nc1*c1);
    nc2=number /c2;
    number=number -(nc2*c2);
    nc3=number /c3;
    number=number -(nc3*c3);
    nc4=number /c4;
    number=number -(nc4*c4);
    nc5=number /c5;
    number=number -(nc5*c5);
    nc6=number /c6;
    number=number -(nc6*c6);
    printf("le nombre %d %d %d %d %d %d",nc1,nc2,nc3,nc4,nc5,nc6);
    


}