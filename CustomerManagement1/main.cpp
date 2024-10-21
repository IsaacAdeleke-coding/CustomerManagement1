//
//  main.cpp
//  CustomerManagement1
//
//  Created by Isaac Adeleke on 10/21/24.
//

// main.cpp
#include <iostream>
#include "customer.hpp"

int main() {
    int id;
    std::string name;
    std::string email;

    // Ask the user for customer details
    std::cout << "Enter Customer ID: ";
    std::cin >> id;
    
    std::cout << "Enter Customer Name: ";
    std::cin.ignore(); // To clear the buffer before taking string input
    std::getline(std::cin, name);

    std::cout << "Enter Customer Email: ";
    std::getline(std::cin, email);

    // Create a Customer object
    Customer customer(id, name, email);

    // Print the stored customer details
    std::cout << "Customer Details:" << std::endl;
    customer.printCustomer();

    return 0;
}
