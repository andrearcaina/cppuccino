//
// Created by Andre on 2025-06-25.
//
#include <iostream>
#include <string>

int main() {
    // integers
    int number = 5;
    std::cout << number << std::endl;
    number += 10;

    std::cout << number << std::endl;
    std::cout << "Number is: " << number << std::endl;
    // This is the correct way to concatenate a string with an integer

    // float
    float decimal = 3.14f;
    std::cout << decimal << std::endl;
    decimal += 1.0f;
    std::cout << decimal << std::endl;

    // double
    double dec2 = 2.12030321031;
    std::cout << dec2 << std::endl;
    dec2 += 1.13251541421;
    std::cout << dec2 << std::endl;

    // character
    char letter = 'A';
    std::cout << letter << std::endl;
    letter += 1; // This will change 'A' to 'B'
    std::cout << letter << std::endl;

    // string
    std::string text = "Hello, World!";
    std::cout << text << std::endl;

    text += " How are you?";
    std::cout << text << std::endl;

    // boolean
    bool x = true;
    std::cout << x << std::endl; // prints 1 (true), but to make it actually print true, we can use std::boolalpha
    std::cout << std::boolalpha << x << std::endl; // prints true

    // const and reference
    const int constant = 10;
    std::cout << "Const: " << constant << std::endl;
    // constNumber += 5; // This line would cause a compilation error because constNumber is constant
    int &ref = number; // refNumber is a reference to number (not a copy, but an alias)
    std::cout << "Ref: " << ref << std::endl;
    ref += 5; // This will change number as well, which means number is now 20
    std::cout << "Number: " << number << std::endl; // number is now 20

    // constexpr
    constexpr int constExprNumber = 15; // This is a compile-time constant
    std::cout << "Compile time constant: " << constExprNumber << std::endl;
    // constExprNumber += 5; // This line would cause a compilation error because constExprNumber is a compile-time constant

    // type inference
    auto autoN = 25; // The type is deduced to int
    std::cout << "Type infernece: " << autoN << std::endl;

    // convert int to float
    int intValue = 42;
    float floatValue = static_cast<float>(intValue);
    std::cout << "Converted int to float: " << floatValue << std::endl;
    // convert float to int
    float anotherFloatValue = 3.14f;
    int convertedIntValue = static_cast<int>(anotherFloatValue);
    std::cout << "Converted float to int: " << convertedIntValue << std::endl;

    // static_cast<type>(expression) is used to convert between types in C++ (not always)
    // there are other types of casts in C++ like dynamic_cast, const_cast, and reinterpret_cast

    // can do basic math too
    const int a = 10;
    const int b = 20;

    const int sum = a + b;
    const int mul = a * b;
    const int sub = b - a;
    const int div = b / a;
    const int mod = b % a;

    // array
    const int arr[5] = {sum, mul, sub, div, mod};

    std::cout << "Array: " << arr << std::endl; // prints the address (memory location) of the array, not the contents (like C)
    std::cout << "Array contents: ";
    for (int i = 0; i < 5; i++) { // have to use control statements (more on this later)
        std::cout << arr[i] << " ";
    }

    return 0;
}

