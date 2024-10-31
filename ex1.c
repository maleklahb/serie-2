#include <stdio.h>
# define pi 3.14
void main()
{
    float ray,dm,pr,sr;
    ray=10;
    dm=ray*2;
    pr=2*pi*ray;
    sr=pi*ray*ray;
    printf("le cercle de rayon 10 a pour diametre %f,pour perimete %f et pour surface %f",dm,pr,sr);
}