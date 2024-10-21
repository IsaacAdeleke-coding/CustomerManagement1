# Customer Management Program

This is a simple C++ project to manage customer information. The program asks the user to input a customer's ID, name, and email, stores the data in a `Customer` object, and then prints the stored information.

## Project Structure

The project consists of the following files:

1. **customer.hpp**: This file contains the `Customer` class definition with attributes like `id`, `name`, and `email`, along with getter and setter methods.
2. **customer.cpp**: This file contains the implementation of the methods declared in `customer.hpp`. It includes a constructor, getter and setter methods, and a function to print customer details.
3. **main.cpp**: This is the main driver file. It prompts the user to enter the customer ID, name, and email, then uses the `Customer` class to create a new customer object and displays the details.

## How to Compile and Run the Program

### Prerequisites

- You need to have a C++ compiler installed (e.g., Xcode, Visual Studio).

### Compilation

To compile the program, run the following command in your terminal:

```bash
g++ main.cpp customer.cpp -o customer_app
Running the Program
To run the program after compiling it, execute the following command:
./customer_app
Sample Input and Output
Example of running the program:
Enter Customer ID: 123
Enter Customer Name: John Doe
Enter Customer Email: john.doe@example.com
Enter Customer ID: 123
Enter Customer Name: John Doe
Enter Customer Email: john.doe@example.com
Expected output:
Customer Details:
Customer ID: 123
Customer Name: John Doe
Customer Email: john.doe@example.com
License

This project is licensed under the MIT License.
