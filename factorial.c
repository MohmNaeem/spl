#include <stdio.h>

int main()
{
    int number, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &number);

    int i;
    for (i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("%d! = %d\n", number, factorial);

    return 0;
}