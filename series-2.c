#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for(int i = 1; i <= n; i++)
    {
        sum +=  (i * i);
    }
    printf("Sum = %d\n", sum);

    return 0;
}