#include <stdio.h>

void main() {
    float prix, taux_reduction, reduction, prix_apres_reduction;
    printf("Entrez le prix de l'article : ");
    scanf("%f", &prix);
    printf("Entrez le taux de réduction (en pourcentage) : ");
    scanf("%f", &taux_reduction);
    reduction = prix * (taux_reduction / 100);
    prix_apres_reduction = prix - reduction;
    printf("Le prix après réduction est : %.2f", prix_apres_reduction);
}
