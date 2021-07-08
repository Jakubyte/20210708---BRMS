#include <exception>

#include "../include/AccountHolder.hpp"
#include "../include/StringValidation.hpp"

namespace jakubyte
{
    AccountHolder::AccountHolder(const char *fname, const char *lname, unsigned int age, const char *dob) : m_fname(fname),
                                                                                                            m_lname(lname),
                                                                                                            m_age(age),
                                                                                                            m_str_dob(dob)
    {
        validateDate(m_str_dob);
    }

    std::ostream &operator<<(std::ostream &os, const AccountHolder &ac)
    {
        os << "Name: " << ac.m_lname << ", " << ac.m_fname << "\n"
           << "DOB: " << ac.m_str_dob << " - Age: " << ac.m_age;
        return os;
    }

    AccountHolder::UIDate AccountHolder::parseDate(const char *str_date, unsigned int length, unsigned int day, unsigned int month, unsigned int year)
    {
        UIDate uidate{day, month, year};
        return uidate;
    }

    void AccountHolder::validateDate(const char *str_date)
    {
        unsigned int l = string_length(str_date);

        // check str legnth
        if (l == 10)
        {
            // check date format
            if (str_date[2] == '/' && str_date[5] == '/')
            {
                unsigned int nums[8];
                unsigned int i = 0;
                unsigned int j = 0;

                while (*str_date != '\0')
                {
                    if (!(i == 2 || i == 5))
                    {
                        nums[j++] = citoi(*str_date);
                    }
                    i++;
                    str_date++;
                }

                unsigned int day = (nums[0] * 10) + nums[1];
                unsigned int month = (nums[2] * 10) + nums[3];
                unsigned int year = (nums[4] * 1000) + (nums[5] * 100) + (nums[6] * 10) + nums[7];

                if (day <= 31 && month <= 12 && year <= 9999)
                {
                    m_ui_dob = parseDate(str_date, l, day, month, year);
                }
                else
                {
                    throw std::runtime_error("date values incorrect");
                }
            }
            else
            {
                throw std::runtime_error("date format incorrect");
            }
        }
        else
        {
            throw std::runtime_error("date length incorrect");
        }
    }
}