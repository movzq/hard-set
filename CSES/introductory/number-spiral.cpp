#include <bits/stdc++.h>

int main ()
{
    int64_t cases, xpos, ypos;
    std::cin >> cases;

    while (cases--) {
        std::cin >> ypos >> xpos;
        if (ypos > xpos) {
            if (!(ypos & 1))
                std::cout << (ypos * ypos) - xpos + 1;
            else {
                ypos--; std::cout << (ypos * ypos) + xpos;
            }
        }
        else {
            if (!(xpos & 1)) {
                xpos--; std::cout << (xpos * xpos) + ypos;
            }
            else
                std::cout << (xpos * xpos) - ypos + 1;
        }
        putchar('\n');
    }

    return 0;
}
