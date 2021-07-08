#ifndef _ACCOUNTHOLDER_HPP
#define _ACCOUNTHOLDER_HPP

#include <ostream>

namespace jakubyte
{

    class AccountHolder
    {
    public:
        //AccountHolder(first name, last name, age, DOB["DD/MM/YYYY"])
        explicit AccountHolder(const char *, const char *, unsigned int, const char *);
        friend std::ostream &operator<<(std::ostream &, const AccountHolder &);

    private:
        struct UIDate
        {
            // struct to store string dob as unsigned ints
            unsigned int day;
            unsigned int month;
            unsigned int year;
        };

        const char *m_fname;
        const char *m_lname;
        const char *m_str_dob;
        unsigned int m_age;
        UIDate m_ui_dob;
    }; // class AccountHolder

} // namespace jakubyte

#endif // _ACCOUNTHOLDER_HPP