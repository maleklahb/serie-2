#include <stdio.h>
void main()
{
    int x,c,d,u;
    printf("donner un entier");
    scanf("%d",&x);
    c=x/100;
    d=(x%100)/10;
    u=x%10;
    printf("le chiffre d'unite est %d et de disaine est %d et de centaine est %d",u,d,c);
}