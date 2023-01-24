#include <Module2.hpp>

void add_products() {
    int number_of_products;
    std::cout << "Enter the number of products to add: ";
    std::cin >> number_of_products;

    std::vector<Product> products(number_of_products);

    std::cout << "Enter the details of the products:\n";
    for (int i = 0; i < number_of_products; i++) {
        std::cout << i+1 << "-code: ";
        std::cin >> products[i].code;
        std::cout << i+1 << "-name: ";
        std::cin >> products[i].name;
        std::cout << i+1 << "-price: ";
        std::cin >> products[i].price;
    }

    std::fstream file("products.dat", std::ios::binary | std::ios::in | std::ios::out);
    std::vector<Product> existing_products;
    file.seekp(0);
    // push
    for (const auto &product : products) {
        existing_products.push_back(product);
    }
    for (const auto& product : existing_products) {
        file.write((char*)&product, sizeof(Product));
    }
    file.close();

    std::cout << "File updated. Press any key to continue...\n";
    std::cin.get();
}