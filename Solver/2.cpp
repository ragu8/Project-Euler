#include <iostream>

int main() {
    int a = 1, b = 2;
    int sum = b;
    while (b <= 4000000) {
        int next = a + b;
        a = b;
        b = next;
        if (b % 2 == 0) {
            sum += b;
        }
    }
    std::cout << "Sum of even-valued Fibonacci terms below 4 million: " << sum << std::endl;
    return 0;
}
