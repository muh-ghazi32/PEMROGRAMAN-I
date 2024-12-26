#include <stdio.h>

int main () {
    float jari_jari1, tinggi1;

    printf("Jari-jari dan tinggi :\n");
    scanf("%f", &jari_jari1);
    scanf("%f", &tinggi1);

    float luas = 2 * 22.0/7.0 * jari_jari1 * (jari_jari1 + tinggi1);
    float volume = 22.0/7.0 * (jari_jari1 * jari_jari1) * tinggi1;
    float keliling = 2 * 22.0/7.0 * jari_jari1;

    printf ("Volume tabung = %.2f\n", (volume));
    printf ("Luas permukaan tabung = %.2f\n", (luas)); 
    printf ("Keliling tabung = %.2f\n", (keliling));
    printf("\n");

    float jari_jari2, tinggi2;

    printf("Jari-jari dan tinggi :\n");
    scanf("%f", &jari_jari2);
    scanf("%f", &tinggi2);

    float luas2 = 2 * 22.0/7.0 * jari_jari2 * (jari_jari2 + tinggi2);
    float volume2 = 22.0/7.0 * (jari_jari2 * jari_jari2) * tinggi2;
    float keliling2 = 2 * 22.0/7.0 * jari_jari2;

    printf ("Volume tabung = %.2f\n", (volume2));
    printf ("Luas permukaan tabung = %.2f\n", (luas2));
    printf ("Keliling tabung = %.2f\n", (keliling2));

    return 0; 
}