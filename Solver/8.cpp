#include <iostream>

int findPythagoreanTripletProduct() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                return a * b * c;
            }
        }
    }
    return -1; // Should not reach here
}

int main() {
    std::cout << "Product of the Pythagorean triplet for which a + b + c = 1000 is: " << findPythagoreanTripletProduct() << std::endl;
    return 0;
}
