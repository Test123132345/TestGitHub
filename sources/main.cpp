#include "Module1.hpp"
#include "Module2.hpp"
#include "Module3.hpp"

#include <iostream>

int main() {
    int user_choice;
    bool exit = false;
    while (!exit) {
    std::cout << "1- Create File" << std::endl;
    std::cout << "2- Append to File" << std::endl;
    std::cout << "3- Search in File" << std::endl;
    std::cout << "4- Exit" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> user_choice;

    switch (user_choice) {
        case 1: {
            input_products();
            break;
        }
        case 2: {
            add_products();
            break;
        }
        case 3: {
            std::cin.get();
            search_products();
            break;
        }
        case 4: {
            exit = true;
            break;
        }
    }
    }
    return 0;
}
