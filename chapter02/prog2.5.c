#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;
    *p = 20;
    x = 15;

    printf("Value of x: %d\n", x);
    printf("Value stored at location %p is %d\n", p, *p);

    printf("Address of x: %p\n", &x);
    printf("Address of x: %p\n", p);

    return 0;
}

