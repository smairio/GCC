#include <stdio.h>
int main(){
    void remplir(int* t, int n);
    void affichage(int* t, int n);
    void taille(int* n);
    void compression(int* t,int *n);
    int t[20],n;
    taille(&n);
    remplir(t,n);
    affichage(t,n);
    printf("\n=========================\n");
    compression(t,&n);
    affichage(t,n);

}
void remplir(int* t,int n){
    int i;
    printf("remplir le tableaux:\n");
    for(i=0;i<n;i++){
        scanf("%d",t+i);
    }
}
void affichage(int* t,int n){
    int i;
    printf("affichage du tableaux:\n");
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
}
void taille(int* n){
    do{
        printf("donner le taille du tableaux:\n");
        scanf("%d",n);
    }while(*n<0 || *n>20);
}

int recherche(int* t,int n){
    int i;int j;int x=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(t[i]==t[j]){
                x=j;
                break;
            }
        }
        if(x!=0){
                break;
            }
    }
    return x;
}
void compression(int* t,int *n){
int i,j,k;
for (i=0;i<*n;i++){
    if(recherche(t,*n)!=0){
        for (j=recherche(t,*n),k=j+1;j<*n-1;j++,k++){
            t[j]=t[k];
        }
        *n=*n-1;
    }
}
}