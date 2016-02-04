#include <stdio.h>

/* lab03 part 4
by Andrew da Costa*/

int main(int argc, char *argv[])
{
int a, b, sum = 0, remain;

printf("Enter a number:");
scanf("%d", &a);

b = a;

while(b != 0)
{
    remain = b % 10;
    sum = sum + remain;
    b = b / 10;
}

printf("Sum of digits is %d\n", sum);


}