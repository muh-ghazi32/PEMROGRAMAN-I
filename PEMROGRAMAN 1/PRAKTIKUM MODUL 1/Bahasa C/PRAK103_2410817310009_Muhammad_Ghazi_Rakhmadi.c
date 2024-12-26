#include <stdio.h>
int main (){
    float a = 9, b = 6, x = 10, y = 7;
    printf ("Variabel a bernilai %.f\n", a);
    printf ("Variabel b bernilai %.f\n", b);
    printf ("Variabel x bernilai %.f\n", x);
    printf ("Variabel y bernilai %.f\n", y);

    float Hasil_dari_a_ditambah_b_dikali_x_dan_dibagi_y = ( ( a + b) * x ) / y;
    printf ("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", Hasil_dari_a_ditambah_b_dikali_x_dan_dibagi_y);
    return 0;
}