#include <iostream>

int main()
{
    int a = 0, b = 1;
    int sum_even;
    while (b < 4000) {
        if (b % 2 == 0) {
            sum_even += b;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
