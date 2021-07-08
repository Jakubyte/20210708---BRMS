#include <iostream>
#include "../include/StringValidation.hpp"

#define LOG(x) std::cout << (x) << std::endl;

namespace jakubyte
{
    unsigned int string_length(const char *str)
    {
        unsigned int i = 0;

        while (*str != '\0')
        {
            i++;
            str++;
        }

        return i;
    }

    unsigned int citoi(const char *str)
    {
        // "0" - 48 = 0
        unsigned int l = string_length(str);
        unsigned int i = 1;
        unsigned int offset = 1;
        unsigned int result = 0;

        while (i < l)
        {
            offset *= 10;
            i++;
        }

        i = 0;

        while (i < l)
        {
            unsigned int c = str[i++] - 48;
            result += (c * offset);

            if (offset > 1)
            {
                offset /= 10;
            }
        }

        return result;
    }

    unsigned int citoi(const char c)
    {
        // "0" - 48 = 0
        return c - 48;
    }

    unsigned int count_occurrance(const char *str, const char c)
    {
        unsigned int i = 0;

        while (*str != '\0')
        {
            if (*str == c)
            {
                i++;
            }

            str++;
        }

        return i;
    }
}