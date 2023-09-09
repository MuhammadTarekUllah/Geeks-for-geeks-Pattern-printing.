#include <stdio.h>
int main()
{
    int input, i, j, k = 1;

    printf( " Enter a number to define the rows in Floyd's triangle: \n");
    scanf( "%d", &input);
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %2d", k++);
        }
        printf( "\n");
    }

}
    
