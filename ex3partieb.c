#include <stdio.h>

void main() {
    float prix_vente, montant_payer, reduction, taux_reduction;

    printf("Entrez le prix de vente : ");
    scanf("%f", &prix_vente);
    printf("Entrez le montant à payer après réduction : ");
    scanf("%f", &montant_payer);
    reduction = prix_vente - montant_payer;
    taux_reduction = (reduction / prix_vente) * 100;
    printf("Le taux de réduction est : %.2f%%\n", taux_reduction);
}
