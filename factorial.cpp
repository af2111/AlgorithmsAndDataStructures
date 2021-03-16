#include <iostream>

int factorial(int number) {
    if(number == 1) {
        return number;
    }
    return number * factorial(number - 1);
}

int main() {
    std::cout << factorial(5) << "\n";
}
