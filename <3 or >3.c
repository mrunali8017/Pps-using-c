#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    if (number > 3)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}
