#include<stdio.h>
int main(){
    float note;
    printf("donner un votre note:\n");
    scanf("%f",&note);
    if (note<8){
        printf("ajourné");
    }
    else if(note<10){
        printf("ratrapage");
    }
    else printf("admis");
}