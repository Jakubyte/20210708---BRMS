#ifndef ACCOUNT_HPP
#define ACOUNT_HPP

#include <ostream>

#include "AccountHolder.hpp"

namespace jakubyte
{
    typedef unsigned char uchar8_t;

    class Money
    {
    public:
        /*
            Constructor (whole value, change) e.g.: Money(120, 85) = 120.85
            Change over the value 99 will add the remainder to the whole value e.g.: Money(2, 124) = 3.24
        */
        Money(const int, const uchar8_t);
        Money(const float);
        friend std::ostream &operator<<(std::ostream &os, const Money &m);

    private:
        int m_whole;
        uchar8_t m_change;

        // transforms passed in values into Money class members
        void convert(uchar8_t);
        void convert(float);
    };

    enum class BankType
    {
        STANDARD,
        SAVINGS
    };

    class Account
    {
    public:
        // Constructor(STANDARD | SAVINGS, AccountHolder, amount)
        Account(const BankType, const AccountHolder &, const Money &);

    private:
        const BankType m_type;
        const AccountHolder *m_holder;
        const Money *balance;
    };
}

#endif // ACCOUNT_HPP