#include <stdio.h>

int main() 
{
    int Phy, che, maths, bio, sum;
    float avg, Per;

    printf("Enter marks obtained in Physics");
    scanf("%d", &Phy);

    printf("Enter marks obtained in ");
    scanf("%d", &che);

    printf("Enter marks obtained in Mathematics");
    scanf("%d", &maths);

    printf("Enter marks obtained in Biology");
    scanf("%d", &bio);

    sum = Phy + che + maths + bio;
    avg = sum / 4;
    Per = (sum / 400) * 100;

    printf("The total marks obtained are %d", sum);
    printf("The average is %2f\n", avg);
    printf("The percentage marks are %2f", Per);

    return 0;
}
