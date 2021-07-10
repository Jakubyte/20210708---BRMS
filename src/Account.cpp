#include "../include/Account.hpp"

namespace jakubyte
{
    Money::Money(const int whole, const uchar8_t change) : m_whole(whole), m_change(change)
    {
        if (m_change > 99)
        {
            convert(m_change);
        }
    }

    Money::Money(float amount)
    {
        convert(amount);
    }

    void Money::convert(uchar8_t change)
    {
        int r = 0;

        while (change > 99)
        {
            r++;
            change -= 100;
        }

        m_change = change;
        m_whole += r;
    }

    void Money::convert(float amount)
    {
        int total_change = (int)(amount * 100);
        m_whole = total_change / 100;
        m_change = total_change % 100;
    }

    std::ostream &operator<<(std::ostream &os, const Money &m)
    {
        os << "$" << m.m_whole << "." << (int)m.m_change;
        return os;
    }
}