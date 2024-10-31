#include <stdio.h>
void main()
{
    int a,b,aux;
    printf("donner a");
    scanf("%d",&a);
    printf("donner b");
    scanf("%d",&b);
    aux=a;
    a=b;
    b=aux;
    printf("apres permutation a contient %d et b contient %d",a,b);
}