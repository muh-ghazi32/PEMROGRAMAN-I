#include <stdio.h>

int main() {
    int a = 4, b = 8, c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    float Hasil_dari_a_dikali_b_dibagi_c = (float) (a * b) / c;
    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", Hasil_dari_a_dikali_b_dibagi_c);

    return 0;
} 