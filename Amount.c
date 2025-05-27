#include <stdio.h>
int main() 
{
    int num, r1, q, r2, q2, r3;
    printf("Enter the three-digit number");
    scanf("%d", &num);
    q = num % 100;
    r2 = q / 10;         
    q2 = q % 10;
    r3 = q2;             
    printf("Number of 100 rupees notes %d\n", r1);
    printf("Number of 10 rupees notes %d\n", r2);
    printf("Number of 1 rupee coins   %d\n", r3);
    return 0;
}
