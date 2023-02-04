#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

class Product {
private:
    struct ProductData {
        std::string name;
        std::string description;
        int stock;
        double price;
    };
    vector<ProductData> products;

public:
    void add();
    void list();
    void search();
    void update();
};

#endif
