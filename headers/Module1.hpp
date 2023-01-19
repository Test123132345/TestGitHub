#pragma once

#include <vector>
#include <fstream>
#include <iostream>
#include <string>

struct Product {
    std::string code;
    std::string name;
    double price;
};

void input_products();