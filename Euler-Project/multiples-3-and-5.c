#include <stdio.h>

int main ()
{
    int sum = 8;
    for (int i = 6; i < 1000; i++)
        if (!(i % 3) || !(i % 5))
            sum += i;

    printf("%d\n", sum);
    return 0;
}
