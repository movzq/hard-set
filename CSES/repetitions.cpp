#include <bits/stdc++.h>

int main ()
{
    std::string str;
    std::cin >> str;

    uint32_t longest = 1, current = 1;
    for (size_t i = 1; i < str.size(); ++i) {
        while (str[i] == str[i - 1]) {
            current++;
            i++;
        }
        
        if (current > longest)
            longest = current;
        current = 1;
    }
    std::cout << longest << '\n';
    return 0;
}
