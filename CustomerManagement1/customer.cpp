//
//  customer.cpp
//  CustomerManagement1
//
//  Created by Isaac Adeleke on 10/21/24.
//

#include "customer.hpp"
#include <iostream>

// Constructor definition
Customer::Customer(int c_id, std::string c_name, std::string c_email) : id(c_id), name(c_name), email(c_email) {}

// Getters
int Customer::getID() const {
    return id;
}

std::string Customer::getName() const {
    return name;
}

std::string Customer::getEmail() const {
    return email;
}

// Setters
void Customer::setID(int c_id) {
    id = c_id;
}

void Customer::setName(std::string c_name) {
    name = c_name;
}

void Customer::setEmail(std::string c_email) {
    email = c_email;
}

// Print method
void Customer::printCustomer() const {
    std::cout << "Customer ID: " << id << std::endl;
    std::cout << "Customer Name: " << name << std::endl;
    std::cout << "Customer Email: " << email << std::endl;
}
