#include <stdio.h>

int main()
{
    int n,m=0,r;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        r = n % 10;
        m = m * 10 + r;
        n = n / 10;
    }

    printf("%d\n", m);

    return 0;
}