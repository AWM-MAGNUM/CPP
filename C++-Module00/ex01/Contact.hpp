#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    ~Contact();
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    void setFirstName(std::string &fn);
    void setLastName(std::string &ln);
    void setNickName(std::string &nn);
    void setPhoneNumber(std::string &phn); 
    void setDarkestSecret(std::string &ds);
};
#endif
