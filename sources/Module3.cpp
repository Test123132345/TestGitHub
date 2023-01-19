#include "Module3.hpp"
void search_products() {
    Product product;
    std::string name;

    std::cout << "Enter the name of the product to search: ";
    std::getline(std::cin, name);

    std::ifstream in_file("products.dat", std::ios::binary);
    std::cout << "List of found products:\n";
    std::cout << " Code         Name          Price\n";
    while (in_file.read(reinterpret_cast<char*>(&product), sizeof(Product))) {
        if (product.name.find(name) != std::string::npos) {
            std::cout << product.code << "          " << product.name 
            << "          " << product.price << std::endl;
        }
    }
    in_file.close();
    std::cout << "Press any key to continue...\n";
    std::cin.ignore();