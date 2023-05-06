#include <bits/stdc++.h>

int main ()
{
    uint64_t num;
    std::cin >> num;

    while (num != 1) {
        std::cout << num << ' ';
        if ((num & 1)) {
            num *= 3;
            num++;
        } else
            num /= 2;
    }
    std::cout << "1\n";
    return 0;
}
