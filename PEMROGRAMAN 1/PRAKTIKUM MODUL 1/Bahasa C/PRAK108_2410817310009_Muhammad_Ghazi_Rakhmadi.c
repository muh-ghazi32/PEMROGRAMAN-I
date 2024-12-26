#include <stdio.h>
#include <math.h>

int main() {
    
    int putaran = 5;
    float jarak_tempuh = 14;
    float keliling_taman = jarak_tempuh / putaran;
    float jari_jari = keliling_taman / (2 * 3.14159265358979323846);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}