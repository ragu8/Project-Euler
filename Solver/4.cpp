#include <iostream>

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int maxPalindrome = 0;
    for (int i = 999; i >= 100; --i) {
        for (int j = i; j >= 100; --j) {
            int product = i * j;
            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
            }
        }
    }
    std::cout << "Largest palindrome product: " << maxPalindrome << std::endl;
    return 0;
}
