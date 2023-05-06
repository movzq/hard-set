#include <bits/stdc++.h>

int main ()
{
    uint32_t size,
             sum_given = 0,
             total_sum = 0,
             num;
    std::cin >> size;

    total_sum = size--;
    while (size) {
        std::cin >> num;
        sum_given += num;
        total_sum += size--;
    }

    std::cout << total_sum - sum_given << '\n';
    return 0;
}
