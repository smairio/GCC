#include<stdio.h>

int main(){
    float tp,ex,ds,noteFinal;
    printf("donner les 3 notes:\n");
    scanf("%f%f%f",&tp,&ds,&ex);
    noteFinal= tp*0.2 + ds*0.3 + ex*0.5;
    printf("note finale = %f : ",noteFinal);
    if(noteFinal<10){
        printf("Echec");
    }
    else if(noteFinal<12){
        printf("passable");
    }
    else if(noteFinal<14){
        printf("assez bien");
    }
    else if(noteFinal<16){
        printf("bien");
    }
    else printf("tres bien");
}