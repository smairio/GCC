#include<stdio.h>
int main(){
    int nombre_mot=1;
    char c;
    printf("donner une phrase caractere a caractere:\n");
    while (c!='#'){
        c = getchar();
        if ( c == 32 /*code ascii de eslace */ ){
            nombre_mot++;
        }
    }
    printf("le nombre de mots est %d",nombre_mot);
}