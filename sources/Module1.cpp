#include <Module1.hpp>

void input_products() {
    int number_of_products;
    std::cout << "Enter the number of products: ";
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

    std::ofstream out_file("products.dat", std::ios::binary);
    for (const auto& product : products) {
        out_file.write(reinterpret_cast<const char*>(&product), sizeof(Product));
    }
    out_file.close();

    std::cout << "File created. Press any key to continue...\n";
    std::cin.ignore();
    std::cin.get();
}