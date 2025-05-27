#include <stdio.h>
int main() 
{
    int num, rem1, rem2, rem3, q1, q2, total;
    printf("Enter a three-digit number");
    scanf("%d", &num);
    rem1 = num % 10;
    q1 = num / 10;
    rem2 = q1 % 10;
    q2 = q1 / 10;
    rem3 = q2 % 10;
    total = rem1 + rem2 + rem3;
    printf("The sum of the digits of the number is %d\n", total);
    return 0;
}
