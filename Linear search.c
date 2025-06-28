#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int index = -1;
    int i;
    for (i = 0; i < 7; i++)
    {
        if (a[i] == 4)
        {
            printf("The number is present at index %d\n", i);
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("4 not found\n");
    }

    return 0;
}
