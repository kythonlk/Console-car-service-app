#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "product.h"

void Product::add() {
    string name, description;
    int stock;
    double price;
    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter product description: ";
    cin >> description;
    cout << "Enter product stock: ";
    cin >> stock;
    cout << "Enter product price: ";
    cin >> price;
    // code to add new product to products list
    products.push_back({ name, description, stock, price });
    // code to save products list to text file
    ofstream file("product_list.txt", ios::app);
    if (file.is_open()) {
        file << name << "," << description << "," << stock << "," << price << endl;
        file.close();
        cout << "Product added successfully!" << endl;
    }
    else {
        cout << "Error: Could not open file" << endl;
    }
}

void Product::list() {
    cout << "Name  Description  Stock  Price" << endl;
    for (ProductData product : products) {
        cout << product.name << "   " << product.description << "   " << product.stock << "   " << product.price << endl;
    }
}

void Product::search() {
    string name;
    cout << "Enter the product name to search: ";
    cin >> name;
    for (ProductData product : products) {
        if (product.name == name) {
            cout << "Name  Description  Stock  Price" << endl;
            cout << product.name << "   " << product.description << "   " << product.stock << "   " << product.price << endl;
            return;
        }
    }
    cout << "No product found" << endl;
}

void Product::update() {
    string name;
    cout << "Enter the product name to update: ";
    cin >> name;
    for (ProductData& product : products) {
        if (product.name == name) {
            cout << "Enter new product name: ";
            cin >> product.name;
            cout << "Enter new product description: ";
            cin >> product.description;
            cout << "Enter new product stock: ";
            cin >> product.stock;
            cout << "Enter new product price: ";
            cin >> product.price;
            // code to save updated product list to text file
            ofstream file("product_list.txt");
            if (file.is_open()) {
                for (ProductData p : products) {
                    file << p.name << "," << p.description << "," << p.stock << "," << p.price << endl;
                }
                file.close();
                cout << "Product updated successfully!" << endl;
            }
            else {
                cout << "Error: Could not open file" << endl;
            }
            return;
        }
    }
    cout << "No product found" << endl;
}
