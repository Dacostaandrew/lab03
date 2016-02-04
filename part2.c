#include <stdio.h>

/* lab03 part2
by Andrew da Costa*/

int main(void)
{
    int x, y;
    int remain;
    int negNum;

    printf("Please enter any number:\n");
    scanf("%d", &x);
    
    y = x;
    
    if(x < 0)
    {
        negNum = x;
        x = -1 * x;
    }
    
    while(x != 0)
    {
        remain = x % 10;
        
        if(remain == 0)
        {
            printf("Zero ");
        }
        else if(remain == 1)
        {
            printf("One ");
        }
        else if(remain == 2)
        {
            printf("Two ");
        }
        else if(remain == 3)
        {
            printf("Three ");
        }
        else if(remain == 4)
        {
            printf("Four ");
        }
        else if(remain == 5)
        {
            printf("Five ");
        }
        else if(remain == 6)
        {
            printf("Six ");
        }
        else if(remain == 7)
        {
            printf("Seven ");
        }
        else if(remain == 8)
        {
            printf("Eight ");
        }
        else
        {
            printf("Nine ");
        }
        x = x / 10;
    }
    if(negNum < 0)
    printf("Negative");
    printf("\n");
}