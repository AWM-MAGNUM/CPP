#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    current = 0;
}

void PhoneBook::addContact(std::string &fn, std::string &ln, std::string &nn, std::string &phn, std::string &ds)
{
    int i = 0;

    if(current < 8)
    {
        contacts[current].setFirstName(fn);
        contacts[current].setLastName(ln);
        contacts[current].setNickName(nn);
        contacts[current].setPhoneNumber(phn);
        contacts[current].setDarkestSecret(ds);
        current++;
    }
    else
    {
        while(i < 7)
        {
            contacts[i] = contacts[i + 1];
            i++;
        }
        contacts[7].setFirstName(fn);
        contacts[7].setLastName(ln);
        contacts[7].setNickName(nn);
        contacts[7].setPhoneNumber(phn);
        contacts[7].setDarkestSecret(ds);
    }
}

std::string rmTab(const std::string& str) 
{
    std::string newStr = str;
    for (size_t pos = newStr.find("\t"); pos != std::string::npos; pos = newStr.find("\t", pos))
        newStr.replace(pos, 1, " ");
    return newStr;
}

void PhoneBook::displayContacts() const
{
    int i = 0;
    
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    while(i < current)
    {
        std::string first_name = rmTab(contacts[i].getFirstName());
        std::string last_name = rmTab(contacts[i].getLastName());
        std::string nickname = rmTab(contacts[i].getNickName());

        if(first_name.length() > 10)
            first_name = first_name.substr(0, 9) + ".";
        if(last_name.length() > 10)
            last_name = last_name.substr(0, 9) + ".";
        if(nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << first_name << "|";
        std::cout << std::setw(10) << last_name << "|";
        std::cout << std::setw(10) << nickname << std::endl;
        i++;
    }
}

void PhoneBook::displayContactDetails(int index) const
{
    if(index < 1 || index > current)
    {
        std::cout << "Index invalide!" << std::endl;
        return;
    }
    
    std::cout << "First Name: " << contacts[index - 1].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index - 1].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index - 1].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index - 1].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index - 1].getDarkestSecret() << std::endl;
}
