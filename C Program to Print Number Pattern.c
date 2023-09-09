#include <stdio.h>
 
int main()
{
    int rows, i, j, number = 1, gap;
    printf("Enter rows for pattern: ");
    scanf("%d",&rows); 
    gap = rows - 1;
 
    for (j = 1; j <= rows; j++) {
        number = j;
 
        for (i = 1; i <= gap; i++)
            printf(" ");
 
        gap--;
 
        for (i = 1; i <= j; i++) {
            printf("%d", number);
            number++;
        }
        number--;
        number--;
        for (i = 1; i < j; i++) {
            printf("%d", number);
            number--;
        }
          printf("\n");
    }
 
    return 0;
}