//Problem 2 - Multiple pairs of number 'num'
//To find out all positive whole numbers x and y satisfying the equation x*y = num

#include <stdio.h>
int main()
{

    int x, y, num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    for (x = 1; x <= num; x++)
    {
        for (y = 1; y <= num; y++)
        {
            if (x * y == num)
            {
                printf("%d %d", x, y);
                printf(" \n");
            }
        }
    }

    return 0;
}