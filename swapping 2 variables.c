#include <stdio.h>
int main() 
{
    int a, b;

    printf("Enter the number 1");
    scanf("%d", &a);

    printf("Enter the number 2");
    scanf("%d", &b);

    printf("Before swapping a = %d, b = %d\n", a, b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a = %d, b = %d\n", a, b);

    return 0;
}
