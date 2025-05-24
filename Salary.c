#include <stdio.h>
int main()
{
    int basic, da, hra, gross;
    printf("Enter the basic salary of Ramesh");
    scanf("%d", &basic);
    da = 0.40 * basic;
    hra = 0.20 * basic ;
    gross = basic + da + hra;
    printf("Gross salary of Ramesh = %2d\n", gross);
    return 0;
}
