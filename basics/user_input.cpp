//
// Created by Andre on 2025-06-30.
//
#include <iostream>

int main() {
    int x;

    // prompts the user for input
    // best to have like a try catch block around this to handle invalid input

    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Your number is: " << x;

    std::cout << "\nType a string: ";
    std::string str;
    std::cin >> str;
    std::cout << "Your string is: " << str << std::endl;

    float f;
    std::cout << "Type a float: ";
    std::cin >> f;
    std::cout << "Your float is: " << f << std::endl;

    char c;
    std::cout << "Type a character: ";
    std::cin >> c;
    std::cout << "Your character is: " << c << std::endl;

    return 0;
}