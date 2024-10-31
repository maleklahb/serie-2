#include <stdio.h>
#include <math.h> 
void main() {
    float x1, y1, x2, y2, d;
    printf("Entrez les coordonnées du premier point (x1, y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("Entrez les coordonnées du deuxième point (x2, y2) : ");
    scanf("%f %f", &x2, &y2);
    d= sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distance euclidienne entre les deux points est : %f", d);
}
