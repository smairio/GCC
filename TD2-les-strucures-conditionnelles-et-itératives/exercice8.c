#include<stdio.h>
#include<math.h>
int main(){
    int i,z;
    for (i=150;i<=410;i++){
        z= pow((i%10),3) + pow(((i/10)%10),3)+ pow((i/100),3);
        if(z==i){
            printf("%d  ",z);
        }
     }
}