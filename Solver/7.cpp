#include <iostream>
#include <vector>

bool isPrime(int n, const std::vector<int>& primes) {
    for (int prime : primes) {
        if (prime * prime > n) break;
        if (n % prime == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> primes = {2};
    int num = 3;
    while (primes.size() < 10001) {
        if (isPrime(num, primes)) {
            primes.push_back(num);
        }
        num += 2;
    }
    std::cout << "10,001st prime: " << primes.back() << std::endl;
    return 0;
}
