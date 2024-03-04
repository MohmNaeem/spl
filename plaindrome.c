#include <stdio.h>

int main()
{
    int n, m = 0, r, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;

    while (n != 0)
    {
        r = n % 10;
        m = m * 10 + r;
        n = n / 10;
    }

    if (a == m)
    {
        printf("%d is plaindrome\n", a);
    }
    else
    {
        printf("%d is not plaindrome\n", a);
    }

    return 0;
}