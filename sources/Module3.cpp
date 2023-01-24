#include "Module3.hpp"
#include <string.h>

void search_products() {
    Product product;
    char name[100];

    std::cout << "Enter the name of the product to search: ";
    std::cin.getline(name, 100);

    std::ifstream in_file("products.dat", std::ios::binary);
    std::cout << "List of found products:\n";
    std::cout << " Code         Name          Price\n";
    // while (in_file.read((char*)&product, sizeof product)) {
    //     if (_strnicmp(product.name.c_str(), name, strlen(name))) {
    //         std::cout << product.code << "          " << product.name 
    //         << "          " << product.price << std::endl;
    //     }
    // }
    in_file.close();
    std::cout << "Press any key to continue...\n";
    std::cin.ignore();
}