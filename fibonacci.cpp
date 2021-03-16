#include <iostream>

unsigned int fib(int num) {
    int first = 0;
    int second = 1;
    int temp = 0;
    for (int i = 0; i < num; i++)
    {
        temp = first;
        first = second;
        second = temp + second;
    }
    return first;
}

int main() {
    std::cout << fib(100) << "\n";
}