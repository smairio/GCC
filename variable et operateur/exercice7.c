#include <stdio.h>
int main()
{
    float longeur,largeur,surface;
    printf("donner le longeur et le largeur:\n");
    scanf("%f%f",&longeur,&largeur);
    surface=largeur*longeur;
    printf("le surface est = %f",surface);
    return 0;

}