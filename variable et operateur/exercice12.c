#include <stdio.h>
void main()
{
    char a;
    printf("donner un charactere miniscule:\n");
    do{
        a=getchar();
    } while ((a <'a') || (a >'z'));
    a= a + 'A' - 'a';
    printf("%c",a);
}
