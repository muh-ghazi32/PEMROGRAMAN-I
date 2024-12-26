#include <stdio.h>

int main() {
    int N; 

    printf("Input: ");
    scanf("%d", &N);

    if (N > 0) {
        printf("Output: Positif\n");
    } else if (N < 0) {
        printf("Output: Negatif\n");
    } else {
        printf("Output: Nol\n");
    }
    return 0;
}