#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5, tinggi = 12;
    int sisi_miring, keliling, luas;
    keliling = 30;
    luas = 30;
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);

    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", sisi_miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);
    
    return 0;
}