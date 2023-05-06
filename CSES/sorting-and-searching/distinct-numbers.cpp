#include <bits/stdc++.h>

int main ()
{
    uint32_t size, num;
    std::cin >> size;

    std::set<uint32_t> nums;
    while (size--) {
        std::cin >> num;
        nums.insert(num);
    }

    std::cout << nums.size() << '\n';
    return 0;
}
