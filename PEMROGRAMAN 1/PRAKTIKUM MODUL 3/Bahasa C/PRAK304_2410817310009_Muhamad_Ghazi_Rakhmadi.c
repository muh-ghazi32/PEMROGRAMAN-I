#include <stdio.h>

int main () {
    int a;

    printf ("Input: ");
    scanf ("%d", &a);

    if (a == 0) {
        printf ("Output: Nol");
    } else if (a >= 1 && a <= 9) {
        printf ("Output: Satuan");
    } else if (a >= 11 && a <= 19) {
        printf ("Output: Belasan");
    } else if (a >= 10 && a <= 99) {
        printf ("Output: Puluhan");
    } else {
        printf ("Output: Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}