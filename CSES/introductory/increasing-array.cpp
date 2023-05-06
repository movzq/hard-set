#include <bits/stdc++.h>

int main ()
{
    uint64_t size;
    std::cin >> size;

    uint64_t arr[size], total = 0;
    for (size_t i = 0; i < size; i++) {
        std::cin >> arr[i];

        int32_t difference = arr[i - 1] - arr[i];
        if (difference > 0 && i) {
            arr[i] += difference;
            total += difference;
        }
    }

    std::cout << total << '\n';
    return 0;
}
