#include <stdio.h>

/*Part 1 Lab03
by Andrew da Costa*/

int main(void)
{
    int x;
    int y;
    
    printf("Please enter an integer:");
    scanf("%d", &x);
    printf("Please enter another integer:");
    scanf("%d", &y);
    
    while (x != y)
    {
        if(x > y)
            x -= y;
        else
            y -= x;
    }
    
    printf("The greatest common denominator is %d \n",x);
    
}