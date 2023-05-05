#include <stdio.h>

int main ()
{
    int prev = 1, this = 2;
    int sum = 2, next = 0;

    while ((next = (prev + this)) < 4000000) {
        prev = this;
        this = next;

        if (!(this & 1))
            sum += this;
    }

    printf("%d\n", sum);
    return 0;
}
