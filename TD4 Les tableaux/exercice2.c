#include<stdio.h>
void taille(int *t , int n,int *indiceDebut,int *indiceFin,int *length);
int nombreDeChaine(int t[],int n);
int main(){
    int t[]= {1,2,5,3,12,25,13,8,4,7,24,28,32,11,14};
    int n;
    int indiceDebut,indiceFin,nombreChaine,length;
    n=sizeof(t) / sizeof(t[0]);
    nombreChaine=nombreDeChaine(t,n);
    printf("%d",nombreChaine);
    putchar('\n');
    taille(t , n,&indiceDebut,&indiceFin,&length);
    printf("%d %d %d",indiceDebut,indiceFin,length);
    putchar('\n');
    int i;
    for (i=indiceDebut;i<indiceFin;i++){
        printf("%d  ",t[i]);
    }
    }
int nombreDeChaine(int *t,int n){
    int i;
    int nombre=1;
    for(i=0;i<n;i++){
        if(t[i]>t[i+1]){
            nombre++;
        }
    }
    return nombre;
}
void taille(int *t , int n,int *indiceDebut,int *indiceFin,int *length){
    int i=0,x1=0,x2,y1,y2;
    int debut,temp=1,size=0;
    for(i=0;i<n;i++){
        if(t[i]>t[i+1]){
            x2=i+1;
            temp=x2-x1;
            if(temp>size){
                size=temp;
                y1=x1+1;
                y2=x2;
                x1=x2;
            }
        }
    }
    size-=1;
    *indiceDebut=y1;*indiceFin=y2;*length=size;
    }
    

