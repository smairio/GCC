#include <stdio.h>
#include <stdlib.h>
void tailleTab(int *n);
void remplirTab(int *t,int n);
void affichageTab(int *t,int n);
void selectionSort(int *t,int n);
void swap(int *t,int *t2);
int main(){
int t[10000];
int n;
tailleTab(&n);
remplirTab(t,n);
affichageTab(t,n);
selectionSort(t,n);
affichageTab(t,n);

}

void tailleTab(int *n){
    printf("Donnez le taille du tableau:\n");
    scanf("%d",n);
}
void remplirTab(int *t,int n){
    int i;
    int x=n;
    for(i=0;i<n;i++){
        t[i]=x;
        x--;
    }
}
void affichageTab(int *t,int n){
    int i;
    printf("Affichage du tableaux:\n");
    for (i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    putchar('\n');
}
void selectionSort(int *t,int n){
    int aux;
    int select;
    int i,j;
    for (i=0;i<n-1;i++){
        select=i;
        for (j=i+1;j<n;j++){
            if(t[select]>t[j]){
                select=j;
            }
    }
    swap(t+i,t+select);
}

}
void swap(int *t,int *t2){
    int x;
    x=*t;
    *t=*t2;
    *t2=x;
}