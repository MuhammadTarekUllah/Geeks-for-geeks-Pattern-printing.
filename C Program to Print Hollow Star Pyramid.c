#include <stdio.h>
 
int main()
{
    int i, space, rows, j = 0;
    printf("Enter number of row for patterns: ");
    scanf("%d",&rows);
    for (i = 0; i < rows - 1; i++) {
 
        for (space = 1; space < rows - i; space++) {
            printf(" ");
        }
        for (j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 2 * rows - 1; i++) {
        printf("*");
    }
    return 0;
}