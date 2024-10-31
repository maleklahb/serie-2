#include <stdio.h>

void main() {
    double bits;
    double octets, kilo_octets, mega_octets, giga_octets;
    printf("Entrez un nombre en bits : ");
    scanf("%lf", &bits);
    octets = bits / 8;
    kilo_octets = octets / 1024;
    mega_octets = kilo_octets / 1024;
    giga_octets = mega_octets / 1024;
    printf("Conversions :");
    printf("%.2lf bits = %.2lf Octets", bits, octets);
    printf("%.2lf bits = %.2lf Kilo-Octets", bits, kilo_octets);
    printf("%.2lf bits = %.2lf Mega-Octets", bits, mega_octets);
    printf("%.2lf bits = %.2lf Giga-Octets", bits, giga_octets);
}
