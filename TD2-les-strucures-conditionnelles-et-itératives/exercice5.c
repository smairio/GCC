#include<stdio.h>
void main(){
    float note,meilleure,pire,moyenne,somme;
    int N,i;
    printf("donner les nombres des notes:\n");
    scanf("%d",&N);
    printf("donner le premier notes:\n");
    scanf("%f",&note);
    meilleure=note;
    pire=note;
    somme=note;
    for(i=2;i<=N;i++){
      printf("donner le %d notes:\n",i);
      scanf("%f",&note);
      if(note>meilleure){
        meilleure = note;
      }
      if(note<pire){
         pire = note;
      }
      somme=somme+note;
    }
    moyenne=somme/N;
    printf("le moyenne = %f le pire = %f le meilleure = %f",moyenne,pire,meilleure);
}