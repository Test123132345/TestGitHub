#include <iostream>
int sum(int a, int b){
    return a + b;
}
int main() {
    std::cout << "Hello World!\nInput rand num";
    int num;
    std::cin >> num;
    if (num == 1) {
        std::cout << "HUI!";
    }
    else {
        std::cout << "test";
    }
    std::cout << "99";

    return 0;
}
