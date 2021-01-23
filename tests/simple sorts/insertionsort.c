#include <stdio.h>
void tailleTab(int* n);
void remplirTab(int* t,int n);
void affichageTab(int* t,int n);
void insertionSort(int* t, int n);
void swap(int* t,int* t2);
int main(){
    int t[10000],n;
    tailleTab(&n);
    remplirTab(t,n);
    affichageTab(t,n);
    insertionSort(t,n);
    affichageTab(t,n);
}
void tailleTab(int* n){
    do{printf("donner le taille du tableaux:\n");
    scanf("%d",n);}while(*n<=0 || 10000<*n);
}

void remplirTab(int *t,int n){
    int i;
    int x=n;
    for(i=0;i<n;i++){
        t[i]=x;
        x--;
    }
}
void affichageTab(int* t,int n){
    int i;
    printf("affichage du tableau:\n");
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
}
void insertionSort(int* t, int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=+1;j<n;j++){
            if(t[i]>t[j] && (i<j)){
                swap(t+i,t+j);
            }
        }
    }
}
void swap(int *t,int* t2){
    int aux;
    aux=*t;
    *t=*t2;
    *t2=aux;
}