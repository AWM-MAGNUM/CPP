#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int current;
    public:
        PhoneBook();
        void addContact(std:: string &fn, std:: string &ln, std:: string &nn, std:: string &phn, std:: string &ds);
        void displayContacts() const;
        void displayContactDetails(int index) const;
        int getCurrentCount() const ;
};
#endif