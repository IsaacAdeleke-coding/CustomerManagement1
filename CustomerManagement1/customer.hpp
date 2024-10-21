//
//  customer.hpp
//  CustomerManagement1
//
//  Created by Isaac Adeleke on 10/21/24.
//

#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

class Customer {
private:
    int id;
    std::string name;
    std::string email;

public:
    // Constructor
    Customer(int c_id, std::string c_name, std::string c_email);

    // Getters
    int getID() const;
    std::string getName() const;
    std::string getEmail() const;

    // Setters
    void setID(int c_id);
    void setName(std::string c_name);
    void setEmail(std::string c_email);

    // Print Customer details
    void printCustomer() const;
};

#endif
