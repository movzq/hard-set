#include <bits/stdc++.h>

int main ()
{
    int32_t num;
    std::cin >> num;

    if (num == 2 || num == 3) {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    std::string even, odd;
    while (num != 0) {
        if (!(num & 1))
            even += std::to_string(num) + ' ';
        else
            odd += std::to_string(num) + ' ';
        num--;
    }
    std::cout << odd << even << '\n';
    return 0;
}
