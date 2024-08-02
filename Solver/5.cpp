#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int result = 1;
    for (int i = 1; i <= 20; ++i) {
        result = lcm(result, i);
    }
    std::cout << "Smallest number divisible by 1 to 20: " << result << std::endl;
    return 0;
}
