#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName, streetAddress, city, zipCode;

    // Prompt user to enter their information
    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cin.ignore(); // Ignore the newline character left in the buffer

    std::cout << "Enter your street address: ";
    std::getline(std::cin, streetAddress);

    std::cout << "Enter your city: ";
    std::getline(std::cin, city);

    std::cout << "Enter your zip code: ";
    std::cin >> zipCode;

    // Print the information back to the console
    std::cout << "\nPrinting Information:\n";
    std::cout << "First Name: " << firstName << "\n";
    std::cout << "Last Name: " << lastName << "\n";
    std::cout << "Street Address: " << streetAddress << "\n";
    std::cout << "City: " << city << "\n";
    std::cout << "Zip Code: " << zipCode << "\n";

    return 0;
}