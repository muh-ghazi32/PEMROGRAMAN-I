#include <stdio.h>
int main () {
    int nilai;
    char grade;

    printf("Input: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        grade = 'A';
    } else if (nilai >= 70) {
        grade = 'B';
    } else if (nilai >= 60) {
        grade = 'C';
    } else if (nilai >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }
   
    printf("Output: %c\n", grade);

    return 0;
}