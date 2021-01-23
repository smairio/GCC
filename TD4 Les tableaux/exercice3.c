#include<stdio.h>
void rotationcomplete(int *t,int pas,int size);
void saisirPas(int *pas);
void seulPas(int *t,int size);
void affichageTab(int *t,int size);
int main(){
    int t[]={1,2,3,4,5,6,7};
    int size=sizeof(t)/sizeof(t[0]);
    int pas;
    saisirPas(&pas);
    rotationcomplete(t,pas,size);
    affichageTab(t,size);

}

void saisirPas(int *pas){
    do{
        printf("saisir le nombre de pas :\n");
        scanf("%d",pas);
    }while(*pas <=0 );
}
void seulPas(int *t,int size){
    int temp=t[size-1];
    int i;
    for(i=size-1;i>0;i--){
        t[i]=t[i-1];
    }
    t[0]=temp;
}
void affichageTab(int *t,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",t[i]);
    }
}
void rotationcomplete(int *t,int pas,int size){
    int i;
    for(i=1;i<=3;i++){
        seulPas(t,size);
    }
}