#include <stdio.h>
int main()
{
 
    int input, rows, columns;
    printf("Enter number of rows to print pattern: ");
    scanf("%d",&input);
    for (rows = 1; rows <= input; rows++) {
 
        for (columns = input; columns > rows; columns--) {
            printf(" ");
        }
 
        printf("*");
 
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            printf(" ");
        }
        if (rows == 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
    }
    for (rows = input - 1; rows >= 1; rows--) {
 
        for (columns = input; columns > rows; columns--) {
            printf(" ");
        }
 
        printf("*");
        for (columns = 1; columns < (rows - 1) * 2;
             columns++) {
            printf(" ");
        }
        if (rows == 1) {
            printf("\n");
        }
        else {
            printf("*\n");
        }
    }
    return 0;
}
