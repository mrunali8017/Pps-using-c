#include <stdio.h>
int main() 
{
    int a, b, c;

    printf("Enter the number 1");
    scanf("%d", &a);

    printf("Enter the number 2");
    scanf("%d", &b);

    printf("Before swapping a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After swapping a = %d, b = %d\n", a, b);

    return 0;
}
