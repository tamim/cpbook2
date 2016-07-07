#include <stdio.h>

int main()
{
    char ch1 = 'A', ch2 = 'B';
    int n1 = 100, n2 = 100000;
    unsigned int address1 = &ch1;
    unsigned int address2 = &ch2;
    unsigned int address3 = &n1;
    unsigned int address4 = &n2;

    printf("%c, %u\n", ch1, address1);
    printf("%c, %u\n", ch2, address2);
    printf("%d, %u\n", n1, address3);
    printf("%d, %u\n", n2, address4);

    return 0;
}

