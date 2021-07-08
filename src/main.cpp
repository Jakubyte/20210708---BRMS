// psudo Bank Record Managment System
// Developer    - Jakub Dymarkowski
// GitHub       - https://github.com/Jakubyte
// Start Date   - 8th July 2021
// Last Updated - 8th July 2021

#include <iostream>

#include "../include/AccountHolder.hpp"
#include "../include/StringValidation.hpp"

int main(int argc, char **argv)
{
    // TODO: implement addition args
    // if (argc > 1)
    // {
    //
    // }

    jakubyte::AccountHolder ac("Jakub", "Byte", 21, "31/12/9999");
    std::cout << ac << std::endl;

    return 0;
}