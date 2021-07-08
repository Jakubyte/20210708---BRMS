#include "../include/AccountHolder.hpp"

namespace jakubyte
{
    AccountHolder::AccountHolder(const char *fname, const char *lname, unsigned int age, const char *dob) : m_fname(fname),
                                                                                                            m_lname(lname),
                                                                                                            m_age(age),
                                                                                                            m_str_dob(dob)
    {
        // TODO : parse m_str_dob and store values in UIDate
    }

    std::ostream &operator<<(std::ostream &os, const AccountHolder &ac)
    {
        os << "Name: " << ac.m_lname << ", " << ac.m_fname << "\n"
           << "DOB: " << ac.m_str_dob << " - Age: " << ac.m_age;
        return os;
    }
}