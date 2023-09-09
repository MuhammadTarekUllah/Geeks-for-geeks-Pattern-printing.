#include <stdio.h>
void pattern_function(int row)
{
    int j = 1;
    int space = 1;
    int k = 1;
 
    while (j <= row)
    {
        space = 1;
 
        while (space <= j - 1)
        {
            printf(" ");
           
            space++;
        }
       
        int last_column = (row * 2 - (2 * j - 1));
 
        k = 1;
 
        while (k <= last_column)
        {
            if (j == 1 || k == 1)
                printf("*");
            else if (k == last_column)
                printf("*");
            else
                printf(" ");
           
            k++;
        }
       
        printf("\n");
       
        j++;
    }
}
 
int main()
{
    int row;
    printf("Enter nunmber of rows for the pattern printing: ");
    scanf("%d",&row);
    pattern_function(row);
    return 0;
}
