#include <stdio.h>

int main() {
    int nCr = 1;

    for (int i = 0; i <5; i++) {
        for (int space = 1; space <= 5 - i; space++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                nCr = 1;
            } else {
                nCr = nCr * (i - j + 1) / j;
            }
            printf("%4d", nCr);
        }
        printf("\n");
    }

    return 0;
}
