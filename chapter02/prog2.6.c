#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    int *p;

    p = &x;
    y = *p;
    *p = 15;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of *p: %d\n", *p);
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    printf("Value of p: %p\n", p);

    return 0;
}

