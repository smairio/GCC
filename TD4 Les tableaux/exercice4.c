#include <stdio.h>



void taille(int *n);
void remplir(int *t,int n);
void affichage(int *t,int n);
int b_inf(int *b_Inf);
int b_sup(int *b_Sup);
void getMinMax(int *t,int *min, int *max,int b_inf,int b_sup);


int main(){
    int n;
    int t[200];
    int min,max,b_Inf,b_Sup;
    taille(&n);
    remplir(t,n);
    affichage(t,n);
    b_inf(&b_Inf);
    b_sup(&b_Sup);
    getMinMax(t,&min,&max,b_Inf,b_Sup);
    affichage(t,n);
    printf("\n %d %d",min,max);
    
}



void taille(int *n){
    do{
        printf("donner le taille du tableau:\n");
        scanf("%d",n);
    }while(*n<=0 || 200<*n);
}



void remplir(int *t,int n){
    int i;
    printf("remplir le tableau:\n");
    for(i=0;i<n;i++){
        scanf("%d",t+i);
    }
}



void affichage(int *t,int n){
    printf("affichage du tableau:\n");
    int i;
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
}



int b_inf(int *b_inf){
    printf("\ndonner la borne inferieur:\n");
    scanf("%d",b_inf);
    return *b_inf;
}



int b_sup(int *b_sup){
    printf("donner la borne supperieur:\n");
    scanf("%d",b_sup);
    return *b_sup;

}



void getMinMax(int *t,int *min, int *max,int b_inf,int b_sup){
    int i;
    *min=t[b_inf];
    *max=t[b_inf];
    for(i=b_inf;i<=b_sup;i++){
        if(t[i]<*min){
            *min=i;
        }
        if(t[i]>*max){
            *max=i;
        }

    }
}



void permutation(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}



void triMinMaxs(int *t){

}