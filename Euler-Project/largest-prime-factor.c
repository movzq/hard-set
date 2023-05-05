#include <stdio.h>
#include <stdint.h>

int main ()
{
    uint64_t number = 600851475143;
    uint64_t current = 2;

    while (current < number) {
        while (!(number % current)) {
            number /= current;
        }
        current++;
    }

    printf("%ld\n", current);
    return 0;
}
