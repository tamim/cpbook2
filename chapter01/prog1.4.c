#include <stdio.h>

int main()
{
    int ara[5] = {50, 60, 70, 80, 90};

    printf("%d, %d, %d, %d, %d\n", ara[0], ara[1], ara[2], ara[3], ara[4]);
    printf("%u\n", ara);
    printf("%u\n", &ara[0]);
    printf("%u\n", &ara[1]);

    return 0;
}

