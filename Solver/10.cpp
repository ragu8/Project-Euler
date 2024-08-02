#include <iostream>
#include <vector>

long long sumOfPrimesBelow(int limit) {
    std::vector<bool> isPrime(limit, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    long long sum = 0;
    for (int i = 2; i < limit; i++) {
        if (isPrime[i]) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int limit = 2000000;
    std::cout << "Sum of all the primes below " << limit << " is: " << sumOfPrimesBelow(limit) << std::endl;
    return 0;
}
