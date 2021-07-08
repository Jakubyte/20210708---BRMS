#ifndef _STRINGVALID_HPP
#define _STRINGVALID_HPP

namespace jakubyte
{
    // check length of c string
    unsigned int string_length(const char *);

    // string int to int (can only do unsigned ints)
    unsigned int citoi(const char *);

    // char int to int (can only do unsigned ints)
    unsigned int citoi(const char);

    // count the number of time a character appears in a string
    unsigned int count_occurrance(const char *, const char);
}

#endif // _STRINGVALID_HPP