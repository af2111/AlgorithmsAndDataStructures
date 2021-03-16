#include <iostream>

int faculty(int number) {
    if(number == 1) {
        return number;
    }
    return number * faculty(number - 1);
}

int main() {
    std::cout << faculty(5) << "\n";
}
