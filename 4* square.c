#include <stdio.h>
int main() 
{
    int p, q, space;
    int n = 4;
    for (p = 1; p <= n; p++)
    {
        for (space = 1; space <= n ; space++)
        {
            printf(" ");
        }
        for (q = 1; q <= n; q++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
