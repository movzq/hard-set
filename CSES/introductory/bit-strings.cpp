#include <bits/stdc++.h>

int main ()
{
    int64_t size, ans = 1;
    std::cin >> size;

    while (size--) {
        ans <<= 1;
        ans %= (int64_t) (1e9 + 7);
    }
    std::cout << ans << '\n';
    return 0;
}
