#include <stdio.h>

void main()
{
    int a, b;

    printf("enter a and b number:");
    scanf("%d%d", &a, &b);

    if (a == b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}