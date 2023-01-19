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

    std::ifstream in_file("products.dat", std::ios::binary);
    std::vector<Product> existing_products((std::istreambuf_iterator<char>(in_file)), (std::istreambuf_iterator<char>()));
    in_file.close();

    for (const auto& product : products) {
        existing_products.push_back(product);
    }

    std::ofstream out_file("products.dat", std::ios::binary);
    for (const auto& product : existing_products) {
        out_file.write(reinterpret_cast<const char*>(&product), sizeof(Product));
    }
    out_file.close();

    std::cout << "File updated. Press any key to continue...\n";
    std::cin.ignore();
    std::cin.get();
}