#include <stdio.h>
void main()
{
    int h,x,m,s;
    printf(" donner x");
    scanf("%d",&x);
    h=x/3600 ;
    m=(x % 3600)/60;
    s=x %60;
    printf("le nombre est %d en heures %d en minutes %d en secondes",h,m,s);
}