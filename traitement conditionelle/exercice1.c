#include<stdio.h>
void main()
{
    int age;
    printf("donner l'age:\n");
    scanf("%d",&age);
    if(age>=18){
        printf("tu es majeur");
    }
    else printf("tu n'es pas un majeur");
}