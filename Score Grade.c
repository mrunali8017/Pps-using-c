#include <stdio.h>
int main() 
{
    int score;
    printf("Enter the score");
    scanf("%d", &score);
    if (score >= 90)
    {
        printf("Grade A");
    } 
    else if (score > 70)
    {
        printf("Grade B");
    }
    else if (score > 60)
    {
        printf("Grade C");
    } 
    else if (score > 50) 
    {
        printf("Grade D");
    }
    else if (score >= 40)
    {
        printf("Grade E");
    } 
    else
    {
        printf("Fail");
    }

    return 0;
}
