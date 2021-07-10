// psudo Bank Record Managment System
// Developer    - Jakub Dymarkowski
// GitHub       - https://github.com/Jakubyte
// Start Date   - 8th July 2021
// Last Updated - 9th July 2021

#include <iostream>

#include "../include/AccountHolder.hpp"
#include "../include/StringValidation.hpp"
#include "../include/Account.hpp"

int main(int argc, char **argv)
{
    // TODO: implement addition args
    // if (argc > 1)
    // {
    //
    // }

    jakubyte::Money ic(124, 214);
    jakubyte::Money f(124.124f);

    std::cout << ic << std::endl;
    std::cout << f << std::endl;

    return 0;
}