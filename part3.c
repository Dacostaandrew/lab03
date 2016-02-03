#include <stdio.h>

/* Part 3 lab03
by Andrew da Costa*/

int main(void)
{
    int x;
    int i = 0;
    int h;
    int y;
    int fact = 1;
    
    printf("Please enter an integer:\n");
    scanf("%d", &x);
    
    
    while (i <= x)
    {
        y = i;
        printf("%d ", y);
        y = i * i;
        printf("%d ", y);
        y = i * i * i;
        printf("%d ", y);
        
        h = i;
        
            if(h == 0)
            {
                printf("1\n");
            }
            else 
            {
                fact = 1;
                while(h > 1)
                {
                    fact *= h;
                    h --;
                }
                printf("%d\n",fact);
            }
        i ++;
    }
}