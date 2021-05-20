/* Write a program which takes input as an array of numbers between 
2 to 99, and print only those numbers which are prime and at 
the prime index. For example if input array is [4,5,2,8,9,19,6,12], 
it should print 2 - at index 2, 19 - at index 5. If array contains number 
outside 2-99 it should say invalid input. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[100], n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int temp;

    printf("Enter the values in the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp > 1 && temp < 100)
        {
            arr[i] = temp;
        }
        else
        {
            printf("Invalid input (Enter new value) \n");
            continue;
        }
    }

    printf("\n");
    for (int i = 2; i <= n; i++)
    {
        int flag = 0;
        int max = 0;
        if (arr[i] > i)
            max = arr[i];
        else
            max = i;

        for (int j = 2; j <= max; j++)
        {
            if ((arr[i] % j == 0 && arr[i] > j) || (i % j == 0 && i > j))
            {
                flag = 1;
                break;
            }
            else
                continue;
        }
        if (flag == 0)
        {
            printf("%d at index %d\n", arr[i], i);
        }
    }
    return 0;
}