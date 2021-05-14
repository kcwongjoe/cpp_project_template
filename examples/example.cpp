#include "example1.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Example 1: " << std::endl;   
    std::cout << "Enter the example number: ";

    int example_index;
    std::cin >> example_index;

    if (example_index == 1)
    {
        eg_1();
    }
}