#include <stdio.h>
void getMinMax(int *t,int borneInf,int borneSup,int *min,int *max);
void xx(int *a,int *b);
void permutation(int *t,int borneInf,int borneSup,int *min,int *max);
int main(){
    int t[200],i,n,borneInf,borneSup,min,max;
    do{
        printf("donner le taille du tableau:\n");
        scanf("%d",&n);
    }while(n<0 || 200<n);
    printf("remplir le tableau\n");
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
    }

    
    printf("affichage du tableau:\n");
    for(i=0;i<n;i++){
        printf("%d  ",t[i]);
    }
    putchar('\n');

    //borne inf
    printf("donner la borne inferieur:\n");
    do{scanf("%d",&borneInf);}while(borneInf<1 || n-2<borneInf);
    borneInf--;

    //borne supp
    printf("donner la borne supperieur:\n");
    do{scanf("%d",&borneSup);}while(borneSup<=borneInf || n-1<borneSup);
    borneSup--;

    ///////////////////////////////////////
    permutation(t,borneInf,borneSup,&min,&max);
    ///////////////////////////////////////


    printf("affichage du tableau:\n");
    for(i=0;i<n;i++){
        printf("%d  ",t[i]);
    }
    /*
    //affichage zone des borne
     printf("affichage du zone:\n");
    for(i=borneInf-1;i<=borneSup-1;i++){
    printf("%d  ",t[i]);
    }
    putchar('\n');
    getMinMax(t,borneInf,borneSup,&min,&max);
    printf("min=%d && max=%d",min,max);
    return 0;
    */
}

void getMinMax(int *t,int borneInf,int borneSup,int *min,int *max){
    int i;
    *min=borneInf;
    *max=borneSup;
    for(i=borneInf;i<borneSup;i++){
        if(t[i]<t[*min]){
            *min=i;
        }
        if(t[i]>t[*max]){
            *max=i;
        }

    }
}
void permutation(int *t,int borneInf,int borneSup,int *min,int *max){
    int aux;
    while((borneInf-borneSup!=0)){
    getMinMax(t,borneInf,borneSup,min,max);
    xx(&t[*min],&t[borneInf]);
    borneInf++;
    xx(&t[*max],&t[borneSup]);
    borneSup--;
    }
}

void xx(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}